#include <stdio.h>
#include <string.h>

int main()
{
	char s1[7] = "sample";
	char s2[] = "simple";

	if (strcmp(s1, s2) < 0)
		printf("%s < %s\n", s1, s2);
	else if(strcmp(s1, s2) == 0)
		printf("%s = %s\n", s1, s2);
	else
		printf("%s > %s\n", s1, s2);
}