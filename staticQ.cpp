#include<iostream>


using namespace std;

class Base {
    public :
    int i;
    int j;
    static int k;
    Base() { //Default constructor
        i=10;
        j=20;
    }


    void fun() {
       cout<<"Inside  Base fun";

    }
};
int Base ::k=11;

class Derived : public Base {
    public :
    int X;
    int Y;
    Derived() { //Default constructor
        X=50;
        Y=60;
    }


    void gun() {
       cout<<"Inside  Derived gun";

    }
};




int main() {
    Base bobj;
    Derived dobj;

    cout<<"Size of"<<sizeof(bobj)<<"\n";
    cout<<"Size of"<<sizeof(dobj)<<"\n";

    cout<<bobj.i<<"\n"; 
   cout<<bobj.j<<"\n"; 
    cout<<dobj.i<<"\n"; 
    cout<<dobj.j<<"\n"; 
    cout<<bobj.k<<"\n"; 
    //cout<<bobj.X; 

    bobj.fun();
    dobj.fun();
    dobj.gun();
    




    return 0;
}