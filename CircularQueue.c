
#include <stdio.h>

#define max_size 5

// Global Variables
int front = -1; // data out
int rear = -1;  // data in

int queue[max_size];
int item;

// Functions to be called
void Enqueue()
{
    if (((rear + 1) % max_size) == front)
    {
        printf("The queue is full.\n");
    }
    else if (rear == -1 && front == -1)
    {
        printf("Enter the first element: ");
        scanf("%d", &item);
        rear = front = 0;
        queue[rear] = item;
    }
    else
    {
        rear = (rear + 1)%max_size;
        printf("\nEnter the item to be stored: ");
        scanf("%d", &item);
        queue[rear] = item;
    }
}

void Dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("\nQueue is empty.\n");
    }
    else if (front == rear)
    {
        item = queue[front];
        printf("%d is dequeued.\n", item);
        rear = front = -1;
    }

    else
    {
        printf("%d is dequeued.\n", queue[front]);
        front = (front +1)%max_size;
    }
}

void Displayfront()
{
    if (rear == -1 && front == -1)
    {
        printf("\nThere are no elements in the queue.\n");
    }
    else
    {

        item = queue[front];
        printf("The front element is: %d\n", item);
    }
}

void Displayall()
{
    int i = front;
    if (rear == -1 && front == -1)
    {
        printf("\nThere are no elements in the queue.\n");
    }
    else
    {
        printf("The elements stored in the queue are: ");
        while(i != rear)
        {
            printf("%d\t", queue[i]);
            i = (i+1)%max_size;
        }
        printf("%d",queue[i]);
        printf("\n");
    }
}

int main()
{
    int option_status = 1;
    int choose;
    while (option_status)
    {
        printf("\n==> MENU <==\n 1.ENQUEUE \n 2.DEQUEUE \n 3.DISPLAY FRONT ELEMEMNT\n 4.DISPLAY ALL ELEMENTS  \n 5.EXIT \n ------------------------- \n");
        printf("Choose one option: ");
        scanf("%d", &choose);

        switch (choose)
        {
        case 1:
            Enqueue();`
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            Displayfront();
            break;
        case 4:
            Displayall();
            break;
        case 5:
            option_status = 0;
            printf("Exited!!!!");
            break;
        default:
            printf("Invalid option");
        }
    }
    return 0;
}
