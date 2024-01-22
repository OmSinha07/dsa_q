#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void IsFull(int *ar, int N);
void IsEmpty(int *ar, int N);
void enqueue(int item, int *ar, int N);
void dequeue(int *ar, int N);
void traverse(int *ar, int N);
int front = -1;
int rear = -1;
int main()
{
    int N;
    printf("Enter the size of Queue : ");
    scanf("%d", &N);
    int *ar = (int *)calloc(N, sizeof(int));
    printf("Main Menu\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. IsEmpty\n");
    printf("4. IsFull\n");
    printf("5. Traverse\n");
    printf("6. Exit\n");
    while (1)
    {
        int choice;
        printf("Enter Option : ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            int data;
            printf("Enter Element : ");
            scanf("%d", &data);
            enqueue(data, ar, N);
        }
        else if (choice == 2)
        {

            dequeue(ar, N);
        }
        else if (choice == 3)
        {

            IsEmpty(ar, N);
        }
        else if (choice == 4)
        {

            IsFull(ar, N);
        }
        else if (choice == 5)
        {

            traverse(ar, N);
        }
        else
            exit(1);
    }
    return 0;
}
void enqueue(int data,int *ar, int N)
{
    if ((rear + 1) % N == front)
    {
        printf("Queue is Full\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        ar[rear] = data;
    }
    else
    {
        rear = (rear + 1) % N;
        ar[rear] = data;
    }
}
void dequeue(int *ar, int N)
{
    if (rear == -1 && front == -1)
    {
        printf("Queue is Empty\n");
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;
        printf("Element Deleted\n");
    }
    else
    {
        front = (front + 1) % N;
        printf("Element Deleted\n");
    }
}
void IsEmpty(int *arr, int N)
{
    if (rear == -1 && front == -1)
    {
        printf("Queue is Empty\n");
    }
    else
        printf("Queue is not Empty\n");
}
void IsFull(int *arr, int N)
{
    if ((rear + 1) % N == front)
    {
        printf("Queue is Full\n");
    }
    else
        printf("Queue is not Full\n");
}
void traverse(int *ar, int N)
{
    printf("CQueue : ");
    int i = front;
    while (i != rear)
    {
        printf("%d ", ar[i]);
        i = (i + 1) % N;
    }
    printf("%d", ar[rear]);
    printf("\n");
}
