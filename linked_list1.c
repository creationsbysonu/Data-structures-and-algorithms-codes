#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

struct node{
    int info;
    struct node *next;

};

struct node *head=NULL,*ptr,*newptr;

struct node* getnode(){
            struct node *np;
            np=(struct node *) malloc(sizeof(struct node *));
            printf("Enter data: ");
            scanf("%d",&np->info);
            return np;
}

void create(){
    struct node *last;
    char ch;
    do{
        newptr = getnode();
        if(head==NULL){
        head = newptr;
        }
        else{ 
            last->next=newptr;
    }
    last= newptr;
    printf("Do you want to add more: (y/n) ");
    scanf(" %c",&ch);
}while(ch=='Y' || ch=='y');

}

void display(){
    if(head==NULL){
        printf("Empty list\n");
}
else{
    ptr=head;
    do{
        printf("%d"),ptr->next;
        ptr = ptr->next;
    }while(ptr!=NULL);
}
}

int main(){

    int choice;

    while(1){
        system("cls");
    printf("please Enter one option from below for Linked List Operation :  \n");
    printf("\n1.create\n2.Insert\n3.Delete\n4.Display\n5.Exit\n");
    scanf("%d",&choice);

    switch(choice){

            case 1 : create();
                    break;
           /* case 2 : insert();
                    break;
            case 3 : delete();
                    break;*/
            case 4 : display();
                    break;
            case 5 : exit(0);
                    break;
                }


            }

        getch();

    return 0;
}
