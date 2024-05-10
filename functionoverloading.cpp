# include<iostream>


using namespace std;

class polymorphism {
    public:

    int Addition (int no1,int no2) {
       return no1 + no2;
    
    }

    int Addition(int no1, int no2,int no3) {
        return no1 + no2 + no3;
    }

    double Addition(double no1, double no2) {
        return no1 + no2 ;
    }
    
    double Additon (double no1, double no2,double no3) {
        return no1 + no2 + no3;
    }


};


int main() {
    polymorphism obj1;

    cout<<obj1.Addition(11,21)<<"\n";
    
    cout<<obj1.Addition(11,21,31)<<"\n";
    
    cout<<obj1.Addition(11.99,51.67)<<"\n";
    
    cout<<obj1.Addition(11.566677,21.56,41.67)<<"\n";





    return 0;
}