#include<stdio.h>

int main(){
	float C,F;
	printf("nhap do C: ");
	scanf("%f", &C);
	F = C * 1.8 + 32.00;
	printf("%.2f do C = %.2f do F",C,F);
	return 0;
}

