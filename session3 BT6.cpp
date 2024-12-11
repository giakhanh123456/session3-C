#include<stdio.h>

int main(){
	float canh, chieucao, S;
	printf("nhap canh: ");
	scanf("%f", &canh);
	printf("nhap chieucao: ");
	scanf("%f", &chieucao);
	S = (canh * chieucao) / 2;
	printf("dien tich tam giac = %.2f", S);
    return 0;
}

