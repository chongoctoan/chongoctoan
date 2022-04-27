#include<stdio.h>
int main()
{
    int n,i;
    float s = 0;
    do{
        printf("\nNhap n > 0: ");
        scanf("%d",&n);
        if(n <= 0){
        	printf("nhap lai n > 0 \n"); 
		} 
    }while (n <= 0); 
	
 
    for(i = 1;i <= n;i++){
        s +=1/(float)i;
    }
    printf("\nt = %f",s );
}
