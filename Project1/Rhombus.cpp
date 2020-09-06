#include<stdio.h>
int main() {
    int i, j;
    int n;
    scanf_s("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i + j <= n / 2 + 1 || j - i >= n / 2 + 1 || i - j >= n / 2 + 1 || i + j > 2 * n - (n / 2))
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}