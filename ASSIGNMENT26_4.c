// 4. Write a program which accept string from user and copy small
// characters of that string into another string.
// Input : “Marvellous multi OS”
// Output : “arvellous multi”
#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
	if ((src == NULL)&&(dest == NULL))
	{
		return;
	}
	while(*src != '\0')
	{
		if ((*src >= 'a') && (*src <= 'z'))
		{
			*dest = *src;
			*dest ++;
		}
		*src ++;
		
	}
	*dest = '\0';
}

int main()
{
	char arr[20];
	char brr[20];
	
	printf("Enter a string\n");
	scanf("%[^'\n']s",arr);
	
	StrCpySmall(arr,brr);
	printf("Small letter string is:%s",brr);
	return 0;
}