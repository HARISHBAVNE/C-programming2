//Q3. Accept N numbers from user and display all such elements which are
// even and divisible by 5.
// Input : N : 6
// Elements : 85 66 3 80 93 88
// Output : 80

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
	int i = 0;
	if ((Arr == NULL)||(iLength < 0))
	{
		return ;
	}
	for (i = 0;i < iLength;i++)
	{
		if ((Arr[i]%2)==0)
		{
			if ((Arr[i]%5)==0)
			{
				printf("%d ",Arr[i]);
			}
		}
	}
}

int main()
{
	int *p = NULL;
	int iCnt = 0,iSize = 0; 
	
	printf("Enter the number of Elements:");
	scanf("%d",&iSize);
	
	p = (int *)(malloc(iSize * sizeof(int)));
	printf("Enter %d Elements\n",iSize);
	
	if (p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	for (iCnt = 0;iCnt < iSize;iCnt++)
	{
		printf("Enter element %d:",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	Display(p,iSize);
	free(p);
	return 0;
}