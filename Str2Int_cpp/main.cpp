#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

int main(void)
{
	
	std::string rpm="320";
	std::string desire="-90";

	
	int f1 = stoi(rpm);

	
	int f2 = stoi(desire, NULL);

	printf("%d\n%d\n", f1, f2);

	return 0;
}


