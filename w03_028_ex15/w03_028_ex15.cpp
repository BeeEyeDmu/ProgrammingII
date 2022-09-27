#include <stdio.h>

int main()
{
	char dept[20];	// 문자의 배열
	int id;	// 학번
	char name[10];	// 문자의 배열

	printf("학과를 입력하세요 : ");
	scanf_s("%s", dept, 20);

	printf("학번을 입력하세요 : ");
	scanf_s("%d", &id);

	printf("이름을 입력하세요 : ");
	scanf_s("%s", name, 10);

	printf("학과 : %s\n", dept);
	printf("학번 : %d\n", id);
	printf("이름 : %s\n", name);

}