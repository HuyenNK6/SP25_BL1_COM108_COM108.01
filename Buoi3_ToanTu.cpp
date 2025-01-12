#include <stdio.h>

int main(){
	double chieuDai, chieuRong;
	printf("Moi nhap chieu dai: ");
	scanf("%lf", &chieuDai);
	printf("Moi nhap chieu rong: ");
	scanf("%lf", &chieuRong);
	
	printf("---------IN THONG TIN--------\n");
	printf("Chieu dai= %.2lf\n", chieuDai);
	printf("Chieu rong= %.2lf\n", chieuRong);
	double dienTich = chieuDai * chieuRong;
	printf("Dien tich HCN: %.2lf\n", dienTich);
	
	//toán tu gan 
	int a= 5, b = 2;
	int ketQua1 = ++a + (--b); //=7
	printf("ketQua1 = %d\n", ketQua1);
	printf("a = %d, b = %d\n", a, b);
	
	int ketQua2 = a++ - (b--); //=5
	printf("ketQua2 = %d\n", ketQua2);
	printf("a = %d, b = %d\n", a, b);
	
	//toan tu logic
	bool check = (ketQua1 > ketQua2); //true -false <=> 1-0
	printf("check = %d\n", check);
	//kiem tra ketQua1 co phai so chan ko?
	bool kiemTra = (ketQua1 % 2 == 0);//ketQua1 chia 2 có du 0?
	printf("kiemTra= %d \n", kiemTra);
	printf("!kiemTra= %d \n", !kiemTra);
	return 0;
}
