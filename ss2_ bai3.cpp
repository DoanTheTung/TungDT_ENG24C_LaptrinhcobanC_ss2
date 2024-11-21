#include<stdio.h> 

int main() {
	//Khai hai bien so nguyen
	int a = 3;
	int b = 5;
	//Khai bao bien nho ket qua
	int hieu , tich , thuong; 
	//tinh hieu hai so nguyen
	hieu = a - b;
	//tinh tich hai so nguyen
	tich = a * b;
	//tinh thuong hai so nguyen
	thuong = a / b; 
	//In ra ket qua
	printf("hieu cua %d và %d là %d\n", a , b , hieu);
	printf("tich cua %d và %d là %d\n", a , b , tich);
	printf("thuong cua %d và %d là %d\n", a , b , thuong);
	return 0;
}
