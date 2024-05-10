#include<iostream>


using namespace std;

class demo {
    public:
    int A,B;
    demo(int i,int j) {
        A=i;
        B=j;
    }
    // Internally below syntax is = demo operator + (const *const this,demo op2) 
    demo operator + (demo op2)
   {
    cout<<"Inside operator overloading function as a member\n";
    return demo(this->A + op2.A,this->B + op2.B);
   }



};



int main() {

    demo obj1(10,11);
    demo obj2(31,41);
    demo Ans(0,0);
    Ans = obj1+obj2; //object addition = operator overloading 
    cout<<Ans.A<<"\t"<<Ans.B<<"\n";
     
    return 0;
}