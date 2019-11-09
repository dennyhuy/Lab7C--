#include <stdio.h>
#include <math.h>
//Ham nhap mang
void nhapMang(int A[],int *n)
{
	printf("\n Nhap vao so phan tu cho mang: ");scanf("%d",n);
	for(int i = 1;i<= *n; i++)
	{
		printf("Nhap vao phan tu thu %d: ",i);
		scanf("%d",&A[i]);
	}
}
// Ham xuat mang
void xuatMang(int A[],int n)
{
	for(int i = 1; i<=n;i++)
	{
		printf("Cac phan tu cua mang la: %d \t",A[i]);
	}
}
//Ham kiem tra so chan
void checkSoChan(int A[],int n)
{
	for(int i = 1;i<=n;i++)
	{
		if(A[i]%2 ==0){
			printf("%d",A[i]);
		}
	}
}
//Ham check so nguyen to
bool check(int n)
{
	if(n<=1) return false;
	for(int i = 2; i<= sqrt(n);i++)
		if(n%i ==0)
			return false;
	return true;
}
// Ham dem so nguyen to
int demSoNguyenTo(int A[],int n)
{
	int count = 0;
	for(int i =1;i<=n;i++){
		if(check(A[i])==true)
			count++;
	}
	return count;
}
//Ham tinh tong cac so chia het cho 5
int tinhTongCacSoChiaHetCho5(int A[],int n)
{
	int sum=0;
	for(int i = 1; i<=n;i++)
	{
		if(A[i]%5==0) 
			sum +=A[i];
			return sum;
		return -1;
	}
}
// Ham kiem tra so chinh phuong
bool ktscp(int x)
{
	int n;
	n=((int)sqrt((float)(x)));
	if(n*n==x)
		return true;
	return false;
}
// Xuat ra cac so chinh phuong o vi tri le
void xuatRaCacSoChinhPhuong(int A[],int n)
{
	for(int i=1;i<=n;i++)
	{
		if(ktscp(A[i])==true && i%2!=0);
			printf("%d",A[i]);
	}
}
int main()
{
	int A[50];
	int n;
	int go;
	printf("\n Chuong trinh giai quyet bai toan trong C++");
	printf("\n ---------------------------------------------");
	printf("\n 1. Dem cac so nguyen to co trong mang");
	printf("\n 2. Kiem tra cac so chan trong mang");
	printf("\n 3. Tinh tong cac so chia het cho 5");
	printf("\n 4. Xuat ra cac so chinh phuong o vi tri le trong mang");
	printf("\n ---------------------------------------------");
	nhapMang(A,&n);
	xuatMang(A,n);
	do
	{
		printf("\n yeu cau nhap lai so luong phan tu= ");
		scanf("%d",&n);
	} while(n<=0);
		printf("\n Vui long chon chuc nang: ");
		scanf("%d",&go);
	switch(go)
	{
		case 1: 
				printf("\n Cac so nguyen to trong mang la: %d",demSoNguyenTo(A,n));
				break;
		case 2: 
				checkSoChan(A,n);
				printf("\n Cac so chan trong mang la: ");
				break;
		case 3:
				printf("\n Tong cac so chia het cho 5 la: %d", tinhTongCacSoChiaHetCho5(A,n));
				break;
		case 4: 
				xuatRaCacSoChinhPhuong(A,n);
				printf("\n Cac so chinh phuong o vi tri le trong mang la: ");
				break;
		default: printf("\n Sai chuc nang, yeu cau nhap lai.");
				break;		
	}
	
	
	
}
