#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 6

struct stack
{
    int data[size];
    int top;
    
}s;
void push(){
    if (s.top==size-1)
    {
        printf("Stack Overflow.");
    }
    else
    {
        (s.top)++;
        printf("Enter the data to be added in stack : ");
        scanf("%d",&s.data[s.top]);
        printf("Data Added Successfully !!!\n\n");

    }
    
    
}
void pop(){
    if (s.top==-1)
    {
        printf("Stack is empty.");
    }
    else
    {
        printf("Data popped : %d",s.data[s.top]);
        (s.top)--;
    }

}
void display(){
    int i;
    if (s.top==-1)
    {
        printf("No data in stack.");
    }
    else{
        printf("Data in stack are : \n");
            for ( i = s.top; i >= 0; i--)
            printf("%d\n",s.data[i]);
    }
    

}


int main ()
{ 
    int choice;
    s.top=-1;
    while(1){
        

    printf("\nPlease Select one option for the Stack Operation:\n");
    printf("\n1.Push\n2.Pop\n3.Display the stack\n4.Exit\n\n\n");
    scanf("%d",&choice);
    switch(choice){
        case 1: push();
            break;
        case 2: pop();
            break;
        case 3: display();
            break;
        case 4: exit(0);
            
    }
    getch();
    }
    return 0;
}