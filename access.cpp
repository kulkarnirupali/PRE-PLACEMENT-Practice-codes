#include<iostream> // .h is already used as a extension.

using namespace std;

class demo {

    public:
    int i;
    private:
    int j;
    protected:
    int k;



    public:
    demo () {
        i = 90;
        j = 98;
        k = 89;
    };
};

int main() { 
    demo obj;
    cout<<"value of i :"<<obj.i;
    cout<<"value of i :"<<obj.j; // private
    cout<<"value of i :"<<obj.k; // protected 

    return 0; }



// execution :  command 1 : g++ access.cpp -o ./Myexe

// command 2 : ./Myexe.exe
