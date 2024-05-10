# include<stdio.h>


struct demo{
    int data;
    struct hello{ // Nested structure example :
         int data;
        float k ; 
    }hobj;
};


int main(){
    
    struct demo dobj;


    return 0;
}