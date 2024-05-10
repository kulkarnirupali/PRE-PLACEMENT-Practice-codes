# include<iostream>

using namespace std;
const int A = 19; // constant global variable
int B = 20;

class base {
    public:
    int x;
    int y;


    base() {
     cout<<"Inside base constructor :"<<"\n";
     x = 20;
     y = 30;
    }


    void fun(int i,const int j) { // constant input arguments
        int no1 = 11;
        const int no2 = 21 ; // constant Local variable
    
    }

};



int main() {

    base bobj1;
    const base bobj2; // consatant object
    
    return 0;
}