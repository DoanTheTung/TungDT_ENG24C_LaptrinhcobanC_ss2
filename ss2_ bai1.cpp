#include<stdio.h> 

int main() {
	//Khai bao bien kieu du lieu int
	int a = 21;
	//Khai bao bien kieu du lieu float
	float b = 5.75;
	//Khai bao bien kieu du lieu double
	double c = 3.14159;
	//Khai bao bien kieu du lieu char
	char d = 'H';
	//Khai bao bien kieu du lieu  long
	long e = 1500000L;
	//Khai bao bien kieu du lieu short
	short f = 50;
	//Khai bao bien kieu du lieu unsigned int
	unsigned int g = 12;
	//Khai bao bien kieu du lieu bool
	bool h = 2;
	//In ra gia tri cac bien 
	printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %.5f\n", c);
    printf("d = %c\n", d);
    printf("e = %ld\n", e);
    printf("f = %d\n", f);
    printf("g = %u\n", g);
    printf("h = %d\n", h);
	return 0;
}
