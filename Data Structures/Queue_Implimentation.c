#include <stdio.h>

int queue[5];
int size_Of_Queue = 5;
int front = -1;
int rear = -1;

/////////////////////////////////////////////////////////////////
void enqueue(int value)
{

    if (rear == size_Of_Queue)
    {
        printf("Overflow Condition exists here\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = value;
        printf("Added an element in the queue successfully!\n");
    }
    else
    {
        rear++;
        queue[rear] = value;
        printf("Added an element in the queue successfully!\n");
    }
}
/////////////////////////////////////////////////////////////////

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Underflow Condition exists here\n");
    }
    else if (front == rear)
    {
        printf("Deleting the last element %d from queue\n", queue[front]);
        front = rear = -1;
        printf("Successfully deleted last element\n");
    }
    else
    {
        printf("Deleting an element %d from the queue\n", queue[front]);
        front++;
        printf("Successfully deleted an element from the queue\n");
    }
}
/////////////////////////////////////////////////////////////////////////////
void display()
{

    if (front == -1 && rear == -1)
    {
        printf("Underflow Condition Exists here\n");
    }
    else
    {
        printf("The following are the elements of queue::\n");
        for (int i = front; i <= rear; i++)
        {
            printf("Element %dst = %d\n", front+1, queue[i]);
        }
    }
}
////////////////////////////////////////////////////////////////////////////
void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("Underflow condition exists here\n");
    }
    else
    {
        printf("Element = %d\n", queue[front]);
    }
}
/////////////////////////////////////////////////////////////////////////////


int main()
{
    int runner = 1;
    int user;
    while (runner == 1)
    {
        int element_value;
        printf("Enter the operation you want to perform:\nPress 1 for insertion, 2 for deletion, 3 for display, 4 for peek else press 0 to exit:\n");
        scanf("%d", &user);
        switch (user)
        {
        case 1:
            printf("Enter the value of element you want insert in the queue:\n");
            scanf("%d", &element_value);
            enqueue(element_value);

            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            peek();
            break;

        
        case 0:
            runner = 2;
            break;


        default:
            break;
        }
    }

    return 0;
}