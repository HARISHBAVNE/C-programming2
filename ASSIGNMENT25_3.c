// 3.Write a program which accept string from user and accept one
// character. Return index of first occurrence of that character.
// Input : “Marvellous Multi OS”
// M
// Output : 0

#include<stdio.h>


int FirstChar(char *str, char ch)
{
	int iCnt = 0;
	int flag = 0;
	while(*str != '\0')
	{
		if (*str == ch)
		{
			flag = 1;
			break;
		}
		iCnt ++;
		str ++;
	}
	if (flag == 1)
	{return iCnt;}
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
	
	iRet = FirstChar(arr,ch);
	printf("first occurrence of that character is:%d",iRet);
	
	return 0;
}