#include <stdio.h>

int main() {
    int m, n, p, i, j, k;
    printf("Enter the number of rows and columns of matrix A (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter the number of columns of matrix B (p): ");
    scanf("%d", &p);
    int A[m][n], B[n][p], C[m][p];

    printf("Enter elements of matrix A:\n");   // input 1st matrix
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");  // input 2nd matrix
    for(i = 0; i < n; i++) {
        for(j = 0; j < p; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < m; i++) {   // Initializing the result matrix C with zero
        for(j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

    for(i = 0; i < m; i++) {      //multiplication
        for(j = 0; j < p; j++) {
            for(k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Resultant matrix C (A * B):\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
