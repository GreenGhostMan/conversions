#include <stdio.h>
#include <string.h>

int main()
{
	signed long l1 = 2147483647;
	//signed long l1_overflow = 99999999999;
	signed long l1_overflow = 100000000000;
	long long l2 = 32767;

	char str[20+sizeof(char)];
	char str2[10+sizeof(char)];

	sprintf(str, "%ld", l1);
	printf("l1 string is %s \n", str);

	sprintf(str2, "%ld", l1_overflow);
	printf("l1_overflow string is %s \n", str2);

	printf("l1_overflow d is %ld \n", l1_overflow);



	return 0;
}

