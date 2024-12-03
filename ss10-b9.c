#include <stdio.h>

int main() {
    int row, col;

    printf("Nhap so dong row: ");
    scanf("%d", &row);
    printf("Nhap so cot col: ");
    scanf("%d", &col);

    int a[row][col];

    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int n = row < col ? row : col;
    for (int x = 0; x < n - 1; x++) {
        for (int y = 0; y < n - x - 1; y++) {
            if (a[y][y] > a[y + 1][y + 1]) {
                int temp = a[y][y];
                a[y][y] = a[y + 1][y + 1];
                a[y + 1][y + 1] = temp;
            }
        }
    }

    printf("Ma tran sau khi sap xep duong cheo chinh:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
