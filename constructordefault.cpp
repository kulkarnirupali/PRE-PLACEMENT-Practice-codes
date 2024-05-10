#include<iostream>


using namespace std;

class Demo {
    public :
    int A;
    int B;
    Demo() { //Default constructor
        A=10;
        B=20;
    }


    Demo(int i) { // Parameterised constructor
       A=i;
       B=20;

    }

    Demo (int i,int j) { // Parameterised constructor
        A=i;
        B=j;

    }
};




int main() {
    Demo obj1;
    Demo obj2(11);
    Demo obj3(11,21);


    return 0;
}