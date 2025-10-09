#include <stdio.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

void enqueue(int val) {
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
    } else {
        if (front == -1)  
            front = 0;
        rear++;
        queue[rear] = val;
        printf("%d inserted in Queue\n", val);
        printf("Front index : %d   Rear index : %d" , front,rear);
        }
    }


void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
    } else {
        printf("Dequeued element is %d\n", queue[front]);
        front++;
    }
}

void peek() {
    if (front == -1 || front > rear) {
        printf("Queue is Empty\n");
    } else {
        printf("The peek value is %d\n", queue[front]);
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is Empty\n");
    } else {
    	int i;
        printf("Queue elements: ");
        for (i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int ch, val;
    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: 
                printf("Enter value: ");
                scanf("%d", &val);
                enqueue(val);
                break;
            case 2: 
                dequeue();
                break;
            case 3: 
                peek();
                break;
            case 4: 
                display();
                break;
            case 5: 
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}


