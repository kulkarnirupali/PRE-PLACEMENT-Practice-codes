#include<iostream>
#include<stdlib.h>


using namespace std;

class Demo {
   public :
   int A;
   int B;

   Demo() {
    cout<<"Inside demo constructor :\n";
    A = 11;
    B =21;
   }

    ~Demo() {
    cout<<"Inside desstructor :\n";
   }


   void fun() {
     cout<<"Inside Demo fun :\n";
   }



};



int main() {
    Demo obj1; //static memory allocation

    Demo *p = new Demo; //dynamic m . a .

    //Demo *p = (Demo *)malloc(sizeof(Demo)); // malloc
    //free (p); // malloc
    
    p->fun() ;
    cout<<p->A<<"\n";
    cout<<p->B<<"\n";
    delete p;
    
    return 0;
}