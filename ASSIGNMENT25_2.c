// 2.Write a program which accept string from user and accept one
// character. Return frequency of that character.
// Input : “Marvellous Multi OS”
// M
// Output : 2
// Input : “Marvellous Multi OS”
// W
// Output : 0

#include<stdio.h>


int CountChar(char *str, char ch)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if (*str == ch)
		{
			iCnt ++;
		}
		str ++;
	}
	return iCnt;
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
	
	iRet = CountChar(arr,ch);
	printf("frequency of that character is:%d",iRet);
	
	return 0;
}