#include<stdio.h>
#include<stdlib.h> // for malloc ,calloc,reaalloc & free memory allocation :




int main() {
    int arr[5]; //static memory allocation
    int Size =0;
    int *ptr = NULL;

    printf("enter no of elements :\n");
    scanf("%d", &Size);

    ptr = (int *)calloc(Size,sizeof(int));
    // ptr = (int *)calloc(12,500ml); calloc (example)
    // ptr = (int *)calloc(6000ml); malloc (example)
    // Use the memory

    free(ptr);
    return 0;
}

