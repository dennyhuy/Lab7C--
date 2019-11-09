#include <stdio.h>
void NhapMang(int A[],int*n) 
{
	int i;
	printf("Nhap vao so phan tu cho mang: "); scanf("%d",n);
	for(i = 1; i<= *n;i++)
	{
		printf("Nhap vao phan tu thu %d: ",i);
		scanf("%d",&A[i]);
	}
}
void XuatMang(int A[],int n)
{
	int i;
	for(i = 1; i<= n;i++) printf("%d\t",A[i]);
}
int main()
{
	int A[50];
	int n;
	NhapMang(A,&n);
	printf("Mang vua nhap: ");
	XuatMang(A,n);
}
