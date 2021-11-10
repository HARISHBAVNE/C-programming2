//Q3. Accept N numbers from user check whether that numbers contains 11 in
// it or not.
// Input : N : 6
// Elements : 85 66 11 80 93 88
// Output : 11 is present
// Input : N : 6
// Elements : 85 66 3 80 93 88
// Output : 11 is absent
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Chk(int Arr[], int iLength)
{
	if((iLength <= 0)||(Arr == NULL))
	{
		return 1;
	}
	int i = 0;
	int EvenCount = 0,OddCount = 0;
	for (i = 0;i < iLength; i++)
	{
		if (Arr[i]==11)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

int main()
{
	int *p = NULL;
	int iSize = 0,iCnt = 0,iRet = true;
	
	printf("Enter the number of Elements");
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
		printf("Element %d:",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	iRet = Chk(p,iSize);
	if (iRet == true)
	{
		printf("11 is present");
	}
	else
	{
		printf("11 is absent");
	}
	free(p);
	return 0;
}