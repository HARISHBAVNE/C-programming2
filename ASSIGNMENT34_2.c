// 2. Write a program which displays all elements which are prime from singly
// linear linked list.
// Function Prototype :
// int DisplayPrime( PNODE Head);
// Input linked list : |11|->|20|->|17|->|41|->|22|->|89|
// Output : 11 17 41 89

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
	struct node * Next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int No)
{
	PNODE newn = NULL;
	newn = (PNODE)(malloc(sizeof(NODE)));
	newn->Data = No;
	newn->Next = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->Next = *Head;
		*Head = newn;
	}
}
void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("|%d|->",Head->Data);
		Head = Head->Next;
	}
	printf("NULL\n");
}
void DisplayPrime(PNODE Head)
{
	while(Head != NULL)
	{
		int i=0;
		int Prime = 0;
		for (i = 2;i<=(Head->Data)/2;i++)
		{
			if ((Head->Data)%i == 0)
			{
				Prime = 1;
				break;
			}
		}
		if (Prime==0)
		{
			printf("%d ",Head->Data);
		}
		Head = Head->Next;
	}	
	
}

int main()
{
	PNODE First = NULL;
	InsertFirst(&First,89);
	InsertFirst(&First,6);
	InsertFirst(&First,41);
	InsertFirst(&First,17);
	InsertFirst(&First,28);
	InsertFirst(&First,11);
	
	Display(First);
	DisplayPrime(First);
	
	return 0;
}