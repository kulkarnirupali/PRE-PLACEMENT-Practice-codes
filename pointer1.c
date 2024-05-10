# include<stdio.h>



int main(){ 
    // Basic lay out of pointer :
    int No = 11;
    int *ptr = &No;
    printf("%d\n", No);  // 11
    printf("%d\n",sizeof(No)); // 4
    printf("%d\n", sizeof(ptr)); // 8 
    printf("%lu\n",*ptr); // 11

    
    double value = 99.9999;
    double * dptr = &value;
    printf("%f\n",value); // 8
    printf("%lu\n",sizeof(value)); // 8
    printf("%lu\n",sizeof(dptr)); // 8
    printf("%lu\n",*dptr); // 99.9999


    return 0;
}