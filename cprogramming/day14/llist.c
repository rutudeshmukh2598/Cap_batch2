#include <stdio.h>
	#include<stdlib.h>
	
	typedef struct llist
	{
		int val;
		struct llist *prev;
		struct llist *next;
	} LList;
	
	
	void dispListF(LList *);
	void dispListB(LList *);
	
	LList *insert_end(LList*, LList*);
	//void sortList(LList *);
	
	
	
	int main()
	{
		LList *newNode=NULL, *head=NULL, *temp=NULL;
	
		int ch=1, value;
		
	
		while(ch)
		{
			
			temp = insert_end(head,temp);
			if(head == NULL)
				head = temp;
	
			printf("\nDo You want to add new node? (1/0): ");
			scanf("%d",&ch);
	
	
	
		}
		temp = head;
		dispListF(temp);
		
		
		
		
		printf("\n\n");
		return 0;
	}
	
	void dispListF(LList *head)
	{
		printf("\n=====List in forward direction=====\n");
		while(head != NULL)
		{
			printf("%d->",head->val);
			head = head->next;
		}
		printf("\n\n");
	}
	
	
	LList *insert_end(LList *head, LList *last)
	{
			LList *newNode;
			int value;
	
			printf("\nEnter the value of the new node: ");
			scanf("%d",&value);
	
			newNode = (LList *)malloc(sizeof(LList));
			if(newNode == NULL)
			{
				printf("\nUnable to allocate Memory\n");
				exit(EXIT_FAILURE);
			}
	
			newNode->val = value;
			newNode->next = NULL;
			newNode->prev = NULL;
	
			
			
			if(head == NULL)
			{
				//when the list is empty/new list
	
				head = newNode;
				last = newNode;
				
			}
			else
			{
				last->next = newNode;
				newNode->prev = last;
				last = last->next;
				
			}
		return last;
	}
	
	/*
	void sortList(LList *head)
	{
	
		LList *temp = NULL;
		int tempVal=0;
		while(head->next != NULL)
		{
			temp = head->next;
			while(temp != NULL){
				if(head->val > temp->val)
				{
					tempVal = head->val;
					head->val = temp->val;
					temp->val = tempVal;
	
				}
				temp = temp->next;	
			}
	
			head = head->next;
	
		}
	}
	*/
