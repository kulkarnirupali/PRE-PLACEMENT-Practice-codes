#include<iostream>

using namespace std;
class Hello {
    public: 
    void fun() ;
    void gun();
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

    
    friend class Hello;
             //or//
    //friend void Hello :: fun(); // Important 1
    //friend void Hello :: gun(); //Important 2
};

void Hello :: fun() {
        Demo obj;
        cout<<obj.A<<"\n";
        cout<<obj.B<<"\n";
        cout<<obj.C<<"\n";
   }

void Hello :: gun() {
        Demo obj;
        cout<<obj.A<<"\n";
        cout<<obj.B<<"\n";
        cout<<obj.C<<"\n";
   }


int main() {
    Hello hobj;
    hobj.fun();
    hobj.gun();
    return 0;
}