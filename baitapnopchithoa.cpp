#include<stdio.h>
#include<math.h>
//dien tich chu nhat (cd va cr)
//ham giai pt bac 1( ax + b = 0)
//viet ban cuu chuong(tu 10=>1)
//phuong trinh bac hai(j *x^2+kx+l=0)
void nhap(float &cd,float &cr,int &a,int &b,int &n,int &j,int &k,int &l){
	printf("nhap cd: ");
	scanf("%f",&cd);
	printf("nhap cr: ");
	scanf("%f",&cr);
	printf("nhap a: ");
	scanf("%d",&a);
	printf("nhap b: ");
	scanf("%d",&b);
	printf("nhap n: ");
	scanf("%d",&n);
	printf("nhap j: ");
	scanf("%d",&j);
	printf("nhap k: ");
	scanf("%d",&k);
	printf("nhap l: ");
	scanf("%d",&l);
}
void xuat(float cd,float cr,int a, int b,int n,int j,int k,int l){
	printf("cd = %.2f",cd);
	printf("\ncr = %.2f",cr);
	printf("\na = %d",a);
	printf("\nb = %d",b);
	printf("\nn = %d",n);
	printf("\nj = %d",j);
	printf("\nk = %d",k);
	printf("\nl = %d",l);
}
float phuong_trinh(int a,int b){
	float x = (float) -b /a;
	return x;
}
void nghiem(int a,int b){
	float x = phuong_trinh(a,b); 
	if(a == 0){
		if(b == 0 ){
			printf("\nphuong trinh co vo so nghiem");
		}else{
			printf("\nphuong trinh khong co nghiem");
		}
	}else{
		printf("\nphuong trinh co mot nghiem duy nhat: x = %.2f",x);
	}
}
float dien_tich(float cd ,float cr){
	float dienTichChuNhat = cd *cr;
	return dienTichChuNhat;	
}
void cuu_chuong(int n){
printf("\n bang cuu chuong: ");
	for(int i=10 ;i >0;i--){
		printf("\n%d * %d = %d",n,i,(n *i));
	}
}
float phuong_trinh_bac_2(int j,int k,int l){
	float delta =(k * k) - (4 * j * l);
	return delta;
}
void nghiem2(int j,int k,int l){
	float delta =  phuong_trinh_bac_2(j,k,l);
		if(delta > 0){
			printf("\n phuong trinh co hai nghiem phan biet:x = %lf,y = %lf ",(-k + sqrt(delta))/(2 * j),(-k - sqrt(delta))/(2 * j));
		}else if(delta == 0){
			printf("\n phuong trinh co nghiem kep:x = %lf",float((-(-k)) /( 2 * j )));
		}else{
			printf("\n phuong trinh vo nghiem");
		}
	}
	
int main (){
	int a,b,n,j,k,l;
	float cd,cr;
	nhap(cd,cr,a,b,n,j,k,l);
	xuat(cd,cr,a,b,n,j,k,l);
    int luachon;
        printf("\n============Menu===========\n1.dien tich hinh chu nhat.\n2.phuong trinh bac nhat.\n3.bang cuu chuong.\n4.phuong trinh bac hai.\n0.thoat.\nBan chon cai nao ?"); 
        scanf("\n%d",&luachon);
    switch( luachon ){
	    case 0: break;
	    case 1:{
	        float dienTichChuNhat = dien_tich(cd,cr);
	        printf("\ndien tich = %.2f",dienTichChuNhat);	
	    break;
	    }
	    case 2:{
	        nghiem(a,b);
	    break;
		}
		case 3:{
        	cuu_chuong(n);
		break;
		}
		case 4:{
	        nghiem2(j,k,l);
	    break;
		}
}
}



