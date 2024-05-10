#include<iostream>

//using namespace std; // Inbuilt Nmaespace;
namespace Marvellous {
    class Demo {
        // Logic
    };
}

namespace PPA {
    class Hello {
        //Logic
    };
}
using namespace Marvellous;
int main() {
    std :: cout<<"Inside main\n"; // using namespace std = (cin,cout)
    Demo dobj;
    PPA :: Hello hobj;
    
    return 0;
}
