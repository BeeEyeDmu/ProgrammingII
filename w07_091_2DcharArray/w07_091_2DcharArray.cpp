// 2차원 문자배열
// 예: 10명의 이름을 저장하는 배열
#include <stdio.h>

int main()
{
	char s[10] = "hello";

	printf("%s\n", s);

	char str[4][10]
		= { "hello", "world", "doodle", "google" };

	for (int i = 0; i < 4; i++)
		printf("%s\n", str[i]);

	// 4명의 이름을 읽고, name 배열에 저장하시오
	// 이름은 20자 이내임
	char name[4][20];

	for (int i = 0; i < 4; i++) {
		scanf_s("%s", name[i], 20);
	}
	for (int i = 0; i < 4; i++) {
		printf("%s\n", name[i]);
	}

	char dept[20];

	scanf_s("%s", dept, sizeof(dept));
	printf("%s\n", dept);

}