# include<stdio.h>

int main(){

    int Arr[] = {11,21,51,101,111,121};
    int *ptr = NULL;
    int *qtr = NULL;

    ptr = &Arr[0];

    qtr = &Arr[4];

    
    printf("%d\n",qtr-ptr);
    printf("%lu\n",*ptr);
    
    printf("%lu\n",*qtr);

    ptr = ptr + 2;
    printf("%lu\n",*ptr);

    qtr = qtr - 2;
    printf("%lu\n",*qtr);

    



    return 0;
}