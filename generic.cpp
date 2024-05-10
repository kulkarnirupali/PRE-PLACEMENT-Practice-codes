#include<iostream>

int Addition(int no1,int no2){
    int Ans;
    Ans = no1 + no2;
    return Ans;

}

int Maximum(int no1,int no2) {
    if(no1 >no2) {
        return no1;
    }
    else {
        return no2;
    }
}


using namespace std;

int main() {
    int A = 11,B = 21,Ans =0;
    Ans = Addition(A,B);
    cout<<"Addition is :"<<Ans<<"\n";
    Ans = Maximum(A,B);
    cout<<"Maximum number :"<<Ans<<"\n";


    return 0;
}