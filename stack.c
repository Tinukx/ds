#include<stdio.h>
int stack[100],choice,n,i,top=-1;
void push();
void pop();
void display();
void main()
	{
	 printf("enter the number elements in the stack:");
	 scanf("%d",&n);
	 do
	 {
	   printf("\nchoose one option\n1.push\n2.pop\n3.display\n4.exit\n enter your choice");
	   scanf("%d",&choice);
	   switch(choice)
	   	{
	   	  case 1:
	   	{
	   	  push();
	   	  break;
	   	}
	   	  case 2:
	   	  {
	   	  pop();
	   	  break;
	   	}
	   	  case 3:
	   	  {
	   	  display();
	   	  break;
	   	}
	   	  case 4:
	   	  {
	   	  printf("exiting");
	   	  break;
	   	}
	   	    default:
	   	    {
	   	      printf("enter a valid choice");
	   	    }
	   	 }
	   	 }
	   	    while(choice!=4);
	   	 }	   	 
	   	 void push()
	   	 {
	   	 int x;
	   	 if(top==n-1)
	   	   printf("\nstack overflow");
	   	 else
	   	 {
	   	   printf("\nenter a number to push");
	   	   scanf("%d",&x);
	   	   top=top+1;
	   	   stack[top]=x;
	   	 }
	   	 }
	   	 void pop()
	   	  { if(top==-1)
	   	  printf("\nstack underflow");
	   	    else
	   	       top=top-1;
	   	  }
	   	 void display()
	   	   {
	   	     if (top>=0)
	   	     for(i=top;i>=0;i--)
	   	    {
	   	     printf("\n%d",stack[i]);
	   	    }
}
	   	   
	   	  
	   	  
