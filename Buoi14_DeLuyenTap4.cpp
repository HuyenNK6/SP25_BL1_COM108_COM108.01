#include <stdio.h>
void bai1(){
	//mang tuoi SV => tinh tong vi trí le
	int n;
	printf("Moi nhap so luong SV n= ");
	scanf("%d", &n);
	int arrTuoi[n];
	printf("-------NHAP MANG-----\n");
	for(int i=0; i<n; i++){
		printf("Nhap arrTuoi[%d]= ", i);
		scanf("%d", &arrTuoi[i]);
	}
	printf("-------XUAT MANG-----\n");
	for(int i=0; i<n; i++){
		printf("arrTuoi[%d]= %d\n", i, arrTuoi[i]);
	}
	int tong=0;
	for(int i=0; i<n; i++){
		if(i % 2 != 0){//kiem tra vi tri le => i % 2 == 0 so chan
			tong += arrTuoi[i];
		}
	}
	printf("Tong cac phan tu tai vi tri le: %d\n", tong);
}
void bai3(){
	int n;
	printf("Moi nhap so luong dien thoai n= ");
	scanf("%d", &n);
	int arrDungLuong[n];
	printf("-------NHAP MANG-----\n");
	for(int i=0; i<n; i++){
		printf("Nhap arrDungLuong[%d]= ", i);
		scanf("%d", &arrDungLuong[i]);
	}
	printf("-------XUAT MANG-----\n");
	for(int i=0; i<n; i++){
		printf("arrDungLuong[%d]= %d\n", i, arrDungLuong[i]);
	}
	int x;
	printf("Moi nhap dung luong can tim x= ");
	scanf("%d", &x);
	int count=0;
	for(int i=0; i<n; i++){
		if(arrDungLuong[i] == x){
			printf("Co ton tai dung luong %d\n", x);
			count++;//neu tim thay thi tang count len 1 don vi
		}
	}
	if(count == 0){
		printf("Khong ton tai %d\n", x);
	}
}
void bai4(){
	int n;
	printf("Moi nhap so luong dong vat n= ");
	scanf("%d", &n);
	float arrCanNang[n];
	printf("-------NHAP MANG-----\n");
	for(int i=0; i<n; i++){
		printf("Nhap arrCanNang[%d]= ", i);
		scanf("%f", &arrCanNang[i]);
	}
	printf("-------XUAT MANG-----\n");
	for(int i=0; i<n; i++){
		printf("arrCanNang[%d]= %f\n", i, arrCanNang[i]);
	}
	float max = arrCanNang[0]; 
	for(int i=0; i< n; i++){
		if(arrCanNang[i] > max){  //neu lon hon max thi gan lai max
			max= arrCanNang[i];
		}
	}
	printf("Max = %f\n", max);
}
int main(){
	bai4();
	return 0;
}
