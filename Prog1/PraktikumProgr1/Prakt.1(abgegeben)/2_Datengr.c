#include <stdio.h>

#define SIZE(datatype) printf("Size of " #datatype ": %zu Byte\n", sizeof(datatype))

int main(void){

	printf("___________________________\nSize of unsigned values: \n");
	SIZE(unsigned char);
	SIZE(unsigned short);
	SIZE(unsigned int);
	SIZE(unsigned long);

	printf("\n\n___________________________\nSize of signed values: \n");
	SIZE(signed char);
	SIZE(signed short);
	SIZE(signed int);
	SIZE(signed long);

	printf("\n\n____________________________\nSize of double: -always signed- \n");
	SIZE(double);
	SIZE(long double);


	return 0;
}

