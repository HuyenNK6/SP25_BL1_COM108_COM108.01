#include <stdio.h>

int main(){
	//nhap ngay hôm nay -> kiem tra ngay hom nay la ngay chan hay le?
	int ngay;
	printf("Moi nhap ngay hom nay: ");
	scanf("%d", &ngay);
	
	// su dung if else
	if (ngay % 2 == 0) {
        printf("Ngay hom nay la ngay chan: %d\n", ngay);
    } else {
        printf("Ngay hom nay la ngay le: %d\n", ngay);
    }
    //nhap vào diemTB va Hanh kiêm (char): T- Tot, K-Kha, Y- Yeu
    double diemTB = 8.5;
    char hanhKiem = 'T';
    //neu diemTB >= 9 & hanh kiem Tot => co hoc bong
    if (diemTB >= 9 && hanhKiem == 'T'){
    	printf("Co hoc bong");
	}else{
		printf("Khong co hoc bong");
	}
	
	return 0;
}
