#include<stdio.h>

int chuVi(int a, int b, int c){
if(a>=b+c || b>=a+c || c>=a+b){
	return 0;
}else{
	return a+b+c;
}

}

int main(){
	int a ,b,c;printf("nhap a b c =");scanf("%d %d %d",&a,&b,&c);
	printf("chu vi tam giac: %d \n",chuVi(a,b,c));
}

