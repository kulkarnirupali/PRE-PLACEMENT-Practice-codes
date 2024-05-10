#include<stdio.h>
#include<stdlib.h> // for malloc ,calloc,reaalloc & free memory allocation :




int main() {
    int *ptr = NULL;

    ptr = (int *)malloc(5 * sizeof(int)); // 5 = size of element
      // Use the memory
    
    ptr = (int *)realloc(ptr,10 * sizeof(int)); //10 = size of element


    free(ptr);
    return 0;
}

