#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	unsigned int arr[]={109,53,48,114,109,53,48,108};

	char char_arr[8];

	//memcpy(char_arr, arr, 64);

	char new_char[8];
	for(int i=0; i<8;i++)
	{
		new_char[i] = (char) arr[i];
	}
	int b =0;

	return 0;
}


