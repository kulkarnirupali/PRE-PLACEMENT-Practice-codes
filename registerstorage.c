# include<stdio.h>

void autostorage(){
    int auto1 = 11;
    register  int auto2 = 21;
    register int k;  // auto keyword
    printf("%d\n",k);
}


int main(){
    printf("Demonstration of  register storgae class ...\n");    
    autostorage();


    return 0;
}