#include <stdio.h>
void bai1(){
	//tinh tong so chan tu a-> b
	int a, b;
	printf("Moi nhap a= ");
	scanf("%d", &a);
	printf("Moi nhap b= ");
	scanf("%d", &b);
	int sum=0;
	for(int i=a; i<=b; i++){
		if(i % 2 == 0){
			sum += i;
		}
	}
	printf("Tong = %d\n", sum);
}
void bai2(int n){
	int giaiThua=1;
	for( int i=1; i<=n; i++){
		giaiThua *= i;
	}
	printf("Giai thua= %d\n", giaiThua);
}
float bai3(){
	float luong;
	float gio, bacLuong;
	printf("Moi nhap so gio: ");
	scanf("%f", &gio);
	printf("Moi nhap so bac luong: ");
	scanf("%f", &bacLuong);
	luong = gio*bacLuong;
	return luong;
}
int bai4(int x){
	int tong =0;
	for(int i=1; i<=x; i++){
		if(i%3 == 0 && i%5 == 0){
			printf("i= %d\n", i);
			tong+=i;
		}
	}
	return tong;
}
int main(){
	int x;
	printf("Moi nhap x= ");
	scanf("%d", &x);
	int tong = bai4(x);
	printf("tong = %d\n", tong );
	//bai1();
//	int n;
//	printf("Moi nhap n= ");
//	scanf("%d", &n);
//	bai2(n);
//	float luong = bai3();
//	printf("luong = %f\n", luong);

	return 0;
}
