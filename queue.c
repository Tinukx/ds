#include<stdio.h>
#include<stdlib.h>
#define size 2
    void enqueue(int);
    void dequeue();
    void display();
    int queue[size],front=-1,rear=-1;
    void main()
    {
        int value,choice;
        while(1)
        {
            printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
            printf("\nEnter your choice:");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                enqueue(value);
                break;
                
                case 2:
                dequeue();
                break;

                case 3:
                display();
                break;

                case 4:
                exit(0);

                default: printf("Wrong Selection");
            }
        }
    }
    
    void enqueue(int value)
    {
        if(rear==size-1)
        {
        printf("\nQueue overflow\n");
        }
        else
        {
            if(front==-1)
            front=0;
             printf("Enter the value to be inserted:");
                scanf("%d",&value);
            rear++;
            queue[rear]=value;
            printf("\nInsertion success\n");
        }
    }

    void dequeue()
    {
        int item;
        if(front==-1 || front>rear)
        {
            printf("\nQueue underflow\n");
            return;
        }
        else{
            item=queue[front];
            if(front==rear)
            {
                front=-1;
                rear=-1;
            }
            else
            {

                front=front+1;
            }
            printf("Deleted %d\n",item);
        }
        
    }
    void display()
    {
        if(rear==-1)
        printf("\nQueue is empty\n");
        else
        {
            int i;
            printf("Queue elements are:");
            for(i=front;i<=rear;i++)
            printf("%d\n",queue[i]);
            }
    
    }
