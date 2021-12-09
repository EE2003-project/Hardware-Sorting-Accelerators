#include "firmware.h"
#include "stats_helper.c"
#include "sort_print.c"
#define SORTMEM 0x30000000
#define RST 0x40000000
#define DIN 0x40000004
#define NOW1 0x40000008
#define YVALID 0x4000000C
#define DOUT 0x40000010
#define NOW2 0x40000014

int read_inputs(int a[]);
void sort(void);
void write_outputs(int n);
void bubble_c(int a[],int n);
void merge_c(int a[],int low,int high);

void merge_c(int a[],int low,int high){
    if(low==high){
        return;
    }
    if(high==low+1){
        if(a[high]<a[low]){
            int temp=a[low];
            a[low]=a[high];
            a[high]=temp;
            return;
        }

    }
    merge_c(a,low,(low+high)>>1);
    merge_c(a,((low+high)>>1)+1,high);
    int c1=low,c2=((low+high)>>1)+1,i;
    int t[high-low+1];
    for(i=0;c1<=((low+high)>>1)&&c2<=high;i++){
        if(a[c1]<a[c2]){
            t[i]=a[c1];
            c1++;
        }
        else if(a[c2]<a[c1]){
            t[i]=a[c2];
            c2++;
        }
    }
    if(c1>(low+high)>>1){
    for(i=0;i<=high-low;i++){
        t[i]=a[c2];
        c2++;}}
    else{for(i=0;i<=high-low;i++){
        t[i]=a[c1];
        c1++;

    }
    }
    for(i=0;i<=high-low;i++)
    a[low+i]=t[i];
}

void bubble_c(int a[],int n){
        for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(a[i]>a[j]){
                        int temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
        }
}

int read_inputs(int a[]){
    volatile int *p1 = (int *)SORTMEM;
    int n=*p1;
    print_str("size =");
    print_dec(n);
    print_str("\n");
    p1++;
    
    volatile int *p2 = (int *)RST;
    volatile int *p3=(int *)DIN;
    volatile int *p4=(int *)NOW1;
    volatile int *p5=(int *)NOW2;
    *p5=1;
    *p4=1;
    *p2=1;
    *p2=0;
    print_str("Dumping first 3 inputs \n");
    for(int i=0;i<n;i++){
        int x=*p1;
        if(i<3){
            print_str("number =");
            print_dec(x);
            print_str("\n");
        }
        *p3=x;
        *p4=i&1;
        a[i]=x;
        p1++;
    }
    return n;
}
void sort(void){
    volatile int *p1 = (int *)RST;
    *p1=1;
    *p1=0;
    bool y_valid=false;
    volatile int *p2= (int *)YVALID;
    while(!y_valid){
        volatile int x = (*p2);
        if((x & 0x01) == 1){
            y_valid=true;
        }
    }
}
void write_outputs(int n){

    n=n;
    volatile int *p1= (int *)DOUT;
    volatile int *p2= (int *)NOW2;
    print_str("Dumping first 3 outputs \n");
    for(int i=0;i<n;i++){   
        *p2=i&1;
        int x=*p1;
        if(i<3){
            print_str("number =");
            print_dec(x);
            print_str("\n");
        }
        sort_print_dec(x);
        sort_print_chr('\n'); 
        
    }
}


void hello(void){
    int a[2048];
    print_str("Reading input\n");
    int n=read_inputs(a);
    
    /*print_str("Sorting in C using merge sort\n");
    int t_start = get_num_cycles();
    merge_c(a,0,n-1);
    int t_end   = get_num_cycles();
    print_str("Sorted the data in ");
	print_dec(t_end - t_start);
    print_str(" cycles.\n");
    
    print_str("Sorting in C using bubble sort\n");
    t_start = get_num_cycles();
    bubble_c(a,n);
    t_end   = get_num_cycles();
    print_str("Sorted the data in ");
    print_dec(t_end - t_start);
    print_str(" cycles.\n");*/
    
    print_str("Sorting in hardware\n");
    int t_start = get_num_cycles();
    sort();
    int t_end   = get_num_cycles();
    print_str("Sorted the data in ");
	print_dec(t_end - t_start);
	print_str(" cycles.\n");
    
    print_str("Writing output\n");
    write_outputs(n);
    
    print_str("\nAll done...\n");
}