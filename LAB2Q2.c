#include <stdio.h>
int nonzero(int n, int ar[n][n]);
void triangualr(int n, int ar[n][n]);
void nonmaindiagonal(int n, int ar[n][n]);
int main()
{
    printf("enter size of square matrix\n");
    int n;
    scanf("%d", &n);
    int ar[n][n];
    printf("enter elements\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
    int res;
    printf("the no of non zero elements are");
    res = nonzero(n, ar);
    printf("%d\n", res);
    printf("the upper triangular matrix is\n");
    triangular(n, ar);
    printf("non maindiagonal\n");
    nonmaindiagonal(n, ar);
}
int nonzero(int n, int ar[n][n])
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ar[i][j] != 0)
                c++;
        }
    }
    return c;
}
void triangular(int n, int ar[n][n])
{
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            printf("%d", ar[i][j]);
        }

        printf("\n");
        d++;
        for (int k = 1; k <= d; k++)
        {
            printf(" ");
        }
    }
}
void nonmaindiagonal(int n, int ar[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)

                printf("%d", ar[i][j]);
            else
                printf(" ");
        }
        printf("\n");
    }
}
