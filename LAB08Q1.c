/*NAME-OM SINHA
  ROLL NO-22053173
  SECTION-CSE-12*/




#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Deque {
    struct Node* front;
    struct Node* rear;
};

struct Deque* createDeque() {
    struct Deque* deque = (struct Deque*)malloc(sizeof(struct Deque));
    deque->front = NULL;
    deque->rear = NULL;
    return deque;
}

int isEmpty(struct Deque* deque) {
    return (deque->front == NULL);
}

void insertAtRight(struct Deque* deque, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (isEmpty(deque)) {
        deque->front = newNode;
        deque->rear = newNode;
    } else {
        deque->rear->next = newNode;
        deque->rear = newNode;
    }
}

int deleteFromLeft(struct Deque* deque) {
    if (isEmpty(deque)) {
        printf("Deque is empty. Cannot delete from left.\n");
        return -1;
    } else {
        struct Node* temp = deque->front;
        int deletedValue = temp->data;
        deque->front = temp->next;
        free(temp);
        if (deque->front == NULL) {
            deque->rear = NULL;
        }
        return deletedValue;
    }
}

int deleteFromRight(struct Deque* deque) {
    if (isEmpty(deque)) {
        printf("Deque is empty. Cannot delete from right.\n");
        return -1;
    } else {
        struct Node* current = deque->front;
        struct Node* previous = NULL;
        while (current->next != NULL) {
            previous = current;
            current = current->next;
        }
        int deletedValue = current->data;
        if (previous == NULL) {
            deque->front = NULL;
            deque->rear = NULL;
        } else {
            previous->next = NULL;
            deque->rear = previous;
        }
        free(current);
        return deletedValue;
    }
}

void displayDeque(struct Deque* deque) {
    if (isEmpty(deque)) {
        printf("Deque is empty.\n");
    } else {
        struct Node* current = deque->front;
        printf("Deque: ");
        while (current != NULL) {
            printf("%d ", current->data);
            current = current->next;
        }
        printf("\n");
    }
}

int main() {
    struct Deque* deque = createDeque();
    int choice, element;

    do {
        printf("Input Restricted Deque Menu\n");
        printf("1. Insert at right\n");
        printf("2. Delete from left\n");
        printf("3. Delete from right\n");
        printf("4. Display\n");
        printf("5. Quit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element: ");
                scanf("%d", &element);
                insertAtRight(deque, element);
                break;
            case 2:
                element = deleteFromLeft(deque);
                if (element != -1) {
                    printf("%d deleted\n", element);
                }
                break;
            case 3:
                element = deleteFromRight(deque);
                if (element != -1) {
                    printf("%d deleted\n", element);
                }
                break;
            case 4:
                displayDeque(deque);
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}