#include <stdio.h>

int main(){
	int tuoi;// %d
	printf("Moi nhap tuoi: \n");
	scanf("%d", &tuoi); //doc gia tri tu ban phím-> gan cho bien tuoi
	//chieu cao, gioi tinh, ten viet tat

	double chieuCao; //%f
	printf("Moi nhap chieu cao: \n");
	scanf("%lf", &chieuCao);
	bool gioiTinh;
	printf("Moi nhap gioi tinh: \n");
	scanf("%d", &gioiTinh); //loi troi lenh
	getchar();//get ky tu thua con lai
	char tenVietTat;
	printf("Moi nhap ten viet tat: \n");
	scanf("%c", &tenVietTat);
	
	printf("------------IN THONG TIN----------\n");
	printf("Tuoi la: %d \n", tuoi);
	printf("Chieu cao la: %.0lf \n", chieuCao);
	printf("Gioi tinh la: %d \n", gioiTinh);
	printf("Ten viet tat la: %c \n", tenVietTat);
	return 0;
}
