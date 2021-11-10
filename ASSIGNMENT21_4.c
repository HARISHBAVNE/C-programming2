// 4. Accept Character from user and check whether it is small case or
// not (a-z).
// Input : g
// Output : TRUE
// Input : D
// Output : FALSE

#include<stdio.h>
#include<stdbool.h>

int ChkSmall(char Ch)
{
	if ((Ch >= 'a')&&(Ch<='z'))
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
	
	bRet = ChkSmall(cValue);
	if (bRet == true)
	{
		printf("It is Small Case Character");
	}
	else
	{
		printf("It is not Small Case Character");
	}
	return 0;
}