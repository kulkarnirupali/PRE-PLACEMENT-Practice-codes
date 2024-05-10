# include<stdio.h>







int main(){
    int NO1=0;
    int No2=0;
    printf("Enter number :");
    scanf("%d",&NO1);


    if (NO1 % 2 == 0){
        printf("The given number is Even \n");
    } else{
        printf("The number is odd \n ");
    }

    return 0;
}