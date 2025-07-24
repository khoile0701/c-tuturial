#include<stdlib.h>
#include<time.h> 
#include<stdio.h>
#define max 100
//#length 10
//int main()
//{
//	srand(time(NULL));
//	int arr[max];
//	
//	for(int i=0;i < max ;i++)
//	{
//		arr[i]=rand();
//	}
//	for(int i=0;i < max ;i++)
//	{
//		printf("arr[%d]= %d\n", i , arr[i] );
//	}
//	return 0;
//	
// 
//}
/*int main()
{
	int n= 10;
	int a[10] ={3,5,4,6,7,5,1,2,3,10};
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	for(int i =n-1;i >= 0;i--)
	{
		printf("%d ",a[i]);
		
	}
	return 0;
	
	
} */
//int main()
//{
//	int b[6]={6,7,5,4,3,129};
//	b[0] = 129;
//	b[1] = 9;
//	b[2] += 129;
//	b[3] -= 129;
//	b[4] *= 129;
//	b[5] /= 129;
//	for(int i = 0;i < 6;i++ ){
//		printf("%d ",b[i]);
//	}
//}
/*int main()
{
	int n, a[100];
	printf("nhap n: ");
	scanf("%d",&n);
	for(int i =0;i <  n;i++)
	{
		printf("nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("mang vua nhap: ");
	for(int i=0;i < n;i++)
	{
		printf("%d ",a[i]);
	}
		return 0;
}*/

bool checkSNT(int i){
	for(int j = 2;j < i;j++){
	    if(i % j== 0){
	       return false;
	}
}
    return true ;
}
bool checkSHH(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n){
	 return true;
    }else{
	 return false;
}
}
int main()
{
	int sum;
int i; 
int n ;
int a =0;
 printf("nhap n: ");
 scanf("%d",&n);
 int snt[n]; 
 for( i=1;i <= n ;i++)
 {
 	if(checkSNT(i)){
	   snt[a] = i;
            a++;
        }
 }
 printf("Cac so nguyen to %d : ", n);
    for (int i = a - 1; i >= 0; i--) {
        printf("%d ", snt[i]);
}
printf("\n "); 
   if (checkSHH(n)) {
        printf("%d la so hoan hao.\n", n);
    } else {
        printf("%d khong phai la so hoan hao.\n", n);
    }

    return 0;
}
