#include <stdio.h>
// Ham Nhap
void enterTheArray(int A[],int *n)
{
	printf("\n Nhap vao so luong phan tu: "); scanf("%d",n);
	for(int i =1;i<=*n;i++)
	{
		printf("\n Nhap vao phan tu thu %d: ",i);
		scanf("%d",&A[i]);
	}
}


// Ham Xuat
void exportArray(int A[],int n)
{
	for(int i = 1;i<= n;i++)
	{
		printf("\n Mang vua nhap la: %d \t",A[i]);	
	}
}


// Ham tim so lon nhat trong mang
void findTheLargestElement(int A[],int n)
{
	float max=A[0];
	for(int i =1 ; i<=n;i++)
	{
		if(A[i]>max) 
		max = A[i];
	}
}


// Ham tim vi tri so am dau tien trong mang
int findPositionOfNegativeElement(int A[],int n)
{
	for(int i=1;i<=n;i++)
	{
		if(A[i]<0) printf("%d",i);
	}
	return -1;
}


// Tim vi tri phan tu x xuat hien cuoi cung trong mang
int findLastPositionElement(int A[],int n,int x)
{
	for(int i=n;i<=n;i--)
	{
		if(A[i]==x)
			return i;
	}
	return -1;
}


// Dem cac so am va nho hon -10
int countElementSmallThan10AndNegative(int A[],int n)
{
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(A[i]<0 && A[i]<-10)
			count++;
			return count;
	}
	return -1;
}


// Tinh tong cac so o vi tri chan trong mang
int calculateTheAverageOfTheElementsInEvenPosition(int A[],int n)
{
	double avg,sum=0;
	float dem=0; 
	for (int i=2;i<=n;i+=2 ) 
	{
		sum+=A[i];
		dem++; 
	}
	avg=double(sum/dem);
	return avg; 
}


// Kiem tra mang co tang dan hay khong
void check(int A[],int n)
{
	for(int i=1;i<=n;i++) 
		if(A[i]>A[i+1])
		 printf("\n Day so nay khong tang dan");
	printf("\n Day so nay tang dan");
} 


int main()
{
	int A[10];
	int n,x,go;
	
	
	printf("\n \t Chuong trinh bai toan trong C++");
	printf("\n -----------------------------------------------------------");
	printf("\n 1. Tim phan tu lon nhat trong mang.");
	printf("\n 2. Tim phan tu am dau tien trong mang.");
	printf("\n 3. Tim Vi tri cuoi cung cua phan tu can tim. ");
	printf("\n 4. Dem cac phan tu am va nho hon -10.");
	printf("\n 5. Tinh trung binh cac phan tu o vi tri chan trong mang.");
	printf("\n 6. Kiem tra day so co tang dan hay khong. ");
	printf("\n -----------------------------------------------------------");
	
	enterTheArray(A,&n);
	exportArray(A,n);
	do
	{
		printf("\n yeu cau nhap lai so luong phan tu= ");
		scanf("%d",&n);
	} while(n<=0);
	
	
	printf("\n Nhap vao chuc nang: ");
	scanf("%d",&go);
	
	
	switch(go)
	{
		case 1: 
		    findTheLargestElement(A,n);
			printf("\n So lon nhat trong mang la: ");
			break;
		case 2:
			findPositionOfNegativeElement(A,n);
			if(findPositionOfNegativeElement(A,n)==-1) printf("\n Khong co so am trong mang");
			printf("\n Vi tri cua phan tu am trong mang la: ");
			break;
		case 3:
			printf("\n tim phan tu x xuat hien cuoi cung trong mang: ");
			scanf("%d",&x);
			printf("\n Vi tri cua phan tu x xuat hien cuoi cung trong mang: %d",findLastPositionElement(A,n,x));
			break;
		case 4:
			if(countElementSmallThan10AndNegative(A,n)==-1) printf("\n Khong co so nao nho hon -10 va la so am");
			printf("\n Cac so nho hon -10 va so am la: %d",countElementSmallThan10AndNegative(A,n));
			break;
		case 5:
			printf("\n Trung binh cac so o vi tri chan la: %d", calculateTheAverageOfTheElementsInEvenPosition(A,n));
		case 6:
			check(A,n);
			break;
		default: 
			printf("\n Chuc nang khong hop le, yeu cau nhap lai");	
			break;
	}
	
 } 
