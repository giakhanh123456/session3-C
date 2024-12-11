#include<stdio.h>

int main(){
	int so, songhichdao;
	printf("nhap 4 so: ");
	scanf("%d", &so);
	int hangnghin = so / 1000;
    int hangtram = (so / 100) % 10;
    int hangchuc = (so / 10) % 10;
    int hangdonvi = so % 10;
    songhichdao = hangdonvi * 1000 + hangchuc * 100 + hangtram * 10 + hangnghin;
    printf(" so nghich dao cua %d la %d", so, songhichdao);
    return 0;
}
