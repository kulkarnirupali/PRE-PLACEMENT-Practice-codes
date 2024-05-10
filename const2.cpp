# include<iostream>

using namespace std;

class base {
    public:
    const int x;
    const int y;
    int z ;


    base(int i,int j,int k) : x(i),y(j) { //initalization list
   cout<<"Inside constractor"<<"\n";
   z = k;
     
    }

    

    

};



int main() {
    base obj(11,21,51);
    cout<<obj.x<<"\n";
    cout<<obj.y<<"\n";
    cout<<obj.z<<"\n";
    obj.z++;


    
    return 0;
}