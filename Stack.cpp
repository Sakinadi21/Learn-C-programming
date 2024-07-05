#include <stdio.h>

#define Max_Size 5

int stack[Max_Size];
int top = -1;

void push() {
    int x;
    printf("Enter data: ");
    scanf("%d", &x);
    if (top == Max_Size - 1) {
        printf("Overflow\n");
    } else {
        top++;
        stack[top] = x;
    }
}

void pop() {
    if (top == -1) {
        printf("Underflow\n");
    } else {
        int item = stack[top];
        top--;
        printf("Popped item: %d\n", item);
    }
}

void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top item: %d\n", stack[top]);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int ch;
    do {
        printf("Enter choice: 1:Push 2:Pop 3:Peek 4:Display 0:Exit\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (ch != 0);

    return 0;}
/*This is a C program that simulates a stack data structure using an array. Here's a breakdown of the code:

1. The program includes the standard input/output library and defines the size of the stack as 5.

2. It declares an array called 'stack' to store the stack elements and initializes a variable 'top' to -1 to represent an empty stack.

3. The 'push' function allows the user to input a value and adds it to the top of the stack if the stack is not full.
 If the stack is full, it prints "Overflow".

4. The 'pop' function removes the top element from the stack and prints its value if the stack is not empty.
If the stack is empty, it prints "Underflow".

5. The 'peek' function displays the value of the top element of the stack without removing it, if the stack is not empty.
 If the stack is empty, it prints "Stack is empty".

6. The 'display' function prints all the elements of the stack if it is not empty.
If the stack is empty, it prints "Stack is empty".

7. In the 'main' function, the program repeatedly asks the user for a choice: push, pop, peek, display, or exit.
It then calls the corresponding function based on the user's choice.

8. The program continues running until the user chooses to exit (enters 0).

This program demonstrates a simple implementation of a stack data structure in C language using an array.
 User input is used to interact with the stack by pushing, popping, peeking, and displaying the stack's contents.
*/
