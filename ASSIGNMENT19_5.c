

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
	// if ((Arr == NULL)||(iLength < 0))
	// {
		// return 1;
	// }
	int i = 0,iMult = 1,iCnt = 0;
	for (i = 0;i < iLength;i++)
	{
		if (Arr[i]%2!=0)
		{
			if (Arr[i] == 0)
			{
				iMult = iMult * 1;
			}
			else
			{
				iMult = iMult * Arr[i];
			}
		}
		else
		{
			iCnt ++;
		}
	}
	if (i == iCnt)
	{
		return 1;
	}
	else
	{
		return iMult;
	}
}


int main()
{
	int *p = NULL;
	int iSize = 0,iCnt = 0,iRet = 0;
	
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
	iRet = Product(p,iSize);
	if (iRet == 1)
	{
		printf("there is no odd numbers");
		return 0;
	}
	printf("Product is: %d",iRet);
	
	free(p);
	return 0;
}