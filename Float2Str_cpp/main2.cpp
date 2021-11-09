#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;


float lin_x = -9.09756;
float ang_z = 3.141567;

int main(void)
{
    std::string to_mcu;
    int linX_len = snprintf( NULL, 0, "%f", lin_x);
    char* linX = (char*)malloc( linX_len+1 );
    snprintf( linX, linX_len+1, "%f", lin_x);

    int angZ_len = snprintf( NULL, 0, "%f", ang_z);
    char* angZ = (char*)malloc( angZ_len+1 );
    snprintf( angZ, angZ_len+1, "%f", ang_z);

    strcat(linX," ");   strcat(linX,angZ);

    to_mcu = linX; 
    free(linX); free(angZ);

    int end = 9;

	return 0;

}