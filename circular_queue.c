#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 4

struct queue{
    int data[size];
    int rear,front;
}q;

void enqueue(){
    if((q.rear+1)%size==q.front)
    {
        printf("Queue is FULL.");
    }

    else
    {
        printf("Enter the data to be added in QUEUE: ");
        scanf("%d",&q.data[q.rear]);
        printf("Data added succesfully!!!");
        q.rear=((q.rear+1)%size);
    }
}

void dequeue(){
    if(q.front==q.rear)
    {
        printf("Queue is EMPTY.");
    }
    else
    {
        printf("Data dequeued is :%d ",q.data[q.front]);
        q.front=(q.front+1)%size;
        q.rear=((q.rear+1)%size);

    }

}

void display(){
    if(q.front==q.rear)
    {
        printf("Queue is EMPTY.");
    }
    else{
        printf("The data in circular queue are : \n");
        for(int i=q.front; i<=q.rear; i++)
        {
            printf("%d ",q.data[i]);
        }
    }
}




int main(){
    int choice;
    q.front=0;
    q.rear=0;
    while(1){
    system("cls");
    printf("\nCircular Queue Operations:\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n Select one option from above : ");
    scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            
                }
        getch();
        }
}