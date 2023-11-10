#include<stdio.h>
#include<stdlib.h>
#define max 2
int queue[max];
int val;
int front=-1;
int rear=-1;

void enqueue(int element)
{
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=element;
    }
    else if((rear+1)%max==front)
    {
        printf("Queue is overflow!!!");
    }
    else
    {
        rear=(rear+1)%max;
        queue[rear]=element;
    }
}

int dequeue()
{
    if((front==-1 && rear==-1))
    {
        printf("\nQueue is underflow!!!");
    }
    else if(front==rear)
    {
        printf("\n The dequeued element is %d",queue[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("The dequeued element is %d",queue[front]);
        front=(front+1)%max;
    }
}

void display()
{
    int i=front;
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty!!!");
    }
    else
    {
        printf("Elements in queue are:");
        while (i !=rear )
        {
            printf("%d\n",queue[i]);
            i=(i+1)%max;
            printf("%d",queue[i]);
        }
        
    }
}

int main()
{
    int choice=1,x;
    while(choice<4 && choice!=0)
    {
        printf("\nPress 1:Insert element\n");
        printf("Press 2:Delete element\n");
        printf("Press 3:Display element\n");

        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter the elements to insert:");
            scanf("%d",&x);
            enqueue(x);
            break;

            case 2:
            dequeue();
            break;

            case 3:
            display();
            break;
        }
    }
}
