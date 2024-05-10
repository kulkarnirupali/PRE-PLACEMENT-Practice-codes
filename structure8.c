# include<stdio.h>

struct demo {
    
    int no ;
    int data;

};

int main(){

   struct demo obj;
   struct demo *ptr = &obj;

   obj.no = 15;
   ptr->data = 20;
   

    return 0;
}