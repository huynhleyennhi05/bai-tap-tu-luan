#include <stdio.h>

int main(void) {
    char chuoi[256];
    int so_chu_cai = 0;
    int so_chu_so = 0;
    int i = 0;

    printf("Nhap vao mot chuoi ky tu (toi da 255 ky tu): ");
    fgets(chuoi, sizeof(chuoi), stdin);

    while (chuoi[i] != '\0') {
        if ((chuoi[i] >= 'A' && chuoi[i] <= 'Z') || (chuoi[i] >= 'a' && chuoi[i] <= 'z')) {
            so_chu_cai++;
        }
        else if (chuoi[i] >= '0' && chuoi[i] <= '9') {
            so_chu_so++;
        }
        i++;
    }
    printf("So luong chu cai: %d\n", so_chu_cai);
    printf("So luong chu so: %d\n", so_chu_so);

    return 0;
}