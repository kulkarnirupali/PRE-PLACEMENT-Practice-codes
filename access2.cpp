# include<iostream>

using namespace std;

class Base {
public :
int A ;
protected:
int C;
private:
int B;
public :
Base() {
    cout<<"Inside Base constructor\n";
    A = 20;
    B = 30;
    C = 40;
}

~Base() {
     cout<<"Inside Base desstructor\n";
}

void fun() {
    cout<<"Inside Fun\n";
    cout<<"Inside Fun\n"<<A; // A
    cout<<"Inside Fun\n"<<B; //A
    cout<<"Inside Fun\n"<<C; // A
}
};


class Derived : public Base {

public:
void gun() {
    cout<<"Inside gun\n";
    cout<<"Inside gun\n"<<A; //A
    cout<<"Inside gun\n"<<B; //NA
    cout<<"Inside gun\n"<<C; // A
}

};



int main() {
    Derived bobj;

    cout<<"Inside gun\n"<<bobj.A; //A
    cout<<"Inside gun\n"<<bobj.B; // NA
    cout<<"Inside gun\n"<<bobj.C; //NA


    return 0;
}