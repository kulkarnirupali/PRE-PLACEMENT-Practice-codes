# include<stdio.h>

void multiplication(int a,int b,int c){
    int d = a * b * c;

    printf("Multiplication using function : %d \n",d);

}



int main(){
    int no1;
    int no2;
    int no3;
    printf("Enter first number:\n ");
    scanf("%d", &no1);

    printf("Enter second number:\n ");
    scanf("%d", &no2);

    printf("Enter second number:\n ");
    scanf("%d", &no3);

    printf("Multiplication is %d \n",no1*no2*no3);

    multiplication(no1,no2,no3);


    return 0;
}