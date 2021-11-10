// 3. Accept Character from user and check whether it is digit or not
// (0-9).
// Input : 7
// Output : TRUE
// Input : d
// Output : FALSE

#include<stdio.h>
#include<stdbool.h>

int ChkDigit(char Ch)
{
	if ((Ch >= '0')&&(Ch<='9'))
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
	
	bRet = ChkDigit(cValue);
	if (bRet == true)
	{
		printf("It is Digit");
	}
	else
	{
		printf("It is not Digit");
	}
	return 0;
}