#include<iostream>


using namespace std;

class demo {
    public:
    int A,B;
    demo(int i,int j) {
        A=i;
        B=j;
    }


};


int main() {

    demo obj1(10,11);
    demo obj2(31,41);
    //obj1+obj2; // Error for operand(obj1,obj2) using + operator 
    return 0;
}