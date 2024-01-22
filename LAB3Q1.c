#include <stdio.h>
int main()
{
    int r, c, n;
    printf("Enter the number of rows, columns and non-zero elements of the sparse matrix:\n");
    scanf("%d %d %d", &r, &c, &n);

    int sparse[n][3];
    printf("Enter the row, column and value of each non-zero element:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &sparse[i][0], &sparse[i][1], &sparse[i][2]);
    }

    int transpose[n][3];
    for (int i = 0; i < n; i++)
    {
        transpose[i][0] = sparse[i][1];
        transpose[i][1] = sparse[i][0];
        transpose[i][2] = sparse[i][2];
    }

    printf("The transpose matrix is:\n");
    printf("row\tcol\tval\n");
    printf("%d\t%d\t%d\n",r,c,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\n", transpose[i][0], transpose[i][1], transpose[i][2]);
    }

    return 0;
}