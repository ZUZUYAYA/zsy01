#include<stdio.h>
#include<math.h>
int main(){
	float a[51];
	int A;
	a[1]=1;
	a[2]=2;
	for(A=3;A<=50;A++){
		a[A]=a[A-1]+a[A-2];
	}
	
	int n;
	scanf("%d",&n);
	int x;
	float sum=0;
	for(x=1;x<=n;x++){
		sum=sum+a[x+1]/a[x];
	}
	printf("%.2f",sum);
	
	return 0;
} 

