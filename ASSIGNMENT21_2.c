// 2. Accept Character from user and check whether it is capital or not
// (A-Z).
// Input : F
// Output : TRUE
// Input : d
// Output : FALSE

#include<stdio.h>
#include<stdbool.h>

int ChkCapital(char Ch)
{
	if ((Ch >= 'A')&&(Ch<='Z'))
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
	
	bRet = ChkCapital(cValue);
	if (bRet == true)
	{
		printf("It is Capital Character");
	}
	else
	{
		printf("It is not a Capital character");
	}
	return 0;
}