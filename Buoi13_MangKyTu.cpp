#include <stdio.h>

int main(){
	//nhap ho ten cua ban
	char hoTen[50]; //chuoi <=> mang ky tu co kich thuoc=50
	printf("Moi nhap ho ten: ");
//	scanf("%s", &hoTen); //ko doc duoc dau cah
	gets(hoTen);//doc du lieu tu ban phim bao gom ca dau cach
	printf("Ho ten la %s\n", hoTen);//%s: string-> chuoi 
	
	return 0;
}
