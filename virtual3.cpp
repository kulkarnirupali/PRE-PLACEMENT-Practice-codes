# include<iostream>

using namespace std;


class Base {
    public :
    int A ,B;

    void Sun() {  // 1000 - memory address : // Defination
        cout<<"Inside Base Sun \n";

    }

    void Gun() { //2000  // Defination
          cout<<"Inside Base  gun \n";
    }

    void Fun() //3000 // defination
    {
        cout<<"Inside Base Run \n";}


};

class Derived : public Base {
    public :
    int X,Y;
    void Gun() { //4000  // Redefination
        cout<<"Derived Gun \n";
    }

    void Run() { //5000 // Defination
    cout<<"Derived Fun \n";
    }

    void Sun() { //6000 // Redefination
    cout<<"Derived Sun \n";
    }
};


int main() {
    Base bobj;
    Derived dobj;

 
    
    Base *bp = &dobj; // Upcasting
  
    bp->Fun();
    bp->Sun();
    bp->Gun();


    return 0;
}