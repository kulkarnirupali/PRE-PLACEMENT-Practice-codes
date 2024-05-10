#include<iostream>
#include <commctrl.h>


using namespace std;

class demo {
    public:
    int no1,no2; // non static characterstic
    static int x; // static charactic
    demo() {
        this->no1 = 10;
        this->no2 = 20;
    }

    void fun() { //non static behavior (function)
        cout<<"Inside Fun\n";
        cout<<no1<<"\n"; // non-static char
        cout<<x; //staic char

    }

    static void Gun() { // static behavior (function)
        cout<<"Inside Fun\n";
        cout<<x<<"\n";
    }

};

int demo :: x = 11;



int main() {

     cout<<"value of x is :"<<demo::x<<"\n";
     demo :: Gun();
     demo obj1 ;
     demo obj2 ;

     cout<<"size of object is"<<sizeof(obj1)<<"\n";
    

    return 0;
}