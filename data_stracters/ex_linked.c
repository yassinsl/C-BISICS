#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int a;
    struct node *next;
};

int main(void)
{
    int choice;
    struct node *head, *newhead, *tmp;
    head = NULL;

    do
    {
        newhead = (struct node *)malloc(sizeof(struct node));

        printf("Please enter the number: ");
        scanf("%d", &newhead->a);
        newhead->next = NULL;

        if (head == NULL)
        {
            head = tmp = newhead;
        }
        else
        {
            tmp->next = newhead;
            tmp = newhead;
        }

        printf("Do you want to enter a new number in the linked list? Enter 1 for yes, 0 for no: ");
        scanf("%d", &choice);
    } while (choice);
        
        printf("please enter a new number :");
        scanf("%d", &newhead -> a);
        newhead -> next = head;
        head = newhead;

    tmp = head;
    while (tmp != NULL)
    {
        printf("%d ", tmp->a);
        tmp = tmp->next;
    }
    tmp = head;
    while (tmp != NULL)
    {
        struct node *temp = tmp;
        tmp = tmp->next;
        free(temp);
    }
    printf("\n");
    return 0;
}
