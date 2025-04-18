
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#define N 500
int A[N][N], B[N][N], C[N][N];
int main() {
    int i, j, k;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++) {
            A[i][j] = 1;
            B[i][j] = 2;
            C[i][j] = 0;
        }
    #pragma omp parallel for collapse(2) private(i, j, k)
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            int sum = 0;
            for (k = 0; k < N; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }
    printf("C[0][0] = %d\n", C[0][0]);
    return 0;
}
