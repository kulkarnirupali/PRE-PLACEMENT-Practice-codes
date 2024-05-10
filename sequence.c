# include<stdio.h>

int main(){
    int NO1=0;
    int No2=0;
    int sum=0;
    printf("Enter first number :");
    scanf("%d",&NO1);
    
    printf("Enter second number :");
    scanf("%d",& No2);
    
    sum = NO1 + No2;
    printf("Sum of two number is : %d",sum);

    return 0;
}