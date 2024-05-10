# include<iostream>

using namespace std;


class arithmatic{
    public:
    int no1;
    int no2;
    arithmatic() {
        cout<<"Inside default consturctor :\n";
        no1 = 0;
        no2 = 0;
    }

    arithmatic(int A, int B){
        cout<<"Inside Parameterized constructor :\n";
        no1 = A;
        no2 = B;
    }
    ~arithmatic() {
        cout<<"Inside decustorctor \n";
    }
    

    arithmatic(arithmatic &ref){
        cout<<"Inside copy constructor\n";
        no1 = ref.no1;
        no2 = ref.no2;

    }
};

using namespace std;

int main() {
    arithmatic obj1;
    arithmatic obj2(11,21);
    arithmatic obj3(obj2);
    cout<<obj1.no1<<"\t"<<obj1.no2<<"\n";
    cout<<obj2.no1<<"\t"<<obj2.no2<<"\n";
    cout<<obj3.no1<<"\t"<<obj3.no2<<"\n";
    return 0;
}