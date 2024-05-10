# include<stdio.h>



int addition(int No1,int No2){
    int Ans =0;
    Ans = No1+No2;
    return Ans;
}


int main(){
    int A=18;
    int B=23;
    int sum=0;
    printf("inside main function \n ");
    sum = addition(A,B);
    printf("Sum is : %d",sum);
    return 0;
}