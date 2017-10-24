#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* link;
}*head,*prev,*temp,*ptr;


main(){
	int n,x,i,j,pos=0;
	printf("Enter no of elements: ");
	scanf("%d",&n);
	
	head=NULL;
	prev=NULL;
	temp=NULL;
	
	/*Creation of LLL*/
	printf("Enter %d elements:\n",n);
	for(i=1;i<=n;i++){
		temp=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&x);
		temp->data=x;
		temp->link=NULL;
		if(head==NULL){
			prev=temp;
			head=temp;
		}
		else{
			prev->link=temp;
			prev=temp;
		}
	}
	
	/*Printing LLL*/
	printf("Entered list is:\n");
	temp=head;
	while(temp!=NULL)
	{
		printf("%d  ",temp->data);
		temp=temp->link;
	}
	
	/*Insert node at first position*/
	printf("\nEnter node data: ");
	scanf("%d",&x);
	
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->link=head;
	head=temp;
	
	printf("List is now:\n");
	temp=head;
	while(temp!=NULL)
	{
		printf("%d  ",temp->data);
		temp=temp->link;
	}
	
	/*Insert node at end*/
	printf("\nEnter node data: ");
	scanf("%d",&x);
	
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->link=NULL;
	
	ptr=head;
	for(i=0;i<n;i++)
	ptr=ptr->link;
	
	ptr->link=temp;
	
	printf("List is now:\n");
	temp=head;
	while(temp!=NULL)
	{
		printf("%d  ",temp->data);
		temp=temp->link;
	}
	
	/*Insert node at ith position*/
	printf("\nEnter node data and position: ");
	scanf("%d%d",&x,&i);
	
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->link=NULL;
	
	if(i==1){
		temp->link=head;
		head=temp;
	}
	else{
	ptr=head;
	for(j=0;j<i-2;j++){
		ptr=ptr->link;
	}
	temp->link=ptr->link;
	ptr->link=temp;
	}	
	printf("List is now:\n");
	temp=head;
	while(temp!=NULL)
	{
		printf("%d  ",temp->data);
		temp=temp->link;
	}

/*Delete ith node*/
printf("Enter position to be deleted: ");
scanf("%d",&i);
temp=head;

if(i==1){
	head=temp->link;
	free(temp);
}
else{
	for(j=0;j<i-2;j++)
	{
		temp=temp->link;
		}	
		ptr=temp->link;
		temp->link=ptr->link;
		free(ptr);
		}
	
	printf("List is now:\n");
	temp=head;
	while(temp!=NULL)
	{
		printf("%d  ",temp->data);
		temp=temp->link;
	}

	
/*Reverse a LLL*/
 struct node *next;
 prev=NULL;
 temp=head;
 
 while(temp!=NULL){
 	next=temp->link;
 	temp->link=prev;
 	prev=temp;
 	temp=next;
 }
 head=prev;
 	printf("\nReversed List is :\n");
	temp=head;
	while(temp!=NULL)
	{
		printf("%d  ",temp->data);
		temp=temp->link;
	}
 
}

