#include<iostream>


template<class T>



T Addition(T no1,T no2){
    T Ans;
    Ans = no1 + no2;
    return Ans;

}

template<class T>

T Maximum(T no1,T no2) {
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


    float x =90.78f,y=7.898f,ret=0.0;
    ret = Addition(x,y);
    cout<<"Addition is :"<<ret<<"\n";
    ret = Maximum(x,y);
    cout<<"Maximum number :"<<ret<<"\n";



    return 0;
}