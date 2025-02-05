#include <stdio.h>

int main(){
//	//bài 1: tu 1 den n
//	printf("----BAI 1----\n");
//	int n;
//	printf("Moi nhap so nguyen duong: ");
//	scanf("%d", &n);
//	for (int i=1; i <=n; i++ ){
//		printf("i = %d \n", i);
//	}
//	for (int i= n; i >= 0; i--){
//		printf("i = %d \n", i);
//	}
//	//Bài 3:
//	int number;
//	printf("Moi nhap bang cuu chuong so: ");
//	scanf("%d", &number);
//	for (int i= 1; i<= 10; i++ ){
//		printf("%d * %d = %d \n", number, i, number * i);
//	}
//	//Bài 4: S= 1+2+3+...+a
//	int a;
//	printf("Moi nhap a= ");
//	scanf("%d", &a);
//	int i=0;
//	int sum=0;
//	while(i<=a){
//		printf("i = %d\n", i);
//		sum += i;
//		printf("Sum = %d\n", sum);
//		i++;
//	}
//	printf("Sum = %d\n", sum);
	//Bài 5: nhap so 1-10
	int so;
	do{
		printf("Moi nhap so 1-10: ");
		scanf("%d", &so);
		if(so < 1 || so > 10){
			printf("Vui long nhap lai!!!!!\n");
		}
	}while(so < 1 || so > 10);
	printf("So = %d\n", so);
	
	return 0;
}
