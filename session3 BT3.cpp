#include<stdio.h>

int main(){
	const float PI = 3.14;
	float R,C,S;
	printf("nhap ban kinh: ");
	scanf("%f", &R);
	C = 2 * PI * R;
	S = PI * R * R;
    printf("chu vi hinh tron la %.2f\n", C);
    printf("dien tich hinh tron la %.2f\n", S);
    return 0;
}
