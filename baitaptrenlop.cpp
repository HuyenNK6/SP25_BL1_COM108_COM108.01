#include <stdio.h>
//Nhap vao thang, nam -> kiem tra thang do co bao nhieu ngay
//=> co su dung switch case
int main(){
	int thang,nam;
	printf("moi nhap vao thang: ");
	scanf("%d", &thang);
	printf("moi nhap vao nam: ");
	scanf("%d", &nam);
	switch(thang){
		case 1: 
		case 3: 
			printf("case 3");
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("thang co 31 ngay");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("thang co 30 ngay");
			break;
		case 2:
			if((nam%4==0 && nam%100!=0)||(nam%400==0)){
				printf("la nam nhuan va thang co 29 ngay");
			}else{
				printf("la nam khong nhuan va thang co 28 ngay");
			}
			break;
		default:
			printf("moi nhap lai thang");
		}
	return 0;
}

