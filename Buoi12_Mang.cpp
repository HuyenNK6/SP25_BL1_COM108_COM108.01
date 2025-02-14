#include <stdio.h>
void bai1(){
	int arrNumber[6] = {3,8,1,2,9,6};//index 0->5
	printf("arrNumber[0]= %d\n", arrNumber[0]);
	arrNumber[0]= 10;
	printf("arrNumber[0]= %d\n", arrNumber[0]);
	for(int i=0; i<6; i++){
		printf("arrNumber[%d]= %d\n",i, arrNumber[i]);
	}
}
void bai2(){
	int soLuong;
	printf("Moi nhap so luong sinh vien: ");
	scanf("%d", &soLuong);
	float arrCanNang[soLuong];
	printf("---NHAP THONG TIN---\n");
	for(int i=0; i<soLuong; i++){
		printf("Nhap can nang sv thu %d: ",i);
		scanf("%f", &arrCanNang[i]);
	}
	printf("---XUAT THONG TIN---\n");
	for(int i=0; i<soLuong; i++){
		printf("Can nang sv thu %d la: %f \n",i, arrCanNang[i]);
	}
}
int main(){
	bai1();
	bai2();
	return 0;
}
