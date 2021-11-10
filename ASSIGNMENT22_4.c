// 4. Accept Character from user and check whether it is special symbol
// or not (!, @, #, $, %, ^, &, *).
// Input : %
// Output : TRUE
// Input : d
// Output : FALSE

#include<stdio.h>
#include<stdbool.h>
int Display(char ch)
{
	if ((ch == '!')||(ch == '@')||(ch == '#')||(ch == '$')||(ch == '%')||(ch == '^')||(ch == '&')||(ch == '*'))
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
	printf("Enter character:");
	scanf("%c",&cValue);
	bRet = Display(cValue);
	if (bRet == true)
	{
		printf("It is a special Character");
	}
	else
	{
		printf("It is not a special Character");
	}

	return 0;
}