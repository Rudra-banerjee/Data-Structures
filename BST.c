#include<stdio.h>
struct node{
int data;
struct node* left;
struct node* right;
}

main(){
struct node* rootptr;
rootptr= NULL;
Insert(15,rootptr);
Insert(20,rootptr);
Insert(10,rootptr);
Insert(8,rootptr);
Insert(13,rootptr);
Insert(17,rootptr);
Insert(25,rootptr);
}

struct node* GetNewNode(int data)
{
struct node* newNode= (struct node*)malloc(sizeof(struct node));
newNode->data=data;
newNode->left=newNode->right=NULL;
return newNode;
}

void Insert(int data, struct node* rootptr)
{
if(rootptr==NULL)
rootptr=GetNewNode(data);
else if(data<=rootptr->data)
rootptr->left=Insert(data,rootptr->left);
else
rootptr->right=Insert(data,rootptr->right);
return rootptr;
}
