// 4. Write a program which return second maximum element from singly linear
// linked list.
// Function Prototype :
// int SecMaximum( PNODE Head);
// Input linked list : |110|->|230|->|320|->|240|
// Output : 240

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
int SecMaximum(PNODE Head)
{
	PNODE temp = Head;
	int max1 = 0;
	int max2 = 0;
	if (temp == NULL)
	{
		return -1;
	}
	while (temp != NULL)
	{
		if ((temp->Data)>max1)
		{
			max2 = max1;
			max1 = temp->Data;
		}
		else if (((temp->Data)>max2) && ((temp->Data)!=max1))
		{
			max2 = temp->Data;
		}
		temp = temp->Next;
	}
	return max2;
}

int main()
{
	PNODE First = NULL;
	int iRet = 0;
	
	InsertFirst(&First,240);
	InsertFirst(&First,320);
	InsertFirst(&First,230);
	InsertFirst(&First,110);
	
	Display(First);
	iRet = SecMaximum(First);
	printf("Second Maximum element is:%d",iRet);
	
	return 0;
}