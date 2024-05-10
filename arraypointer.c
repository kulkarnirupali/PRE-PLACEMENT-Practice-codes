#include<stdio.h>

int main(){
    int arr[5] = {10,20,30,40,50};
    printf("Base address of array is :%d\n",arr);
    printf("Base address of array is :%d\n",&arr);
    printf("Base address of array is :%d\n",&(arr[0]));

     printf("array 0 is :%d\n",arr[0]);
     printf("array 1 is :%d\n",arr[1]);

// Important : Array index start at 0 explaination :
    printf("array [2] is :%d\n",arr[2]); //30
    printf("array [2]is :%d\n",*(arr+2)); //30
    printf("array [2]is :%d\n",*(2+arr)); //30
    printf("array [2]is :%d\n",2[arr]);  //30

    return 0;
}