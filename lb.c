
#include <stdio.h>
 
int main() 
{
	int a = 0X12345678;
	char* b =(char*)&a;
 
	if (*b == 0x78)
		printf("小端机");
	else
		printf("大端机");
	printf("\n");
 
	return 0;

}
