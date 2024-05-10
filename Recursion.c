#include<stdio.h>

void display(int no){ // Callee
    int icnt = 0;
    while(icnt < no) {
        printf("Jay Ganesh ....\n");
        icnt++;
    }
}

int main() {  // caller
    display(4);
    return 0;
}
