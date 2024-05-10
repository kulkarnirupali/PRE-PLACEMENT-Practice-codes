# include<iostream>

using namespace std;

class Arithmatic {
    public:
    int number1;
    int number2;

    Arithmatic() { // Default constructor
        number1 = 21;
        number2 = 11;
    }

    Arithmatic(int A,int B) { // parameterised constructor
        number1 = A;
        number2 = B;
    }

    int Addition () {
        int answer; // method1= function
        answer = number1 + number2;
        return answer;

    }

    int Substraction () { // method2=function
        int answer;
        answer = number1 - number2;
        return answer;

    }

};


int main() {
    int value1=0 ; int value2=0 ; int ans1=0; int ans2=0;
    cout<<"Using Default Constructor :"<<"\n";
    Arithmatic obj2();

    
    


    
    cout<<"Using Parameterised Constructor :"<<"\n";
    cout<<"Enter value :\n"; //print(<<)
    cin>>value1;  // inout (>>)
    cout<<"Enter value :\n";
    cin>>value2;


    Arithmatic obj1(value1,value2);

    ans1 = obj1.Addition();
    cout<<"Addition is  :"<<ans1<<"\n";
    
    ans2 = obj1.Substraction();
    cout<<"Substraction  is  :"<<ans2<<"\n";


   return 0;
}