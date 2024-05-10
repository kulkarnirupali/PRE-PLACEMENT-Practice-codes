# include<stdio.h>

void autostorage(){
    static int  auto1 = 10;
    auto1 ++;
    printf("%d\n",auto1);
}


int main(){
    printf("Demonstration of  static storage class ...\n");    
    autostorage();
    autostorage();
    autostorage();
    
    return 0;
}