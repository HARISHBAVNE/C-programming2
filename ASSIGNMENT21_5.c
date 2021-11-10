// 5. Accept division of student from user and depends on the division
// display exam timing. There are 4 divisions in school as A,B,C,D. Exam
// of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
// (Application should be case insensitive)
// Input : C
// Output : Your exam at 9.20 AM
// Input : d
// Output : Your exam at 10.30 AM

#include<stdio.h>
#include<stdbool.h>

void DisplaySchedule(char ChDiv)
{
	if ((ChDiv == 'a')||(ChDiv =='A'))
	{
		printf("Your Exam at 7 AM\n");
	}
	else if ((ChDiv == 'b')||(ChDiv =='B'))
	{
		printf("Your Exam at 8.30 AM\n");
	}
	else if ((ChDiv == 'c')||(ChDiv =='C'))
	{
		printf("Your Exam at 9.20 AM\n");
	}
	else if ((ChDiv == 'd')||(ChDiv =='D'))
	{
		printf("Your Exam at 10.30 AM\n");
	}	
}

int main()
{
	char cValue = '\0';
	
	printf("Enter the character:");
	scanf("%c",&cValue);
	
	DisplaySchedule(cValue);
	return 0;
}