#include<iostream>

using namespace std;
class Hello {
    public: 
    void fun() ;
  

};

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

    friend void Hello :: fun(); // Important

};

void Hello :: fun() {
        Demo obj;
        cout<<obj.A<<"\n";
        cout<<obj.B<<"\n";
        cout<<obj.C<<"\n";
   }


int main() {
    Hello hobj;
    hobj.fun();
    return 0;
}