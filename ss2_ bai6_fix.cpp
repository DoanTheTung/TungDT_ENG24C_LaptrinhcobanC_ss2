#include<stdio.h> 

int main() {
	//Khai bao bien pi và bá kính hình tròn 
	float a = 3.0; 
	const float PI = 3.14; 
	//Khai bao bien nho ket qua
	float chuvi , dientich; 
	//tinh chuvi cua hinh tron 
	chuvi = 2 * PI * a;
	//tinh dientich cua hinh tron 
	dientich = PI * a * a; 
	//In ra ket qua
	printf("chuvi  hinh tron la %f\n", chuvi);
	printf("dientich hinh tron là %f\n", dientich);
	
	return 0;
}
