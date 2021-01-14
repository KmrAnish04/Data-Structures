#include<stdio.h>

int array[20];


void insertion(){

    printf("Enter the values of array:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("Enter the %dst element of arry:\n", i+1);
        scanf("%d", &array[i]);
        

    }
    
}

void searching(int num){

    for (int i = 0; i < 20; i++)
    {
        if (array[i] == num)
        {
            printf("Yes, Your entered element is present in the arrayy at %dth position\n", array[i]);
            break;
            
        }
        else
        {
            continue;
        }
        
    }
    
}

void update(){

    int position;
    int value;
    
    printf("Enter the position you want to update from 1 to 20\n");
    scanf("%d", &position);
    printf("Enter the integer value only you want to update with\n");
    scanf("%d", &value);
    printf("Updated Successfully!\n");

    array[position - 1] = value;
}

void deletion(){
    int position_to_delete;
    
    printf("Enter the position you want to delete\n");
    scanf("%d", &position_to_delete);

    for (int i = position_to_delete-1; i < 20; i++)
    {
        array[i] = array[i+1];
    }
    printf("Deleted Successfully!\n");

}

void display(){
    printf("The values of array is as follows:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("Position %dst: %d\n",i+1, array[i]);
    }
    
}


int main(){

    int user;
    int searching_element;
    int a = 0;
    printf("First of all, You have insert values in array, After then you will able to perform any operations on array\n");
    insertion();

    while (a == 0)
    {
        printf("Enter Your Choice: Press 1 for searching , 2 for updation , 3 for deletion , 4 for dispaly elements, 0 to exit. \n");
        scanf("%d", &user);
        switch (user)
        {
        case 1:
            
            printf("Enter the value you want to search:\n");
            scanf("%d", &searching_element);
            searching(searching_element);
            break;
        
        case 2:
            update();
            break;

        case 3:
            deletion();
            break;

        case 4:
            display();
            break;
        case 0:
            break;

        default:
            printf("Oops! Something went wrong! Plase Try Again...\n");
            continue;
        }
    }
    
    return 0;

}Hup