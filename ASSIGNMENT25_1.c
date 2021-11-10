// 1.Write a program which accept string from user and accept one
// character. Check whether that character is present in string or not.
// Input : “Marvellous Multi OS”
// e
// Output : TRUE

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str, char ch)
{
	int flag = 0;
	while(*str != '\0')
	{
		if (*str == ch)
		{
			flag = 1;
			break;
		}
		str ++;
	}
	if (flag == 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	char arr[20];
	char ch;
	int iRet = false;
	printf("Enter a string\n");
	scanf("%[^'\n']s",arr);
	
	printf("Enter a character\n");
	scanf(" %c",&ch);
	
	iRet = ChkChar(arr,ch);
	if (iRet == true)
	{
		printf("Present\n");
	}
	else
	{
		printf("Not present\n");
	}
	
	
	return 0;
}