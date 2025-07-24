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
void nhapTGcan(int n){
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
void nhapTamGiacCanSoDoiXung(int chieuCao)
{
	printf("nhap chieu cao: ");
	scanf("%d",&chieuCao);
	for(int i = 1; i <= chieuCao;i++)
	{
	 for(int j = 1;j <= chieuCao-i;j++)
	 {
	 	printf(" ");	
	 }
	 for(int j = 1;j <= i ;j++)
	 {
	 	printf("%d",j);
	 }
	 for(int j= i-1;j >=1;j--)
	 {
	 	printf("%d",j);
	 }
	 printf("\n");
	}
} 
void hinhTraiTim(int m ,int n)
{
//	printf("nhap so hang: ");
//	scanf("%d",m);
//	printf("nhap so cot: ");
//	scanf("%d",n);
	for(int i = 1;i < 7;i++)
	{	
	    for(int j = 1;j <= 7 ;j++  )
		{
			if(!((i == 1 && (j == 1 || j == 4 || j == 7))
               || (i == 4 && (j == 1 || j == 7))
               || (i == 5 && (j <= 2 || j >= 6))
               || (i == 6 && (j <= 3 || j >= 5)))) 
			   {
                      printf(" * ");
               } else {
                      printf("   ");
                }

		}
		printf("\n");	
	}
} 

 int main(){
 	int n,m,chieuCao;
 	int sum =0;
// 	nhapHCNso(n,m);
// 	nhapHCNsao(n,m);
// 	nhapTGvuong(n);
//	nhapTGcan(n);  
//  cau9(n,sum);
//  nhapTamGiacCanSoDoiXung(chieuCao);
    hinhTraiTim(m,n);   
	       
 }
