# include<stdio.h>

int main(){

    int a = 10;
    int *ptr = &a;
    int **pptr = &ptr;
    int ***ppptr = &pptr;
    int ****pppptr = &pppptr;
    return 0;
}