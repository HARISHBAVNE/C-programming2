// 1.Write a program which accept string from user and count number of
// capital characters.
// Input : “Marvellous Multi OS”
// Output : 4

#include<stdio.h>

int CountCapital(char *arr)
{
	int i = 0,iCnt = 0;
	for (i = 0;arr[i]!='\0';i++)
	{
		if ((arr[i] >= 'A')&&(arr[i] <= 'Z'))
		{
			iCnt ++;
		}
	}
	return iCnt;
}
int main()
{
	char arr[20];
	int iRet = 0;
	printf("Enter a string\n");
	scanf("%[^'\n']s",arr);
	
	iRet = CountCapital(arr);
	printf("%d",iRet);
	return 0;
}