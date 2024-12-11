#include<stdio.h>

int main(){
	int number, sum;
	printf("nhap 4 chu so: ");
	scanf("%d", &number);
    int hangnghin = number / 1000;
    int hangtram = (number / 100) % 10;
    int hangchuc = (number / 10) % 10;
    int hangdonvi = number % 10;
    sum = hangnghin + hangtram + hangchuc + hangdonvi;
    printf("tong 4 chu so la: %d", sum);
	return 0;
}
