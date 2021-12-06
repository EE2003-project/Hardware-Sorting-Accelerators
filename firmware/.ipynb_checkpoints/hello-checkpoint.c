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
//void merge(int a[],int n);


/*void merge(int arr[],int n){
    int i, j;
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
    }
}*/


void read_inputs(void){
    volatile int *p1 = (int *)SORTMEM;
    int n=*p1;
    print_str("number =");
        print_dec(*p1);
    p1++;
    volatile int *p2 = (int *)X_BASE;
    for(int i=0;i<n;i++){
        int x=*p1;
        print_str("number =");
        print_dec(x);
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
    int count=0;
    while(!y_valid){
        int x = *p;
        x=x+4;
        print_str("number x=");
        print_dec(x);
        print_str("\n");
        if((x & 0x01) == 1){
            y_valid=true;
        }
        count++;
    }
     print_str("count =");
    print_dec(count);
    print_str("\n");
}
void write_outputs(void){
    volatile int *p = (int *)SORTMEM;
    int n=*p;
    p= (int *)Y_BASE;
    for(int i=0;i<n;i++){
        int x=*p;
        print_str("number =");
        print_dec(x);
        sort_print_dec(x);
        p++;
    }
}


void hello(void){
    /*int a[8]={1,2,3,8,6,5,3,8};
    int t_start = get_num_cycles();
    merge(a,8);
    int t_end   = get_num_cycles();
    print_str("Sorted the data in ");
	print_dec(t_end - t_start);
    print_str("Reading input\n");*/
    read_inputs();
    print_str("Sorting\n");
    int t_start = get_num_cycles();
    sort();
    int t_end   = get_num_cycles();
    print_str("Writing output\n");
    write_outputs();
    print_str("Sorted the data in ");
	print_dec(t_end - t_start);
	print_str(" cycles.\n");
    print_str("\nAll done...\n");
}