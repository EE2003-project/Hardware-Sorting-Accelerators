#include "firmware.h"
#include "stats_helper.c"
#include "sort_print.c"
#define SORTMEM 0x30000000
#define RST 0x40000000
#define X_VALID 0x40000004
#define X_BASE 0x40000008
//#define Y_VALID 0x50000000
#define Y_BASE 0x50000004

void read_inputs(void);
void sort(void);
void write_outputs(void);
void bubble_c(int a[],int n);


/*void merge(int a[],int low,int high){
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
    merge(a,low,(low+high)>>1);
    merge(a,((low+high)>>1)+1,high);
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
}*/

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

void read_inputs(void){
    volatile int *p1 = (int *)SORTMEM;
    int n=*p1;
    p1++;
    volatile int *p2 = (int *)X_BASE;
    for(int i=0;i<n;i++){
        int x=*p1;
        print_str("number =");
        print_dec(x);
        print_str("\n");
        *p2=x;
        p1++;
        p2++;
    }
}
void sort(void){
    volatile int *p = (int *)RST;
    *p=1;
    *p=0;
    bool y_valid=false;
    while(!y_valid){
        volatile int x = (*p);
        if((x & 0x01) == 1){
            y_valid=true;
        }
    }
}
void write_outputs(void){
    volatile int *p = (int *)SORTMEM;
    int n=*p;
    p= (int *)Y_BASE;
    for(int i=0;i<n;i++){
        int x=*p;
        print_str("number =");
        print_dec(x);
        print_str("\n");
        sort_print_dec(x);
        sort_print_chr('\n');
        p++;
    }
}


void hello(void){
    int a[16];
    for(int i=0;i<16;i++){
            a[i]=i;
    }
    int t_start = get_num_cycles();
    bubble_c(a,16);
    int t_end   = get_num_cycles();
    print_str("Sorted the data in software in ");
	print_dec(t_end - t_start);
    print_str(" cycles.\n");
    print_str("Reading input\n");
    read_inputs();
    print_str("Sorting\n");
    t_start = get_num_cycles();
    sort();
    t_end   = get_num_cycles();
    print_str("Writing output\n");
    write_outputs();
    print_str("Sorted the data in hardware in ");
	print_dec(t_end - t_start);
	print_str(" cycles.\n");
    print_str("\nAll done...\n");
}