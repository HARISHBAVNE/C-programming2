// 2. Write a program which accept string from user and count number of
// small characters.
// Input : “Marvellous”
// Output : 9

#include<stdio.h>

int CountSmall(char *arr)
{
	int i = 0,iCnt = 0;
	for (i = 0;arr[i]!='\0';i++)
	{
		if ((arr[i] >= 'a')&&(arr[i] <= 'z'))
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
	
	iRet = CountSmall(arr);
	printf("%d",iRet);
	return 0;
}