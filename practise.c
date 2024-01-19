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
    if (rear == max_size - 1)
    {
        printf("The queue is full\n");
    }
    else if (rear == -1 && front == -1)
    {
        rear++;
        front++;
        printf("Enter the element to be stored: \n");
        scanf("%d", &item);
        queue[rear] = item;
    }
    else
    {
        rear++;
        printf("Enter the element to be stored: \n");
        scanf("%d", &item);
        queue[rear] = item;
    }
}

void Dequeue()
{
    if (front == -1)
    {
        printf("No element is found\n");
    }
    else if (rear == front)
    {
        printf("%d is dequeued", queue[front]);
        rear = -1;
        front = -1;
    }
    else
    {
        printf("%d is dequeued", queue[front]);
        front++;
    }
}

void Displayfront()
{
    if (front == -1 && rear == -1)
    {
        printf("No element is found\n");
    }
    else
    {
        printf("%d", queue[front]);
    }
}

void Displayall()
{
    printf("The stored elements are: ");
    for(int i = front;i<=rear;i++)
    {
        printf("%d",queue[i]);
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
            Enqueue();
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