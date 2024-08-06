#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
void createsll(void);
void insertfirstsll(void);
void insertlastsll(void);
void insertgivenpsll(void);
void insertgivenvaluesll(void);
void deletefirstsll(void);
void deletegivenpsll(void);
void deletelastsll(void);
void displaysll(void);
void reversesll();

struct sll
{
	int info;
	struct sll *next;
}*start;

typedef struct sll node;
int item;

void main()
{
	int ch;
	printf("\n\nPress 1: To create the SLL.");
	printf("\nPress 2: To insert at first in the SLL.");
	printf("\nPress 3: To insert at last in the SLL.");
	printf("\nPress 4: To insert after a given position in the SLL.");
	printf("\nPress 5: To insert after the given value in the SLL.");
	printf("\nPress 6: To delete at fisrt position in the SLL.");
	printf("\nPress 7: To delete at last position in the SLL.");
	printf("\nPress 8: To delete after a given position in the SLL.");
	printf("\nPress 9: To delete after a given value in the SLL.");
	printf("\nPress 10: To display all the values in the SLL.");
	printf("\nPress 11: To reverse the SLL.");
	printf("\nPress 12: To exit from the menu.");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	
	while(ch!=0)
	{
		switch(ch)
		{
			case 1: createsll(); break;
			case 2: insertfirstsll(); break;
			case 3: insertlastsll();break;
			case 4: insertgivenpsll();break;
			case 5: insertgivenvaluesll();break;
			case 6: deletefirstsll();break;
			case 7: deletelastsll();break;
			case 8: deletegivenpsll(); break;
		/*	case 9: deletegivenvalsll();break;*/
			case 10: displaysll();break;
			case 11: reversesll();break;
			case 12: exit(0);
			default: printf("\n!!!! Wrong Choince Entered!!!!"); 
		};
		main();
		
	}
	
}


void createsll()
{
	node *create;
	printf("\nEnter new node value:");
	scanf("%d",&item);
	create=(node*)malloc(sizeof(node));
	if(create==NULL)
	{
		printf("Memory not available!!!");
	}
	else
	{
		create->info=item;
		create->next=NULL;
		start=create;
		printf("\nList is created successfully...");
		
	}
}


void insertfirstsll()
{
	node *first;
	printf("\nEnter new node value:");
	scanf("%d",&item);
	first=(node*)malloc(sizeof(node));
	if(first==NULL)
	{
		printf("Memory not available!!!");
	}
	else
	{
		first->info=item;
		first->next=NULL;
    }
   	if(start==NULL)
   	{
   		start=first;
		printf("\nList is created inserted of insertion...");
	}
	else
	{
		first->next=start;
		start=first;
	}
	}
	
	
		
	void insertlastsll()
	{
	node *last,*temp;
	printf("\nEnter new node value:");
	scanf("%d",&item);
	last=(node*)malloc(sizeof(node));
	if(last==NULL)
	{
		printf("Memory not available!!!");
	}
	else
	{
		last->info=item;
		last->next=NULL;
    }
   	if(start==NULL)
   	{
   		start=last;
		printf("\nList is created inserted of insertion...");
	}
	else
	{
		temp=start;
		while(temp->next!=NULL)
		{
		temp=temp->next;
	}
		temp->next=last;
		printf("\n%d Node is inserted at last position succesfully..",last->info);	
		}
		
	}
	
	
	void insertgivenpsll()
	{
	node *givenp,*temp,*prev;
	int pos;
	printf("\nEnter new node value:");
	scanf("%d",&item);
	printf("\nEnter the position after which you want to insert the node:");
	scanf("%d",&pos);
	givenp=(node*)malloc(sizeof(node));
	if(givenp==NULL)
	{
		printf("Memory not available!!!");
	}
	else
	{
		givenp->info=item;
		givenp->next=NULL;
    }
   	if(start==NULL)
   	{
   		start=givenp;
		printf("\nList is created inserted of insertion...");
	}
	else
	{ 
	int c=0;
		temp=start;
		while(c!=pos)
		{
		prev=temp;
		temp=temp->next;
		c++;
	}
	    prev->next=givenp;
		givenp->next=temp;
		printf("\n%d Node is inserted after given position succesfully..",givenp->info);	
		}
	}
	
	
void insertgivenvaluesll()
	{
	node *givenv,*temp,*prev;
	int value;
	printf("\nEnter new node value:");
	scanf("%d",&item);
	printf("\nEnter the node value after which you want to insert the node:");
	scanf("%d",&value);
	givenv=(node*)malloc(sizeof(node));
	if(givenv==NULL)
	{
		printf("Memory not available!!!");
	}
	else
	{
		givenv->info=item;
		givenv->next=NULL;
    }
   	if(start==NULL)
   	{
   		start=givenv;
		printf("\nList is created inserted of insertion...");
	}
	else
	{ 
		temp=start;
		while(temp->info!=value)
		{
		prev=temp;
		temp=temp->next;
	}
	    prev->next=givenv;
		givenv->next=temp;
		printf("\n%d Node is inserted after given position succesfully..",givenv->info);	
		}
	}	
	
void deletefirstsll()
{
	node *temp;
	if(start==NULL)
	{
		printf("!!! List is Empty you cannot delete any node !!!");
	}
	else
	{
		temp=start;
		start=start->next;
		printf("\n %d is deleted from the single linked list.");
		free(temp);
	}
}	
	
void deletelastsll()
{
	node *temp,*prev;
	if(start==NULL)
	{
		printf("\n !!!List is Empty, Deletion cannot be done. !!!");
	}
	else
	{
		temp=start;
		while(temp->next!=NULL)
		{
			prev=temp;
			temp=temp->next;
		}
		prev->next=NULL;
		printf("\n%d is deleted from the Single Linked List.", temp->info);
		free(temp);
	}
}


void deletegivenpsll()
{
	node *temp,*prev;
	int pos;
	printf("\n Enter the position after which you want to delete the node:");
	scanf("%d",&pos);
	if(start==NULL)
	{
		printf("\n !!! List is empty, deletion cannot be done. !!!");
	}
	else
	{ int c=0;
		temp=start;
		while(c!=pos)
		{
			prev=temp;
			temp=temp->next;
			c++;
		}
		prev->next=temp->next;
		printf("%d is deleted from the given position.",temp->info);
		free(temp);
	}
}



void deletegivenvaluesll()
{
	node *temp,*prev;
	int value;
	printf("\n Enter the node value after which you want to delete the element:");
	scanf("%d",&value);
	if(start==NULL)
	{
		printf("\n !!! List is empty, deletion cannot be done. !!!");
	}
	else
	{
		temp=start;
		while(temp->info!=value)
		{
			prev=temp;
			temp=temp->next;
			
		}
		prev->next=temp->next;
		printf("%d is deleted from the given position.",temp->info);
		free(temp);
	}
}


void reversesll()
{
	node *temp;
	int *rev,i=0;
	rev=(int*)malloc(sizeof(int));
	
	temp=start;
	while(temp!=NULL)
	{
		*(rev+i)=temp->info;
		temp=temp->next;
		i++;
	}
	
	printf("\n The reversed linked list is:");
	for(int k=i-1;k>=0;k--)
	{
		printf("%d==>",rev[k]);
	}
}

void displaysll()
{
	
	node *temp;
	if(start==NULL)
	{
		printf("!!! List is empty can't print any value !!!'");
	}
	else
	{
	printf("\n Single list values are as follows:\n");
	temp=start;
	while(temp!=NULL)
	{
	 printf("%d==>",temp->info);
	 temp=temp->next;	
	}
	}
}