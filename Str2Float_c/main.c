#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// char array to be parsed
	char arr[] = "-365.25 -7.9";

	// character end pointer
	char* pend;

	// f1 var to store float variable
	float f1 = strtof(arr, &pend);

	// f2 var to store float variable
	float f2 = strtof(pend, NULL);

	printf("%.2f\n%.2f\n", f1, f2);

	return 0;
}


