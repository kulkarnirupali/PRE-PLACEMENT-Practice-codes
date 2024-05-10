#include<stdio.h>

void display(int no){ // Callee
    static int icnt = 0;
    if(icnt < no) {
        printf("Jay Ganesh ....\n");
        icnt++;
        display(no); // Recursive call
    }
}

int main() {  // caller
    display(3);
    return 0;
}
