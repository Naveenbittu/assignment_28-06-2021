#include <stdio.h>

#define SET(PIN,N) (PIN |=  (1<<N))
#define CLR(PIN,N) (PIN &= ~(1<<N))

int main(){

	unsigned char val = 0x11;
	unsigned char bit = 2;

	printf("val = %X\n",val);

	//set  bit 2 of val
	SET(val,bit);
	printf("Aftre setting  bit %d, val = %X\n", bit, val);

	//clear bit 2 of val
	CLR(val,bit);
	printf("Aftre clearing bit %d, val = %X\n", bit, val);

	return 0;
}
#if 0
    val = 11
Aftre setting  bit 2, val = 15
Aftre clearing bit 2, val = 11
#endif
