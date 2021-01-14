#include <stdio.h>

int stack[5];
int top = -1;
int size_of_stack = 5;
char Nuller = '\0';
///////////////////////////////////////////////////////////////////////////////////
void push()
{

    top++;
    if (top <= size_of_stack - 1)
    {
        printf("Enter the %dst/nd value in the stack\n", top + 1);
        scanf("%d", &stack[top]);
    }

    else
    {
        printf("Stack Overflow Condition");
    }
} 
//////////////////////////////////////////////////////////////////////////////////
void pop()
{

    if (top > -1)
    {

        printf("An element is popped i.e %d\n", stack[top]);
        top--;
    }
    else
    {
        printf("Stack Underflow\n");
    }
}
/////////////////////////////////////////////////////////////////////////////////
void peek()
{

    if (top > -1)
    {
        printf("Currently, The uppermost element of stack is %d \n", stack[top]);
        top--;
    }
    else
    {
        printf("Stack is empty\n");
    }
}
////////////////////////////////////////////////////////////////////////////////

void isEmpty()
{
    if (top <= -1)
    {
        printf("Your stack is empty now\n");
    }
    else
    {
        printf("Stack is not empty\n");
    }
}

///////////////////////////////////////////////////////////////////////////////
void isFull()
{
    if (top == size_of_stack - 1)
    {
        printf("Your stack is full\n");
    }
    else
    {
        printf("Your stack is not full\n");
    }
}
///////////////////////////////////////////////////////////////////////////////

void main()
{
    int User_choice;
    int a = 1;

    while (a == 1)
    {
        printf("Enter you choice: 1 for push, 2 for pop, 3 for peek, 4 for isEmpty, 5 for isFull and 0 to exit\n");
        scanf("%d", &User_choice);

        if (User_choice == 1)
        {
            push();
        }

        else if (User_choice == 2)
        {
            pop();
        }

        else if (User_choice == 3)
        {
            peek();
        }

        else if (User_choice == 4)
        {
            isEmpty;
        }

        else if (User_choice == 0)
        {
            printf("Exiting from here\n");
            break;
        }

        else
        {
            printf("Not a valid choice. Please try again\n");
            break;
        }
    }
}