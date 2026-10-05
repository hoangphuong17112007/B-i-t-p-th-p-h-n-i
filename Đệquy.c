#include <stdio.h>
void thap_ha_noi(int n, char A, char B, char C) {
    if (n == 1) {
        printf("Chuyen dia 1 từ %c sang %c\n", A, C);
        return;
    }
    thap_ha_noi(n - 1, A, C, B);
    printf("Chuyen dia %d từ %c sang %c\n", n, A, C);
    thap_ha_noi(n - 1, B, A, C);
}

int main() {
    int n;
    printf("Nhập số lượng đĩa (n): ");
    if (scanf("%d", &n) == 1 && n > 0) {
        printf("\nCác bước giải bài toán Tháp Hà Nội với %d đĩa:\n", n);
        thap_ha_noi(n, 'A', 'B', 'C');
    } else {
        printf("Nhập một số nguyên dương khác\n");
    }
    return 0;
}