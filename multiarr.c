# include<stdio.h>

int main(){
    // One dimensional array :
    int arr1[] = {1,2,3};
    printf("%lu \n" ,arr1[0]);
    

    // Two dimensional array : using member to member initialization :
    int Brr[4][5]; // 20 element(4*5)
    Brr[0][1] = 12;
    Brr[1][0] = 15;
    Brr[2][3] = 18;
    Brr[0][2] = 4;
    
    printf("%lu\n",Brr[0][1]);
    printf("%lu\n",Brr[2][3]);
    printf("%lu\n",Brr[0][2]);
    


    // Two dimensional array : using member intialization list :
    int Crr[4][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
    printf("%lu \n" ,Crr[1][1]);



    return 0;
}