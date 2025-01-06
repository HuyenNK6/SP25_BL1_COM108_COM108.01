#include <stdio.h>

int main(){
	//ket thuc cau lenh bang dau ;
	printf("Hello world! \n"); //\n la de xuong dong moi
	int tuoi = 18; //kieu so nguyen -> gan gia tri -> %d
	int namSinh; //kieu so nguyen -> chua gan gia tri -> %d
	namSinh = 2005; //gan gia tri
	float diemToan = 8.5; //kieu so thuc -> %f
	double diemVan = 7.2; //kieu so thuc -> %lf
	char kyTu = 'c'; //kieu ky tu -> %c
	//////////IN RA MÀN HÌNH
	printf("Tuoi = %d \n", tuoi);
	printf("Nam sinh = %d \n", namSinh); //ctrl + space
	printf("Diem toan = %.2f \n", diemToan);//%.2f lay 2 so sau phay
	printf("Diem van = %.2lf \n", diemVan);
	printf("Ky tu = %c \n", kyTu);	
	return 0;
}
// tên file -> tieng Viet ko dau, ko co dau cach

