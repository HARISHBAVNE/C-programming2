// 5. Write a program which display addition of digits of element from singly
// linear linked list.
// Function Prototype :int SumDigit( PNODE Head);
// Input linked list : |110|->|230|->|20|->|240|->|640|
// Output : 2 5 2 6 10

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
void SumDigit(PNODE Head)
{
	
	while(Head !=NULL)
	{
		int Sum = 0;
		int iDigit = 0;
		while(Head->Data != 0)
		{
			iDigit = Head->Data % 10;
			Sum = Sum+iDigit;
			Head->Data = Head->Data / 10;
		}
		printf("%d  ",Sum);
		Head = Head->Next;
	}
		
}

int main()
{
	PNODE First = NULL;
	int iRet = 0;
	InsertFirst(&First,640);
	InsertFirst(&First,240);
	InsertFirst(&First,20);
	InsertFirst(&First,230);
	InsertFirst(&First,110);
	
	Display(First);
	SumDigit(First);
	
	return 0;
}