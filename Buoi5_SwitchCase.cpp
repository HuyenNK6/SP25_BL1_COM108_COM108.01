#include <stdio.h>

int main(){
	int luaChon;
	printf("------------MENU---------\n");
	printf("1. Tra sua\n");
	printf("2. Cafe\n");
	printf("3. Nuoc ep\n");
	printf("-------------------------\n");
	printf("Moi nhap lua chon: ");
	scanf("%d", &luaChon);
	switch(luaChon){
		case 1:
			printf("Moi uong tra sua\n");
			break; //lenh thoat khoi switch case
		case 2:
			printf("Moi uong cafe\n");
			break;
		case 3:
			printf("Moi uong nuoc ep\n");
			break;
		default:
			printf("Lua chon sai!!!");//cac truong hop con lai
	}
	
	return 0;
}
