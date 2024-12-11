#include<stdio.h>

int main(){
	float T,V,A,sum,avg;
	printf("nhap diem toan: ");
	scanf("%f", &T);
	printf("nhap diem van: ");
	scanf("%f", &V);
	printf("nhap diem anh: ");
	scanf("%f", &A);
	sum = T + V +A;
	avg = sum / 3;
	printf("tong diem la %.2f\n", sum);
	printf("diem trung binh la %.2f\n", avg);
	return 0;
}
