

# include<iostream>

using namespace std;

class Marvellous { 


      public :
      int C;
      Marvellous()
        { cout<<"Inside  Marvellous constructor\n";
          C= 30; }
                
        ~Marvellous()
        { cout<<"Inside Marvellous destructor\n"; }

        void Sun() {
            cout<<"Inside sun method of Marvellous :";
        }

};

class Demo : public Marvellous {
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

class hello : public Marvellous {
        public :
        int B;
        hello()
        { cout<<"Inside hello constructor\n";
          B = 10; }
                
        ~hello()
        { cout<<"Inside hello destructor\n"; }

        void gun() {
            cout<<"Inside Fun method of demo :";
        }
};




int main() {
    Demo dobj;
    hello hobj;
    
 
    return 0;
}