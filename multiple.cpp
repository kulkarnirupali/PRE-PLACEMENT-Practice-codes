# include<iostream>

using namespace std;


class Demo {
        public :
        int A;
        Demo()
        { cout<<"Inside Demo constructor\n";
          A = 10; }
                
        ~Demo()
        { cout<<"Inside Demo destructor\n"; }

        void fun() {
            cout<<"Inside Fun method of demo :";
        }
};

class hello {
        public :
        int B;
        hello()
        { cout<<"Inside hello constructor\n";
          B = 20; }
                
        ~hello()
        { cout<<"Inside hello destructor\n"; }

        void gun() {
            cout<<"Inside Fun method of hello :\n";
        }
};


class Marvellous : public Demo, public hello { 


      public :
      int C;
      Marvellous()
        { cout<<"Inside  Marvellous constructor\n";
          C= 30; }
                
        ~Marvellous()
        { cout<<"Inside Marvellous destructor\n"; }

        void Sun() {
            cout<<"Inside sun method of Marvellous :\n";
        }

};


int main() {
    Marvellous mobj;
    
    mobj.fun();
    mobj.gun(); 
    mobj.Sun();
    
    cout<<"Value oF A :"<<mobj.A<<"\n";
    cout<<"Value oF B :"<<mobj.B<<"\n";
    cout<<"Value oF C :"<<mobj.C<<"\n";
    
    return 0;
}