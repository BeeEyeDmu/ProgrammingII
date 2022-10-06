// w06_079_ex33_strcat
#include <stdio.h>
#include <string.h>

int main()
{
	char s[50] = { '\0' };
	char year[2], id[10], name[10];

	printf("학년 : ");	scanf_s("%s", year, 2);
	printf("학번 : ");	scanf_s("%s", id, 10);
	printf("이름 : ");	scanf_s("%s", name, 10);

	// strcat 할 때 문자는 "\0"로 끝나야 한다
	strcat_s(s, year);
	strcat_s(s, "학년 ");
	strcat_s(s, id);
	strcat_s(s, " ");
	strcat_s(s, name);
	printf("%s\n", s);
}