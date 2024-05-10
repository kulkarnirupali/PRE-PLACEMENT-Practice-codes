#include<iostream>

using namespace std;





class Demo {
   public :
   int A;
   private:
   int B;
   protected:
   int C;
   
   public:
   Demo() {
    cout<<"Inside demo constructor :\n";
    A = 10;
    B = 20;
    C = 30;
   }

    ~Demo() {
    cout<<"Inside desstructor :\n";
    }

    friend void fun();

};


void fun() {
     cout<<"outside class function :\n";
     Demo obj;
     cout<<obj.A<<"\n";
     cout<<obj.B<<"\n";
     cout<<obj.C<<"\n";
   }



int main() {
    fun();

    return 0;
}