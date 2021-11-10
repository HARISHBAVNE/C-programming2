// 3. Accept N numbers from user and accept one another number as NO ,
// return index of last occurrence of that NO.
// Input : N : 6
// NO: 66
// Elements : 85 66 3 66 93 88
// Output : 3
// Input : N : 6
// NO: 93
// Elements : 85 66 3 66 93 88
// Output : 4
#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[],int iLength,int iNo)
{
	if ((Arr == NULL)||(iLength < 0))
	{
		return 1;
	}
	int i = 0;
	for (i = iLength-1;i >=0;i--)
	{
		if (Arr[i] == iNo)
		{
			break;
		}
	}
	return i;
}

int main()
{
	int *p = NULL;
	int iSize = 0,iCnt = 0,iNo = 0,iRet = 0;
	
	printf("Enter the Number of Elements:\n");
	scanf("%d",&iSize);
	
	
	p = (int *)(malloc(iSize * sizeof(int)));
	printf("Enter %d Element\n",iSize);
	if (p == NULL)
	{
		printf("Unable to alocate memory\n");
		return -1;
	}
	for (iCnt = 0;iCnt < iSize;iCnt++)
	{
		printf("Enter element %d:",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	printf("Enter the Number:\n");
	scanf("%d",&iNo);
	
	iRet = LastOcc(p,iSize,iNo);
	if (iRet == -1)
	{
		printf("There is no such number");
	}
	else
	{
		printf("Last occurrence of number is %d",iRet);
	}
	free(p);
	return 0;
}