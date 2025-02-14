#include <stdio.h>

int main(){
	int soDien;
	printf("Moi nhap so tien dien tieu thu: ");
	scanf("%d", &soDien);
	int tienDien;
	if(soDien > 0 && soDien < 50){
		tienDien = soDien * 1500;
	}else if(soDien < 100){
		tienDien = 50 * 1500 + (soDien - 50)* 2000;
	}else{
		tienDien = 50 * 1500 + 50* 2000 + (soDien - 100)*3000;
	}
	printf("So dien = %d\n", soDien);
	printf("Tien dien = %d\n", tienDien);
	return 0;
}
