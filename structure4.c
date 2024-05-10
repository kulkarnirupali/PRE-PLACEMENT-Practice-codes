# include<stdio.h>
# pragma pack(1)  // for 'char' memory allocation 
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
    
   

    return 0 ;
}