# include<stdio.h>

int globalvariable = 15; // Global variable

void local(){
    int localvariable = 21; // Local variable 
    int no = 51;
    
    printf("From local value of localvariable is : %d\n",localvariable);
    printf("From local value of no is : %d\n",no);
    printf("From local value of globalvariable is : %d\n",globalvariable);
}




int main(){

    int no = 11;
    printf("From main value of no is : %d\n",no);
    printf("From main value of no is : %d\n",globalvariable);
    local();

    return 0;
}