// 1. Accept Character from user and check whether it is alphabet or not
// (A-Z a-z).
// Input : F
// Output : TRUE
// Input : &
// Output : FALSE

#include<stdio.h>
#include<stdbool.h>

int ChkAlpha(char Ch)
{
	if (((Ch >= 'A') && (Ch <= 'Z'))||((Ch >= 'a') && (Ch <= 'z')))
	{
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{
	char cValue = '\0';
	int bRet = false;
	
	printf("Enter the character:");
	scanf("%c",&cValue);
	
	bRet = ChkAlpha(cValue);
	if (bRet == true)
	{
		printf("It is Character");
	}
	else
	{
		printf("It is not a character");
	}
	return 0;
}