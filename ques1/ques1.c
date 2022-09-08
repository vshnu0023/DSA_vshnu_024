#include<stdio.h>
#include<stdlib.h>

struct node{
                int data;
                struct node *next;
            };
struct node *head;

void insertion();
void insertend();
void display();

void main()
{
    int opt=0;
    while(1)
    {
        printf("\n--**Menu**--");
        printf("\n1.Insert an element\n2.Insert element at end\n3.Display the elements\n4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
        insertion();
        break;
        case 2:
        insertend();
        break;
        case 3:
        display();
        break;
        case 4:
        exit(0);
        default :
        printf("Please enter correct option\n");
              }
    }
}

void insertion()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("Overflow\n");
    }
    else
    {
        printf("Enter the element value\n");
        scanf("%d",&item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nNode inserted");
    }
}
void insertend()
{
    struct node *ptr,*temp;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("Overlow\n");
    }
    else
    {
        printf("Enter the element value\n");
        scanf("%d",&item);
        ptr->data = item;
        if(head == NULL)
        {
            ptr -> next = NULL;
            head = ptr;
            printf("Node inserted\n");
        }
        else
        {
            temp = head;
            while (temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("Node inserted\n");

        }
    }
}
void display()
{
    struct node *ptr;
    ptr = head;
    if(ptr == NULL)
    {
        printf("Nothing to display\n");
    }
    else
    {
        printf("Elements present are : ");
        while (ptr!=NULL)
        {
            printf("%d\t",ptr->data);
            ptr = ptr -> next;
        }
    }
}
