#include <stdio.h>

int main() {
    int n, m;

    printf("Nhap so dong n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);

    int a[n][m];

    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    for (int j = 0; j < m; j++) {
        for (int x = 0; x < n - 1; x++) {
            for (int y = 0; y < n - x - 1; y++) {
                if (a[y][j] > a[y + 1][j]) {
                    int temp = a[y][j];
                    a[y][j] = a[y + 1][j];
                    a[y + 1][j] = temp;
                }
            }
        }
    }

    printf("Ma tran sau khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
