#include<stdio.h>
int tongCacSo(int n){
	int temp;
	int tong= 0;
	for(temp=n;temp!=0;temp/=10){
		tong+=temp%10;
	}
	return tong;
}

int main(){
	int n;scanf("%d",&n);
	printf("%d",tongCacSo(n));
}

