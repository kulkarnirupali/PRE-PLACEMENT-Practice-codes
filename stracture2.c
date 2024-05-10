# include<stdio.h>
// declartion of strcture :
struct marvellous
{
    int no;
    float f;
    double d;
};


int main(){
    
    // objcet creation of the structure :
    struct  marvellous student;
    student.no = 11;
    student.f = 151.55;
    student.d = 89.9999;

    printf("%d\n",student.no);
    printf("%f\n",student.f);
    printf("%f\n",student.d);



    return 0;
}