# include<iostream>

using namespace std;

class base {
    public :
    int A,B;

    base() {
        cout<<"Inside base constructor";
    }



    int Addition(int i,int j) { //1000
        cout<<"Inside base Addition";
        return i+j;
    }

    virtual int substraction(int i,int j) { //2000
        cout<<"Inside base substraction";
        return i-j;
    }

     virtual int multiplication(int i,int j) = 0;

};


class derived : public base {
    public :
    int X,Y ;

    derived() {
        cout<<"Inside derived constructor"<<"\n";
    }

    int substraction(int i,int j) { //3000
        cout<<"Inside derived Addition"<<"\n";
        return i-j;
    }

    int multiplication(int i,int j) { //4000
        cout<<"Inside derived subtraction"<<"\n";
        return i*j;
    }

    int division(int i,int j) { //5000
        cout<<"Inside derived division "<<"\n";
        return i/j;
    }

};



int main() {
    derived dobj;
    base *bp = &dobj;

    // base bobj; not allowed dur to pure virtual function

    cout<<bp->Addition(10,11)<<"\n";  // base addition
    cout<<bp->multiplication(10,11)<<"\n"; // derived multiplication
    cout<<bp->substraction(10,11)<<"\n"; // derived substraction
    //cout<<bp->division(10,11)<<"\n"; // error

    return 0;
}