#include<stdio.h>

void nhapSo(int a,int b){
	printf("nhap a:");
	scanf("%d",&a); 
	printf("nhap b:"); 
	scanf("%d",&b);	
	
}
int tinhTong(int a, int b){
	int tong=0;
		tong=a+b; 
	return tong;
}
int tinhHieu(int a,int b){
	int hieu=0;
	hieu=a-b;
	return hieu; 
}
int tinhTich(int a,int b){
	int tich=0;
	tich=a*b;
	return tich; 
}
float tinhThuong(float a, float b){
	float thuong=a/b;
	return thuong; 
} 



int main(){
	int n;
	do{
	
	printf("        Tinh Toan       \n");
	printf("=========================== \n");
	printf("        1. nhap so            \n");
	printf("        2. Tinh tong          \n");
	printf("        3. Tinh hieu          \n");
	printf("        4. Tinh tich          \n");
	printf("        5. Tinh thuong        \n");
	printf("        6. Thoat              \n");
	printf("========================== \n");
	printf("Chon:\n");
	scanf("%d",&n);
	int a,b;
	
	
	if(n==1){
		printf("nhap a:");scanf("%d",&a);
		printf("nhap b:");scanf("%d",&b);
	}		
	if(n==2){
		printf("tinh tong a va b = %2d \n",tinhTong(a,b));
	}	
	if(n==3){
		printf("tinh hieu a va b = %2d \n",tinhHieu(a,b));	
	}
	if(n==4){
		printf("tinh tich a va b = %2d \n",tinhTich(a,b));
	}
	if(n==5){
		printf("tinh thuong a va b = %2f \n",tinhThuong(a,b));
	}
	
	}
	while(n!=6 );
	
	
}
