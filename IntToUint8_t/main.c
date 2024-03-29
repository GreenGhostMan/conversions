#include <stdio.h>
#include <stdlib.h>

typedef unsigned char uint8_t;

int main()
{
	int a = -356000000; int b = 998;

	int len = snprintf( NULL, 0, "%d", a);
	printf("%d, %d\n", a, len);
	char* a_str = (char*)malloc( len+1 );
	snprintf( a_str, len+1, "%d", a);

	printf("1) %s\n", a_str);

	unsigned char * p = (unsigned char *)a_str;
	printf("2) %s\n", p);

	uint8_t * p2 = (uint8_t *)a_str;
	printf("3) %s\n", p2);

	return 0;
}

