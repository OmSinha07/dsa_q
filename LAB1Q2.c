#include<stdio.h>
#include<stdlib.h>
int sum(int *pt, int n);
int Isprime(int n);
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int *pt= (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d Element :", i + 1);
        scanf("%d", &pt[i]);
    }
    int s = sum(pt, n);
    printf("Sum = %d", s);
    return 0;
}
int sum(int *pt, int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (Isprime(*(&pt[i])))
        {
            sum = sum + *(&pt[i]);
        }
    }
    return sum;
}
int Isprime(int n)
{
    int count = 0;
    
    
    
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        return 1;
    }
    else
        return 0;
}