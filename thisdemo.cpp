# include<iostream>

using namespace std;

class Arithmatic {
    public:
    int number1;
    int number2;


    Arithmatic(int A,int B) { // parameterised constructor
        number1 = A;
        number2 = B;
    }

    int Addition () {
        int answer; // method1= function
        answer = number1 + number2;
        return answer;

    }


};


int main() {
    
    int ans1=0; 

    Arithmatic obj1(21,11);

    ans1 = obj1.Addition();
    cout<<"Addition is  :"<<ans1<<"\n";
    


   return 0;
}