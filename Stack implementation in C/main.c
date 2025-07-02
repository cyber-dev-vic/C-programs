#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 5  // Maximum size of the stack

int stack[MAXSIZE];
int top = -1;  // Initialize top to -1 to represent an empty stack

// Function to push an element onto the stack
void push(int value) {
    if (top == MAXSIZE - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        stack[++top] = value;
        printf("Pushed %d onto the stack.\n", value);
    }
}

// Function to pop an element from the stack
void pop() {
    if (top == -1) {
        printf("Stack Underflow! Nothing to pop.\n");
    } else {
        printf("Popped %d from the stack.\n", stack[top--]);
    }
}

// Function to display the stack contents
void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack contents (top to bottom): ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

// Main function to test the stack
int main() {
    // Perform at least 3 push and 2 pop operations
    push(10);
    push(20);
    push(30);
    display();

    pop();
    display();

    pop();
    display();

    return 0;
}
