// 5. Write a program which accept 2 strings from user and concat second string
// after first string. (Implement strcat() function).
// Input : “Marvellous Infosystems”
// “Logic Building”
// Output : “Marvellous Infosystems Logic Building”
#include<stdio.h>

void StrCat(char *src, char *dest)
{
	if ((src == NULL)&&(dest == NULL))
	{
		return;
	}
	while(*src != '\0')
	{
		src ++;
	}
	while(*dest != '\0')
	{
		*src = *dest;
		dest ++;
		src ++;
	}
	*src = '\0';
}

int main()
{
	char arr[50];
	char brr[30];
	
	printf("Enter a First string\n");
	scanf("%[^'\n']s",arr);
	
	printf("Enter a second string\n");
	scanf(" %[^'\n']s",brr);
	
	StrCat(arr,brr);
	printf("Modified string is:%s",arr);
	return 0;
}