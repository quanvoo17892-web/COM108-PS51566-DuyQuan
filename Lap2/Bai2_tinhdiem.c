#include <stdio.h>
int main() 
{
    float diemtoan, diemly, diemhoa;
    float diemtrungbinh;

    // nhap diem
    printf(" nhapdiemtoan:");
    scanf("%f", &diemtoan);
    printf(" nhapdiemly");
    scanf("%f", &diemly);
    printf(" nhapdiemhoa");
    scanf("%f", &diemhoa);

    // tinh diem trung binh
    diemtrungbinh = (diemtoan*3 + diemly*2 + diemhoa*1) / 6;

    // xuat ket qua 
    printf("Diem trung binh: %.2f\n", diemtrungbinh);
    return 0;
}