#include <stdio.h>
#include <conio.h>
#include <math.h>
#define MAX 100

void nhapmang(int a[], int &n){
	do{
		printf("Nhap so phan tu: ");
		scanf("%d",&n);
		if(n <= 0 || n > MAX){
			printf("So phan tu khong hop le. ");
		}
	}
	while(n <= 0 || n > MAX);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	}
	
void xuatmang(int a[], int n){
	for(int i = 0; i < n; i++)
	{
		printf("%4d",a[i]);
	}
}

int tongchan(int a[], int n){
	if(n == 0)
	return 0;
	float s = tongchan(a, n-1);
	if(a[n - 1]%2 == 0)
	s = s + a[n - 1];
	return s;	
}

int main(){
	int n;
	int a[MAX];
	nhapmang(a, n);
	xuatmang(a, n);
	int tong = tongchan (a, n);
	printf("Tong cac so chan = %d",tong);
	getch();
	return 0;
}
