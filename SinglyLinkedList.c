#include <stdio.h>
#include <stdlib.h>

struct list
{
    int info;
    struct list *next;
};
typedef struct list node;

node *start = NULL;


// inserting a node at the beginning
void insert_at_beginning()
{
    node *item;
    item = (node *)malloc(sizeof(node));
    printf("Enter the data to be stored: ");
    scanf("%d", &item->info);
    // for the address
    if (start == NULL)
    {
        item->next = start;
        start = item;
    }
    else
    {
        item->next = start;
        start = item;
      
    }
}

// inserting the node at the last
void insert_at_last()
{
    node *temp, *item;
    item = (node *)malloc(sizeof(node));
    temp = start;
    printf("Enter the data to be stored: ");
    scanf("%d", &item->info);
    if (start == NULL)
    {
        item->next = start;
        start = item;
      
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = item;
        item->next = NULL;
    }
}

// Inserting a node at a specific position
void insert_at_specific_position()
{
    node *item, *temp;
    temp = start;
    int position, count = 1;

    item = (node *)malloc(sizeof(node));

    printf("Enter the position the node is to be stored: ");
    scanf("%d", &position);


    printf("Enter the data to be stored: ");
    scanf("%d", &item->info);

    while (count < position)
    {
        temp = temp->next;
        count++;
    }
    item->next = temp->next;
    temp->next = item;
    
  
}

// Delete the last node
void delete_last()
{
    node *temp, *loc;
    temp = start;
    if (temp == NULL)
    {
        printf("There's no node\n");
    }
    else if (temp->next == NULL)
    {
        printf("%d is deleted\n", temp->info);
        free(temp);
        start = NULL;
        
    }
    else
    {
        while (temp->next != NULL)
        {
            loc = temp;
            temp = temp->next;
        }
        loc->next = NULL;
        printf("%d is deleted\n", temp->info);
        free(temp);
        
    }
}

// deletion of the first node
void delete_first()
{
    node *ptr;
    if (start == NULL)
    {
        printf("There is no node\n");
    }
    else if (start->next == NULL)
    {
        printf("%d is deleted.\n", start->info);
        free(start);
        start = NULL;
    
    }
    else
    {
        ptr = start;
        start = start->next;
        printf("%d is deleted.\n", ptr->info);
        free(ptr);
        
    }
}

// Deleting the node at the specific position
void delete_specific_position()
{
    node *temp, *loc;
    int position, count = 1;
    temp = start;
    if (temp == NULL)
    {
        printf("There's no node.\n");
    }
    else
    {
        printf("Enter the position to be deleted: ");
        scanf("%d", &position);

        while (count != position)
        {
            loc = temp;
            temp = temp->next;
            count++;
        }
        printf("%d is deleted.", temp->info);
        loc->next = temp->next;
        free(temp);
        
        
   
    }
}

// Traverse and display
void display()
{
    node *temp;
    temp = start;
    if (temp == NULL)
    {
        printf("There is no any node.\n");
    }
    while (temp != NULL)
    {
        printf("%d \t", temp->info);
        temp = temp->next;
    }
}

// Searching
void search()
{
    int number_to_searched, count = 0;
    node *searcher;
    searcher = start;
    printf("Enter the number to be searched: ");
    scanf("%d", &number_to_searched);

    while (searcher != NULL)
    {
        count++;
        if (searcher->info == number_to_searched)
        {
            printf("It's at the position %d", count);
            break;
        }

        searcher = searcher->next;
    }
    if (searcher == NULL)
    {
        printf("There's no such number in the list.\n");
    }
}

int main()
{
    int option_status = 1;
    int choose;
    while (option_status)
    {
        printf("\n==> MENU <==\n 1. INSERT AT THE BEGINNING \n 2. INSERT AT THE LAST \n 3. INSERT AT THE SPECIFIC POSITION\n 4. DELETE FIRST NODE \n 5. DELETE LAST NODE \n 6. DELETE NODE AT THE SPECIFIC POSITION  \n 7. DISPLAY ALL ELEMENTS\n 8. SEARCH \n 9. EXIT \n ------------------------- \n");
        printf("Choose one option: ");
        scanf("%d", &choose);

        switch (choose)
        {
        case 1:
            insert_at_beginning();
            break;
        case 2:
            insert_at_last();
            break;
        case 3:
            insert_at_specific_position();
            break;
        case 4:
            delete_first();
            break;
        case 5:
            delete_last();
            break;
        case 6:
            delete_specific_position();
            break;
        case 7:
            display();
            break;
        case 8:
            search();
            break;
        case 9:
            option_status = 0;
            printf("Exited!!!!\n");
            break;
        default:
            printf("Invalid option\n");
        }
    }
    return 0;
}
