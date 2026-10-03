#include <stdio.h>
#include <math.h>

void tinhHocluc() {
    printf("Tinh hoc luc sinh vien.\n");
    float diem;

    do {
        printf("Nhap diem: ");
        scanf("%f", &diem);
    } while (diem < 0 || diem > 10);

    if (diem >= 9.0) {
        printf("Xuat sac\n");
    } else if (diem >= 8.0) {
        printf("Gioi\n");
    } else if (diem >= 6.5) {
        printf("Kha\n");
    } else if (diem >= 5.0) {
        printf("Trung binh\n");
    } else if (diem >= 3.5) {
        printf("Yeu\n");
    } else {
        printf("Kem\n");
    }
}

void giaiPTBacHai() {
    float a, b, c, delta, x1, x2;

    printf("Giai phuong trinh bac hai.\n");
    printf("Nhap a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("Phuong trinh %.2fx^2 + %.2fx + %.2f = 0\n", a, b, c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            printf("Nghiem duy nhat: x = %.2f\n", -c / b);
        }
        return;
    }

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Phuong trinh vo nghiem.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Nghiem kep: x = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Nghiem x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
}

void tinhTienDien() {
    float soKw, tien;
    printf("Tinh tien dien tieu thu.\n");
    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%f", &soKw);

    if (soKw <= 50) {
        tien = soKw * 1500;
    } else if (soKw <= 100) {
        tien = 50 * 1500 + (soKw - 50) * 2000;
    } else if (soKw <= 200) {
        tien = 50 * 1500 + 50 * 2000 + (soKw - 100) * 2500;
    } else {
        tien = 50 * 1500 + 50 * 2000 + 100 * 2500 + (soKw - 200) * 3000;
    }

    printf("Tien dien phai tra: %.0f VND\n", tien);
}

int main() {
    int chon;

    do {
        printf("\n===== MENU CHUONG TRINH LAB 3 =====\n");
        printf("0. Thoat chuong trinh\n");
        printf("1. Tinh hoc luc sinh vien\n");
        printf("2. Giai phuong trinh bac hai\n");
        printf("3. Tinh tien dien tieu thu\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &chon);

        switch (chon) {
            case 0:
                printf("Thoat chuong trinh.\n");
                break;
            case 1:
                tinhHocluc();
                break;
            case 2:
                giaiPTBacHai();
                break;
            case 3:
                tinhTienDien();
                break;
            default:
                printf("Ban phai nhap so tu 0 - 3\n");
        }
    } while (chon != 0);

    return 0;
}