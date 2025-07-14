#include<stdio.h>
#include<math.h>

 void nhapHCNso(int n,int m){
 	printf("nhap n: ");
 	scanf("%d",&n);
 	printf("nhap m: ");
 	scanf("%d",&m);
 	for(int i = 1;i <=  m;i++){//m=4,n=5  
 		for(int j = 1;j <= n ;j++ ){
 			printf("%d ", j   );			 
		 }
		 printf("\n");
	}
}
void nhapHCNsao(int n,int m){
 	printf("nhap n: ");
 	scanf("%d",&n);
 	printf("nhap m: ");
 	scanf("%d",&m);
 	for(int i = 1;i <=  m;i++){  
 		for(int j = 1;j <= n ;j++ ){
 			printf("X ");			 
		 }
		 printf("\n");
	}
}
void nhapTGvuong(int n){
 	printf("nhap n: ");
 	scanf("%d",&n);
 	for(int i = 1;i <=  n;i++){  
 		for(int j = 1;j <= i ;j++ ){
 			printf("* ");			 
		 }
		 printf("\n");
	}
}
void nhapTGdeu(int n,int sum){
	printf("nhap n: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j = 1;j <=n - i;j++){
			printf(" ");
		}
	    for(int j =1;j<=2*i-1;j++){
	    	printf("*");
		}
		printf("\n");
	}
}
void cau9(int n,int sum){
	printf("nhap n: ");
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		sum+=i;
	}
	printf("tong day so la %d\n",sum);
	for(int i =2 ;i<=sqrt(n);i++){
		while(n%i==0){
			printf("%d",i);
			n/=i;
		}
	}
	if(n!=1){	
	   printf("%d",n);
    }
} 
void cau8(int a ,int b){
	printf("nhap a: ");
	scanf("%d",&a);
	printf("nhap b: ");
	scanf("%d",&b);
	if(a>b){
		false;
	}else{
		for(int i= a;i<= b;i++){
			printf("%d ",i);
			for(int j = 1;)
		}
}
}
 int main(){
 	int n,m,a,b;
 	int sum =0;
// 	nhapHCNso(n,m);
// 	nhapHCNsao(n,m);
// 	nhapTGvuong(n);
//	nhapTGdeu(n);  
//  cau9(n,sum);
    cau8(a,b);
    
 }
