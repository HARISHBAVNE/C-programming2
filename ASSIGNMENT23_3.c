// 3. Write a program which accept string from user and return
// difference between frequency of small characters and frequency of
// capital characters.
// Input : “MarvellouS”
// Output : 6 (8-2)

#include<stdio.h>

int CountSmall(char *arr)
{
	int i = 0,iCntS = 0,iCntC = 0;
	for (i = 0;arr[i]!='\0';i++)
	{
		if ((arr[i] >= 'a')&&(arr[i] <= 'z'))
		{
			iCntS ++;
		}
		else if ((arr[i] >= 'A')&&(arr[i] <= 'Z'))
		{
			iCntC ++;
		}
	}
	return ((iCntS)-(iCntC));
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