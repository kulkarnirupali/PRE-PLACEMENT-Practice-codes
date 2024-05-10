#include<stdio.h>


int main() {

    char ch= 'A';
    int i = 40;
    float flo = 67.89;
    double doub = 78.9999;

    char *cptr = &ch;
    int *iptr = &i;
    float *fptr = &flo;
    double *dptr = &doub;


void *vp = NULL; //void pointer 



 printf("%c\n",*cptr);
 printf("%d\n",*iptr);
 printf("%f\n",*fptr);
 printf("%f\n",*dptr);


vp = &ch;
printf("%c\n",*(char *)vp);

vp = &i;
printf("%d\n",*(int *)vp);

vp = &flo;
printf("%f\n",*(float *)vp);

vp = &doub;
printf("%f\n",*(double *)vp);

    return 0;
}