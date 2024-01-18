#include <stdio.h>

#define MAX_SIZE 10

// Function prototypes
void enqueue(int value);
int dequeue();
void display();

// Global variables
int queue[MAX_SIZE];
int front = -1, rear = -1;

int main() {
    int choice, value;

    do {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            system("cls");
            case 1:
                printf("Enter the value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                value = dequeue();
                if (value != -1) {
                    printf("Dequeued element: %d\n", value);
                }
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}

void enqueue(int value) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue is full. Cannot enqueue.\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("Enqueued element: %d\n", value);
    }
}

int dequeue() {
    if (front == -1) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    } else {
        int dequeuedValue = queue[front];
        printf("Dequeuing element: %d\n", dequeuedValue);

        if (front == rear) {
            // Queue becomes empty after dequeuing
            front = rear = -1;
        } else {
            // Shift elements to the front
            for (int i = front; i < rear; i++) {
                queue[i] = queue[i + 1];
            }
            rear--;
        }

        return dequeuedValue;
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
