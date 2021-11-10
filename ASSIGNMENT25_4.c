// 4.Write a program which accept string from user and accept one
// character. Return index of last occurrence of that character.
// Input : “Marvellous Multi OS”
// M
// Output : 11
// Input : “Marvellous Multi OS”
// W
// Output : -1

#include<stdio.h>

int LastChar(char *str, char ch)
{
	int iCnt = 0,i = 0;
	int flag = 0;

	while(*str != '\0')
	{
		if (ch == *str)
		{
			i = iCnt;
		}
		str++;
		iCnt++;
	}
	if (i != 0)
	{
		return i;
	}
	else
	{
		return -1;
	}
}

int main()
{
	char arr[20];
	char ch;
	int iRet = 0;
	printf("Enter a string\n");
	scanf("%[^'\n']s",arr);
	
	printf("Enter a character\n");
	scanf(" %c",&ch);
	
	iRet = LastChar(arr,ch);
	printf("Last occurrence of that character is:%d",iRet);
	return 0;
}