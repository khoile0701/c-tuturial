#include<stdio.h>
#include<math.h>

int main (){
	int luachon;
	do{
	printf("\n===================MENU===================\n1.Tinh tong day so.\n2.Bang cuu chuong.\n3.Hienh thi va tinh tong cac so le.\n"
	"4.Ve tam giac sao.\n5.Ve hinh kim cuong bang dau sao.\n6.Thoat.\nBan chon cai nao ?\n");
	scanf("\n%d",&luachon);
	switch(luachon){
	
		case 6 :{
			break;
		}
		case 1:{
			int n;
			int sum =0;
			printf("input n: ");
			scanf("%d",&n);
			for(int i=1;i <=n;i++){
				sum+=i;
			}
				printf("tong cua day so: %d",sum);
			break;
		}
		case 2:{
			int n;
			int i = 1;
			printf("input n: ");
			scanf("%d",&n);
			do{
				printf("%d * %d = %d\n",n,i,(n * i));
				i++;
			}while(i <= 10);
			break;
		}
		case 3:{
			int n;
			int sum =0;
			printf("input n: ");
			scanf("%d",&n);
			for(int i = 0; i <= n;i++){
				if(i%2==1){
				  printf("%d",i);
				  sum+=i;
			}
			}
			printf("\ntong cua day so le la :%d",sum);
			
			break;
		}
		case 4:{
			int n;
			
			printf("input n: ");
			scanf("%d",&n);
			for(int i=1;i<=n;i++){
				for(int j=1;j<= i ;j++ ){
					printf("*");
				} 
				printf("\n"); 
			}
			break;
		}
		case 5:{
			int n;
			 printf("input n: ");
			scanf("%d",&n);
			for(int i=1;i <= n;i++ ){
				for(int j=1; j <= i;j++){
					printf("*");
				}
				printf("\n");
			
			}
			 for (int i = n - 1; i >= 1; i--) {
                for (int j = 1; j <= i; j++)
                    printf("*");
                    printf("\n");
            }
			break;
		}
}
}while(luachon !=  6);
	return 0;
}
	
		 
		
	
	 
