# include<stdio.h>

struct  student
{
    int roll_number; // 4 byte
    char division; // 1 byte
    int age;  // 4 byte
    float marks; // 4 byte
    int salary; // 4 byte

};


int main(){
    struct student Amit;
    struct student pooja;
    

    printf("size of Amit is : % d\n",sizeof(Amit)); /* operating system allowed 4 bytes to char variable in th structure . 
     so size is 20 bytes */

    
    Amit.roll_number = 11;
    Amit.division = 'A';
    Amit.age = 19;
    Amit.marks = 90.89;
    Amit.salary = 21000;
    
    pooja.roll_number = 21;
    pooja.division = 'D';
    pooja.marks = 93.67;
    pooja.age = 17;
    pooja.salary = 50000;

    printf("Amit's roll number = %d\n",Amit.roll_number);
    printf("Amit's age = %d\n",Amit.age);
    printf("Amit's salary = %d\n",Amit.salary);
    printf("\n");

    
    printf("Pooja's roll number = %d\n",pooja.roll_number);
    printf("Pooja's age = %d\n",pooja.age);
    printf("Pooja's salary = %d\n",pooja.salary);


    return 0 ;
}