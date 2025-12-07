#include <stdio.h>
int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int mat[n][n], sum = 0;

    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for(int i = 0; i < n; i++)
        sum += mat[i][i]; // main diagonal sum

    printf("Sum of main diagonal = %d\n", sum);
    return 0;
}
