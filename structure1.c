# include<stdio.h>
// declartion of strcture :
struct demo
{
    int no;
    float f;
    double d;
};


int main(){
    
    // objcet creation of the structure :
    struct  demo obj;
    obj.no = 11;
    obj.f = 151.55;
    obj.d = 89.9999;

    printf("%d\n",obj.no);
    printf("%f\n",obj.f);
    printf("%f\n",obj.d);



    return 0;
}