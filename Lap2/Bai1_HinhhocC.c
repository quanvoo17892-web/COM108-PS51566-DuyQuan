#include<stdio.h>
#define PI 3.14159
int main() 
{
  float chieudai,chieurong;
  float bankinh;
  float chuvichunhat, dientichchunhat;
  float chuvihinhtron, dientichhinhtron;

// hinh chu nhat
    printf("Nhap chieu dai: ");
    scanf("%f", &chieudai);
    printf("Nhap chieu rong: ");
    scanf("%f", &chieurong);

    //tinh hinh chu nhat
    chuvichunhat = (chieudai + chieurong) * 2;
    dientichchunhat = chieudai * chieurong;

    //nhap ban kinh hinh tron
    printf("Nhap ban kinh: ");
    scanf("%f", &bankinh); 

    //tinh hinh tron
    chuvihinhtron = 2 * PI * bankinh;
    dientichhinhtron = PI * bankinh * bankinh;
    
    // xuat ket qua
    printf("Chu vi hinh chu nhat: %.2f\n", chuvichunhat);
    printf("Dien tich hinh chu nhat: %.2f\n", dientichchunhat);
    printf("Chu vi hinh tron: %.2f\n", chuvihinhtron);
    printf("Dien tich hinh tron: %.2f\n", dientichhinhtron);
  return 0;

}