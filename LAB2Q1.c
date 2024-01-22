#include <stdio.h>
#include <stdlib.h>
void insertion(int ar[], int n);
void delete(int ar[], int n);
void linear(int ar[], int n);
void traversal(int ar[], int n);
int main()
{
    int n;
    printf("enter size of an array ");
    scanf("%d", &n);
    printf("enter elements : ");
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("\n*Menu*\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Linear Search\n");
    printf("4. Transverse\n");
    printf("5. Exit\n");
    int ch;
    while (1)
    {

        printf("enter your choice ");
        scanf("%d", &ch);

        switch (ch)
        {

            {

            case 1:
                insertion(ar, n);
                break;
            case 2:
                delete (ar, n);
                break;
            case 3:
                linear(ar, n);
                break;
            case 4:
                traversal(ar, n);
                break;
            case 5:
                exit(0);
                break;
            deafult:
                printf("invalid choice");
            }
        }
    }
}
void insertion(int ar[], int n)
{
    int e, pos;
    printf("enter element to be enserted ");
    scanf("%d", &e);
    printf("enter position");
    scanf("%d", &pos);
    n++;
    if (pos > n || pos < 0)
    {
        printf("Invalid Positon.");
        exit(1);
    }
    for (int i = n; i > pos - 1; i--)
    {
        ar[i] = ar[i - 1];
    }
    ar[pos - 1] = e;
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", ar[i]);
    }
}
void delete(int ar[], int n)
{
    printf("enter postion from which element to be deleted ");
    int pos;
    scanf("%d", &pos);
    if (pos > n || pos < 0)
    {
        printf("Invalid Positon.");
        exit(1);
    }
    for (int i = pos - 1; i < n; i++)
    {
        ar[i] = ar[i + 1];
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", ar[i]);
    }
}
void linear(int ar[], int n)
{
    printf("enter element");
    int e;
    scanf("%d", &e);
    int c = 0, ind;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == e)
        {
            ind = i;
            c++;
        }
    }
    if (c == 0)
        printf("element  not found ");
    else
        printf("element found at %d", ind);
}

void traversal(int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", ar[i]);
    }
}
