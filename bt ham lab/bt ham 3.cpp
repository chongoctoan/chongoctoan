#include<stdio.h>
#include<math.h>
float dienTich(int a, int b, int c){
	float p;
	float s;
	if(b+c<=a && a+c<=b && b+a<=c){
		return 0;
	}else{
		 p=(float)(a+b+c)/2;
		 s=sqrt(p*(p-a)*(p-b)*(p-c));
	    return s;
	}
	
		
}
int main(){
	int a ,b,c;printf("nhap a b c =");scanf("%d %d %d",&a,&b,&c);
	printf("dien tich tam giac: %f \n",dienTich(a,b,c));
}
