#include <stdio.h>
int main(){
    char hoTen1[30] = {'P','O','L','Y',' ','F'};
    char hoTen2[30] = "POLY F";

    printf("%s %c %d\n",hoTen1,hoTen1[1],hoTen1[1]);
    printf("%s %c %d\n",hoTen2,hoTen2[1],hoTen2[1]);
    
    return 0;
}