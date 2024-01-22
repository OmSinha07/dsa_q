#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void bubbleSort(int ar[],int n);
void selectionSort(int ar[],int n);
void insertionSort(int ar[],int n);
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
      while(1)
      {
    printf("1. bubble sort\n");
    printf("2. selection sort\n");
    printf("3. insertion sort\n");
    printf("enter choice\n");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
        bubbleSort(ar,n);
        break;
        case 2:
        selectionSort(ar,n);
        break;
        case 3:
        insertionSort(ar,n);
        break;
        case 4:
        exit(0);
    }
    printf("the Sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\n");
    }
    return 0;

}


void bubbleSort(int ar[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ar[j] > ar[j + 1]) {
                int temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int ar[],int n)
{
  int largest,pos,i,j;
  for(i=n-1;i>0;i--)
  {
    largest=ar[0];pos=0;
  
  for(int j=1;j<=i;j++)
  {
    if(ar[j]>largest)
    {
        largest=ar[j];
        pos=j;
    }
  }
        ar[pos]=ar[i];
        ar[i]=largest;

    }
}
void insertionSort(int ar[], int n) {
    for (int i = 1; i < n; i++) {
        int key = ar[i];
        int j = i - 1;


        while (j >= 0 && ar[j] > key) {
            ar[j + 1] = ar[j];
            j--;
        }
        ar[j + 1] = key;
    }
}
