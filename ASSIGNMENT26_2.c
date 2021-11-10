// 2. Write a program which accept string from user and copy the
// contents of that string into another string. (Implement strncpy()
// function)
// Input : “Marvellous Multi OS”
// 10
// Output : “Marvellous
// Note : If third parameter is greater than the size of source string then
// copy whole string into destination.
#include<stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
	if ((src == NULL)&&(dest == NULL))
	{
		return;
	}
	while((*src != '\0')&&(iCnt != 0))
	{
		*dest = *src;
		src ++;
		dest++;
		iCnt --;
	}
	*dest = '\0';
}

int main()
{
	char arr[20];
	char brr[20];
	int No = 0;
	printf("Enter a string\n");
	scanf("%[^'\n']s",arr);
	printf("Enter a number\n");
	scanf("%d",&No);
	StrNCpyX(arr,brr,No);
	printf("Copied string is:%s",brr);
	return 0;
}