// #include <stdio.h>
// #define max_stack_size 5

// // Global Variables
// int top = -1;
// int stack[max_stack_size];
// int item;

// // Functions to be called
// void Stack()
// {
//     if (top == max_stack_size - 1)
//     {
//         printf("\nStack is full\n");
//     }
//     else
//     {
//         top++;
//         printf("Enter the element to be stored: ");
//         scanf("%d", &item);
//         stack[top] = item; 
//     }
// }

// void pop()
// {
//     if(top == -1)
//     {
//         printf("\nThere's no element in the chamber.\n");
//     }
//     else
//     {
//         printf("%d is poped out\n",stack[top]);
//         top--;
//     }
// }
// void display()
// {
//     printf("\nAll the elements stored in the stack: ");
//     for(int i =top; i>=0;i--)
//     {
//         printf("\t%d",stack[i]);
//     }
// }
// void no_of_elements()
// {
//     printf("\n The number of elements stored in the stack: %d",top+1);
// }
// void peek()
// {
//     printf("The element at the top of the stack is %d",stack[top]);
// }

// int main()
// {
//     int option_status = 1;
//     int choose;
//     while (option_status)
//     {
//         printf("\n==> MENU <==\n 1.STACK \n 2.POP \n 3.DISPLAY \n 4.NO OF ELEMENTS \n 5.PEEK \n 6.EXIT \n ------------------------- \n");
//         printf("Choose one option: \n");
//         scanf("%d", &choose);
//         switch (choose)
//         {
//         case 1:
//             Stack();
//             break;
//         case 2:
//             pop();
//             break;
//         case 3:
//             display();
//             break;
//         case 4:
//             no_of_elements();
//             break;
//         case 5:
//             peek();
//             break;
//         case 6:
//             option_status = 0;
//             printf("Exited!!!!");
//             break;
//         default:
//             printf("Invalid option");
//         }
//     }
//     return 0;
// }

#include<stdio.h>
int main ()
{ 
    int temp = 0;
    int array[3] = {1,7,8};
    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(array[i]<array[j])
            {   
                
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
               
            }
        }

    }
    printf("The result is : ");

    for(int i=0;i<3;i++)
    {
        printf("%d",array[i]);
    }
    return 0;
}