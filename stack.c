#include <stdio.h>
#include <stdlib.h>
#define MAX 3

int st[MAX], top = -1;

void push(int st[], int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);

int main() {
    int val, option;
    do {
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("\nEnter the number to be pushed on Stack: ");
                scanf("%d", &val);
                push(st, val);
                break;

            case 2:
                val = pop(st);
                if (val != -1)
                    printf("\nThe value deleted from stack is: %d\n", val);
                break;

            case 3:
                val = peek(st);
                if (val != -1)
                    printf("\nThe value stored at top of stack is: %d\n", val);
                break;

            case 4:
                display(st);
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (option != 5);

    return 0;
}

void push(int st[], int val) {
    if (top == MAX - 1) {
        printf("Stack Overflow!\n");
    } else {
        top++;
        st[top] = val;
        printf("%d pushed onto stack.\n", val);
    }
}

int pop(int st[]) {
    if (top == -1) {
        printf("Stack Underflow!\n");
        return -1;
    } else {
        return st[top--];
    }
}

int peek(int st[]) {
    if (top == -1) {
        printf("Stack is empty!\n");
        return -1;
    } else {
        return st[top];
    }
}

void display(int st[]) {
    if (top == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack elements: ");
        int i;                                                            
        for (i = top; i >= 0; i--) {
            printf("%d ", st[i]);
        }
        printf("\n");
    }
}



