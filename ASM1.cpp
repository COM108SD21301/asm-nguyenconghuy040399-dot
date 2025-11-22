#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int luaChon;

    do {
        system("cls"); // Xóa màn h?nh cho ð?p, có th? b? n?u không c?n

        printf("\n================ MENU ================");
        printf("\n1. Ch?c nãng S? nguyên");
        printf("\n2. T?m UCLN và BCNN");
        printf("\n3. Tính ti?n quán Karaoke");
        printf("\n4. Tính ti?n ði?n");
        printf("\n6. Vay ngân hàng");
        printf("\n8. Coming soon...");
        printf("\n0. Thoát chýõng tr?nh");
        printf("\n======================================");
        printf("\nM?i b?n nh?p l?a ch?n: ");
        scanf("%d", &luaChon);

        switch (luaChon) {

            // ============================
            // CH?C NÃNG 1
            // ============================
            case 1: {
                printf("\nB?n ch?n CN1\n");

                float x;
                printf("Nh?p s? x: ");
                scanf("%f", &x);

                if (x == (int)x) {
                    int n = (int)x;
                    printf("%d là s? nguyên\n", n);

                    // ---- S? chính phýõng ----
                    int can = sqrt(n);
                    if (can * can == n)
                        printf("%d là s? chính phýõng\n", n);
                    else
                        printf("%d không ph?i s? chính phýõng\n", n);

                    // ---- S? nguyên t? ----
                    int laNT = 1;
                    if (n < 2) laNT = 0;
                    else {
                        for (int i = 2; i <= sqrt(n); i++) {
                            if (n % i == 0) {
                                laNT = 0;
                                break;
                            }
                        }
                    }

                    if (laNT)
                        printf("%d là s? nguyên t?\n", n);
                    else
                        printf("%d không ph?i s? nguyên t?\n", n);

                } else {
                    printf("%.2f là s? th?c, không ph?i s? nguyên\n", x);
                }

                break;
            }

            case 2:
                printf("\nB?n ch?n CN2\n");
                break;

            case 3:
                printf("\nB?n ch?n CN3\n");
                break;

            case 4:
                printf("\nB?n ch?n CN4\n");
                break;

            case 6:
                printf("\nB?n ch?n CN6\n");
                break;

            case 8:
                printf("\nB?n ch?n CN8\n");
                break;

            case 0:
                printf("\nB?n ð? ch?n thoát chýõng tr?nh!\n");
                break;

            default:
                printf("\nB?n ch?n sai! Vui l?ng nh?p l?i.\n");
                break;
        }

        system("pause");
