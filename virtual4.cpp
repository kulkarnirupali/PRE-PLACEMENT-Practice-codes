# include<iostream>

using namespace std;


class Base {
    public :
    int A ,B;

    void Sun() {  // memory address :1000
        cout<<"Inside Base Sun \n";

    }

    virtual void Gun() { // 2000 // use of keyward Gun
          cout<<"Inside Base  gun \n";
    }

    void Fun() // 3000
    {
        cout<<"Inside Base Fun \n";}

    virtual void mun() { //4000
        cout<<"Inside Base Mun \n";
    }


};

class Derived : public Base {
    public :
    int X,Y;
    virtual void Gun() { // 5000
        cout<<"Derived Gun \n";
    }

    virtual void Run() { // 6000
    cout<<"Derived Fun \n";
    }

    virtual void Sun() { // 7000
    cout<<"Derived Sun \n";
    }
};


int main() {

    Derived dobj;

 
    
    Base *bp = &dobj; 
    cout<<"Size of base class objcet :"<<sizeof(Base)<<"\n";
    cout<<"Size of Derived class objcet :"<<sizeof(Derived)<<"\n";
  
    bp->Fun(); //  base fun Allowed
    bp->Gun(); // derived gun Allowed
    bp->Sun(); //  base sun Allowed
    bp->mun(); //  base mun Allowed
    // bp->Run(); // Error : not allowed


    return 0;
}