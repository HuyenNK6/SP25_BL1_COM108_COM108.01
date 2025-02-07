#include <stdio.h>
//hàm ko tra ve
void bai1(){
	printf("1. Bai 1 \n");
				int n,sum;
				printf("Moi nhap so nguyen : \n");
				scanf("%d", &n);
				if(n>0){
					for(int i = 1;i <= n; i++){
					sum += i;
				}
				printf("Tong cua cac so nguyen duong la :%d\n", sum);
				}else{
					printf("%d la so nguyen am\n", n);
				}
				
}
void bai2(){
	printf("2. Bai 2 \n");
				int soN;
				printf("Nhap so N: ");
				scanf("%d", &soN);
				for (int i = 2; i <= soN; i+=2) {
					printf("i = %d\n", i);
				}
				for (int i = 1; i <= soN; i++){
					if(i % 2 == 0){
						printf("i = %d\n", i);
					}
				}	
}
void bai3(){
	printf("3. Bai 3 \n");
				int tuoi;
				do{
					printf("Moi nhap tuoi tu 18-50: ");
					scanf("%d",&tuoi);
					if(tuoi<18 || tuoi>50){
						printf("Vui long nhap tuoi tu 18-50\n");
					}else{
						printf("Tuoi cua ban la: %d\n",tuoi);
					}
				}while(tuoi<18 || tuoi>50);
}
void bai4(){
	
				
				printf("4. Bai 4 \n");
				int n;
				int sum=0;
				printf("Moi nhap so n= ");
				scanf("%d", &n);
				if(n<=0){
					printf("%d la so nguyen am---ko thoa man", n);
					//return 1;
			    }else{
			    	do{
			    		printf("n= %d\n",n);
					    sum+=n%10;
					    printf("sum= %d\n",sum);
						n/=10;	
						printf("n= %d\n",n);
					}while(n>0);
					printf("tong cac chu so vua nhap la: %d\n",sum);
				}
			    
}
int main(){
	int luaChon;
	do{
		printf("-----------MENU----------\n");
		printf("1. Bai 1 \n");
		printf("2. Bai 2 \n");
		printf("3. Bai 3 \n");
		printf("4. Bai 4 \n");
		printf("0. Thoat \n");
		printf("Moi lua chon (0-4): ");
		scanf("%d", &luaChon);	
		switch(luaChon){
			case 1:
				//goi ham bai 1
				bai1();
				bai1();
				bai1();
				break;
			case 2:
				bai2();
				break;
			case 3:
				bai3();
				break;
			case 4:
				bai4();
				break;
			    
			case 0:
				printf("0. Thoat \n");
				return 0;
			default: 
				printf("Moi nhap lai!!!!!!!\n");
		}
	}while(luaChon!=0);
	//lua chon =0 thi dung => khac 0 thi tiep tuc chuong trinh
	
	return 0;
}
