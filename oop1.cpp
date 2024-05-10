# include<iostream>

using namespace std;

class demo
{public: // access specifier
int no1; // characcterstics
int no2; //characterstcics
demo () {  // constructor
    cout<<"inside constructer\n";
    no1 = 11;
    no2 = 12;

}
~demo () { // decustructor
    cout<<"inside destructer\n";
    
}

void fun() { // Behaviors
    cout<<"inside fun of demo class \n";
}
};


int main() {
    cout<<"Inside main \n";
    demo obj1;
    cout<<"size of object is:"<<sizeof(obj1)<<"\n";
    cout<<"value of no1 :\n"<<obj1.no1<<"\n";
    cout<<"value of no2 :\n"<<obj1.no2<<"\n";
    obj1.fun();

    return 0;
}