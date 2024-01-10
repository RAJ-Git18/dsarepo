#include <stdio.h>
#define max_stack_size 5

// Global Variables
int top = -1;
int stack[max_stack_size];
int item;

// Functions to be called
void Stack()
{
    if (top == max_stack_size - 1)
    {
        printf("The stack is full.");
    }
    else
    {
        top++;
        printf("Enter the no to be stored: ");
        scanf("%d", &item);
        stack[top] = item;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("No element found.\n");
    }
    else
    {
        printf("%d is poped out.\n", stack[top]);
        top--;
    }
}
void display()
{
    if (top == -1)
    {
        printf("No element found.\n");
    }
    else
    {

        printf("The elements are: ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d \t", stack[i]);
        }
    }
}
void no_of_elements()
{
    printf("The no of elements present in the stack are: %d\n", top + 1);
}
void peek()
{
    if (top == -1)
    {
        printf("No element found.\n");
    }
    else
    {
        for(int i=top;i>=top;i--)
        {
            printf("%d is peeked.\n",stack[top]);
        }
            top--;
    }
}

int main()
{
    int option_status = 1;
    int choose;
    while (option_status)
    {
        printf("\n==> MENU <==\n 1.STACK \n 2.POP \n 3.DISPLAY \n 4.NO OF ELEMENTS \n 5.PEEK \n 6.EXIT \n ------------------------- \n");
        printf("Choose one option: \n");
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            Stack();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            no_of_elements();
            break;
        case 5:
            peek();
            break;
        case 6:
            option_status = 0;
            printf("Exited!!!!");
            break;
        default:
            printf("Invalid option");
        }
    }
    return 0;
}