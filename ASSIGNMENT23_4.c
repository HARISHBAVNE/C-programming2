// 4. Write a program which accept string from user and check whether
// it contains vowels in it or not.
// Input : “marvellous”
// Output : TRUE
// Input : “Demo”
// Output : TRUE
// Input : “xyz”
// Output : FALSE

#include<stdio.h>
#include<stdbool.h>

int ChkVowel(char *arr)
{
	int i = 0,flag = 0;
	for (i = 0;arr[i] != '\0';i++)
	{
		if (((arr[i]=='a')||(arr[i]=='A'))||((arr[i]=='E')||(arr[i]=='e'))||((arr[i]=='I')||(arr[i]=='i'))||((arr[i]=='O')||(arr[i]=='o'))||((arr[i]=='U')||(arr[i]=='u')))
		{
			flag = 1;
			break;
		}
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
	int bRet = false;
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
	
	bRet = ChkVowel(arr);
	if (bRet == true)
	{
		printf("Contains Vowel");
	}
	else
	{
		printf("There is no Vowel");
	}
	return 0;
}