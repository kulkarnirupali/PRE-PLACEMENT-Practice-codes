# include<stdio.h>

# pragma pack(1)
struct demo
{
    int no ; //4
    float f; //4
    int data; //4
    char ch ; // 1
};



union hello
{
    int no ; //4
    float f; //4
    int data; //4
    char ch ; // 1
};



int main(){
    struct demo obj;
    printf(" Size of structure is :%d\n",sizeof(obj)); //13

    union hello obj1;
    printf(" Size of Union is :%d\n",sizeof(obj1)); //4

    obj1.no=11;

    printf("%d\n",obj1.no);

    obj1.data = 21;
    printf("%d\n",obj1.no);
    printf("%d\n",obj1.data);

    
    return 0;
}
