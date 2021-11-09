#include <iostream>
#include <stdio.h>

using namespace std;


int main(void)
{

	float x = -24.231445678;
	char buffer[21];   // Enough for 20 digits plus NUL from a 64-bit uint.
	sprintf( buffer,"%f", x);
	std::cout<< buffer << std::endl;
	std::cout<< "size =" << sizeof(buffer) <<" bytes"<< std::endl;

	int len_ = snprintf( NULL, 0, "%f", x);
	char buf[len_+1];
	snprintf( buf, len_+1, "%f", x);

	std::cout<< buf << std::endl;
	std::cout<< "size =" << sizeof(buf) <<" bytes"<< std::endl;

	char hel[6] = {'h','e','l','l','o'};
	int z = 3;
	return 0;

}
