#include <stdio.h>

#define Max_Size 3

int queue[Max_Size];
int front = -1, rear = -1;

void enqueue() {
    int item;
    if (rear == Max_Size - 1) {
        printf("Overflow & Exit !!\n");
    } else {
        printf("Enter the element: ");
        scanf("%d", &item);
        if (front == -1) {
            front = rear = 0;
        } else {
            rear++;
        }
        queue[rear] = item;
        printf("Item Inserted: %d\n", item);
    }
}

void dequeue() {
    int item;
    if (front == -1 || front > rear) {
        printf("Underflow & Exit !!\n");
    } else {
        item = queue[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
        printf("Item deleted: %d\n", item);
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty !!\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("1: Enqueue\n2: Dequeue\n3: Display\n4: Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exit\n");
                return 0;
            default:
                printf("Invalid choice!!\n");
        }
    }
}
/*This code implements a basic queue data structure using an array in the C programming language.
It defines a constant `Max_Size` to set the maximum size of the queue to 3 and initializes a queue array with this size.
It also maintains two variables `front` and `rear` to keep track of the front and rear indices of the queue.

The code provides three main operations on the queue:
1. `enqueue()`: Adds an element to the queue. It first checks if the queue is full (rear == `Max_Size - 1`).
If not full, it prompts the user to input an element and inserts it into the queue at the rear position.
It updates the `front` and `rear` pointers accordingly.
2. `dequeue()`: Removes an element from the queue.
It checks if the queue is empty (front == -1 or front > rear).
If not empty, it deletes the element at the front of the queue and updates the `front` pointer.
3. `display()`: Displays all elements in the queue.
It checks if the queue is empty and if not, it iterates through the queue elements between front and rear indexes and prints them.

The `main()` function provides a simple menu-driven interface for the user to choose between enqueue, dequeue, display, or exit options.
It continuously prompts the user for a choice and performs the corresponding operation based on the user input using a `switch` statement.

Overall, the code provides a basic implementation of a queue data structure with enqueue, dequeue, and display operations, allowing the user to interact with the queue through a command-line interface.
*/
