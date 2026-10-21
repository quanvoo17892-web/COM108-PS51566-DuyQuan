#include <stdio.h>

void printMenu();
void ktSoNguyen();

int main()
{
    int luaChon;

    do
    {
        printMenu();
        printf("Nhap lua chon: ");
        scanf("%d", &luaChon);

        switch (luaChon)
        {
        case 0:
            printf("Tam biet!\n");
            break;
        case 1:
            printf("Kiem tra so nguyen\n");
            ktSoNguyen();
            break;
        case 2:
            printf("Tim UCLN va BCNN cua 2 so\n");
            break;
        case 3:
            printf("Tinh tien Karaoke\n");
            break;
        case 4:
            printf("Tinh tien dien\n");
            break;
        case 5:
            printf("Doi tien\n");
            break;
        case 6:
            printf("Tinh lai suat vay\n");
            break;
        case 7:
            printf("Vay tien mua xe\n");
            break;
        case 8:
            printf("Sap xep sinh vien\n");
            break;
        case 9:
            printf("Game POLY-LOTT\n");
            break;
        case 10:
            printf("Tinh phan so\n");
            break;
        default:
            printf("Lua chon khong hop le!\n");
        }
    } while (luaChon != 0);

    return 0;
}

void printMenu()
{
    printf("\n========== MENU ==========\n");
    printf("0. Thoat\n");
    printf("1. Kiem tra so nguyen\n");
    printf("2. UCLN va BCNN\n");
    printf("3. Tinh tien Karaoke\n");
    printf("4. Tinh tien dien\n");
    printf("5. Doi tien\n");
    printf("6. Tinh lai suat vay\n");
    printf("7. Vay tien mua xe\n");
    printf("8. Sap xep sinh vien\n");
    printf("9. Game POLY-LOTT\n");
    printf("10. Tinh phan so\n");
    printf("===========================\n");
}

void ktSoNguyen()
{
    printf("Day la chuc nang kiem tra so nguyen.\n");
}