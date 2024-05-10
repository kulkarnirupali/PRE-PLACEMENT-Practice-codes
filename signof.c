# include<stdio.h>

int main(){

    int i = 11; // 4 byte
    char ch = 'a'; // 1 byte
    float flo = 11.23; // 4 byte
    double dou = 11.2345; // 8 byte
    
    // array using diffrent data types 
    char arr0[5]; // 5 byte
    int arr[5];  // 20 byte
    float arr1[5]; // 20 byte
    double arr2[5]; // 40 byte
    
    printf("%lu\n",sizeof(ch)); 
    printf("%lu\n",sizeof(i));
    printf("%lu\n",sizeof(flo));
    printf("%lu\n",sizeof(dou));

    
    printf("%lu\n",sizeof(arr0));
    printf("%lu\n",sizeof(arr));
    printf("%lu\n",sizeof(arr1));
    printf("%lu\n",sizeof(arr2));
    
    return 0;
}