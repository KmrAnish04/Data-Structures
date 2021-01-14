#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;                         //Data of element
    struct node *address_of_nextNode; //Address pointer of node
};

int main()
{
    struct node *Head, *newNode, *temp;
    Head = newNode = temp = NULL;
    char userChoice1;
    int userChoice2 = 1;
    int userChoice3;

    printf("Do you want to create a head node of linklist::\nPress 'Y' if Yes, otherwise hit 'Enter'::\n");
    scanf("%c", &userChoice1);

    if (userChoice1 == 'Y')
    {   
        // From line 24 to 30, lines are for creating first node(i.e Head node of linklist) of linklist.
        newNode = (struct node *)malloc(sizeof(struct node)); //Memory allocation for first node of "struct node" data type.
        printf("Enter the data in head node 1::\n");
        scanf("%d", &newNode->data);
        Head = temp = newNode; // Making "Head" and "temp" to point towards first node.
        newNode->address_of_nextNode = NULL; //Till here we have not any next node expect first node, .'. initializing it with "NULL".
        temp->address_of_nextNode = NULL; //Same with "temp" as above(line 30).

        while (userChoice2)
        {
            printf("Do you want to add more nodes? ::\nPress 1 if Yes or 0 if No. ::\n");
            scanf("%d", &userChoice3);
            if (userChoice3 == 1)
            {
                userChoice2++;
                newNode = (struct node *)malloc(sizeof(struct node));
                printf("Enter the data in the node %d::\n", userChoice2);
                scanf("%d", &newNode->data);
                temp->address_of_nextNode = newNode;
                temp = newNode;
                newNode->address_of_nextNode = NULL;
            }

            else
            {
                printf("Exited!\n");
                break;
            }
        }

        temp = Head;
        while (temp != NULL)
        {
            printf("The data is %d and location is %x\n", temp->data, temp);
            temp = temp->address_of_nextNode;
        }
    }

    else
    {
        printf("Exited!\n");
    }

    return 0;
}
