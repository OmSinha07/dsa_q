#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void traverse(int *ar,int N);
void enqueue(int item,int *ar,int N);
void dequeue(int *ar,int N);
void IsEmpty(int *ar,int N);
void IsFull(int *ar,int N);
int front = -1;
int rear = -1;
