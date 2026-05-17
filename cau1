#include <stdio.h>
#include <math.h>

int main(void) {
    double S;
    double tien = 0.0;
    printf("Nhap quang duong di chuyen S (km): ");
    scanf("%lf", &S);
    if (S <= 0) {
        printf("Quang duong khong hop le. Vui long nhap lai!\n");
        return 0;
    }
    if (S <= 1) {
        tien = 15000;
    }
    else if (S <= 10) {
        tien = 15000 + (S - 1) * 13500;
    }
    else {
        tien = 136500 + (S - 10) * 11000; //S>10km
    }

    if (S > 20) {
        tien = tien * 0.9;
    }

    long long tong_tien = (long long)round(tien);

    printf("Tong tien cuoc phai tra: %lld VND\n", tong_tien);
    return 0;
}
