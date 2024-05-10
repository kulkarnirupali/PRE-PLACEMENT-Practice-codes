# include<stdio.h>

struct hello{
    int data;
    float k ; 
};


struct demo{
    int data;
    struct hello hobj; // defining structure inside structure 
};


int main(){
    
    struct demo dobj;


    return 0;
}