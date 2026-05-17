#include <stdio.h>
#define MAX_SIZE 100
int main(void) {
  int n, numbers[MAX_SIZE];

    int isValidN = 0;
    do
    {
        printf("Nhap so luong phan tu n (0 < n <= 100): ");
        if (scanf("%d", &n) == 1)
        {
            if (n > 0 && n <= 100)
            {
                isValidN = 1;
            }
            else
            {
                printf("\nSo luong \"KHONG HOP LE !!!\", vui long nhap lai!\n");
            }
        }
        else
        {
            printf("\nNhap sai dinh dang !!! Vui long nhap mot so nguyen.\n");
        }

        while (getchar() != '\n');

    } while (isValidN == 0);
    printf("\n NHAP CAC PHAN TU CUA MANG \n");
    for (int i = 0; i < n;)
    {
        printf("Phan tu thu %d: ", i + 1);

        if (scanf("%d", &numbers[i]) == 1)
        {
            i++;
        }
        else
        {
            printf("Nhap sai !!! Vui long nhap lai mot so nguyen.\n");
            while (getchar() != '\n'); // Dọn sạch bộ đệm
        }
    }
    printf("\n1. Cac so chan trong mang: ");

    int hasEven = 0;
    int countPositive = 0;
    long long sumPositive = 0;

    for (int i = 0; i < n; i++)
    {

        if (numbers[i] % 2 == 0)
        {
            printf("%d ", numbers[i]);
            hasEven = 1;
        }


        if (numbers[i] > 0)
        {
            sumPositive += numbers[i];
            countPositive++;
        }
    }

    if (hasEven == 0)
    {
        printf("Khong co so chan");
    }
    printf("\n");

    printf("2. Ket qua trung binh cong so duong: ");
    if (countPositive > 0)
    {
        double average = (double)sumPositive / countPositive;
        printf("%.2lf\n", average);
    }
    else
    {
        printf("Khong co so duong trong mang\n");
    }
    return 0;
}
