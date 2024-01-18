#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define size 5

struct queue
{
    int data[size];
    int front;
    int rear;
}q;

void enqueue(){
    if (q.rear==size-1)  
    {
        printf("Queue is FULL.");
    }
    else{
        (q.rear)++;
        printf("Value of rear is :%d\n",q.rear);
        printf("Enter the data to be Enqueued: \n");
        scanf("%d",&q.data[q.rear]);
        printf("Data Enqueued Successfuly.\n");
    }
    

}
void dequeue(){

    if (q.rear<q.front)
    {
        printf("Queue is EMPTY.");

    }
    else{
        printf("Data Dequeued is : %d",q.data[q.front]);
        (q.front)++;
    }


}

void display(){
    if (q.rear<q.front)
    {
        printf("Queue is EMPTY.");

    }
    else{
         printf("Data in QUEUE is : ");
        for (int i = q.front; i <= q.rear ; i++)
        {
            printf("%d ",q.data[i]);
        }
        
    }
    
}


int main(){

    int choice;
    q.front=0;
    q.rear=-1;
    while(1){
    //system("cls");
    printf("\nQueue Operations:\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
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
        return 0;
    }

