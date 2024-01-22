#include<stdio.h>
int compare(int *a,int *b);
int main()
{
    int a, b;
    printf("Enter 1st Number : ");
    scanf("%d",&a);
    printf("Enter 2nd Number : ");
    scanf("%d",&b);
    int res;

    res=compare(&a,&b);
    return 0;
}
int compare(int *a,int *b)
{
    if (*a>*b)
    {
        printf("%d is Greater than %d.",*a,*b);
    }
    else
        printf("%d is Greater than %d.",*b,*a);
 return 0;

    
}
