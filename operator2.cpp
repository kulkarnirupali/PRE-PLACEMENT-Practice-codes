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

demo operator + (demo op1,demo op2)
{
    cout<<"Inside operator overloading function as a non-member(Naked)\n";
    return demo(op1.A+op2.A,op1.B+op2.B);
}


int main() {

    demo obj1(10,11);
    demo obj2(31,41);
    demo Ans(0,0);
    Ans = obj1+obj2; //object addition = operator overloading
    cout<<Ans.A<<"\t"<<Ans.B<<"\n";
     
    return 0;
}