#include <stdio.h>

int main(){
		float diem;
		do{
	
		printf("Xin moi nhap vao diem: ");
		scanf("%f", &diem);
	}while (diem < 0 || diem>10);
		printf("ban da nhap chinh xac");
	

	return 0;
}
