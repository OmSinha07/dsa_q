#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void quicksort(int ar[],int n);
int main ()
{
    int choice;
    printf("enter size of an array");
    int n,i;
    scanf("%d",&n);
    int ar[n];
     printf("enter elements in an array");
     for(i=0;i<n;i++)
     {
        scanf("%d",&ar[i]);
     }
     quicksort(ar,n);
     printf("the Sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
}
void quicksort(int ar[],int n)  
{
    int pivot=ar[0];
    int L=1,R=n-1;
    if(ar[0]<)

}
