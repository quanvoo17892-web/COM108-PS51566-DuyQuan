#include <stdio.h>
int main() 
{
    char mssv[] = "PS51566";
    char hoVaTen[] = "Vo Duy Quan";

    float diemToan = 8.5;
    float diemLy = 7.5;
    float diemHoa = 9.0;

    float diemTrungBinh = (diemToan *2 + diemLy + diemHoa) / 4;

    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", hoVaTen);
    printf("Diem Trung Binh: %.1f\n", diemTrungBinh);

    return 0;
}