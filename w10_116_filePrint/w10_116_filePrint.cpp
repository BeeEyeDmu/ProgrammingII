// check output at beginning
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE *in;
	in = fopen("w10_116_filePrint.cpp", "r");
	if (in == NULL) {
		printf("입력파일 못찾음");
		return 0;
	}
	char ch;
	//while (fscanf(in, "%c", &ch) != EOF) {
	//	printf("%c", ch);
	//}

	// 화면에서 읽을 때
	//while ((ch = getchar()) != EOF)
	//	putchar(ch);

	// 파일에서 읽어서 화면에 쓸 때
	//while ((ch = fgetc(in)) != EOF)
	//	putchar(ch);

	// 파일에서 읽어서 파일에 쓸 때
	FILE *out;
	out = fopen("output.txt", "w");

	while ((ch = fgetc(in)) != EOF)
		fputc(ch, out);

	fclose(in);
	fclose(out);

}