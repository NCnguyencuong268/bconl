#include <stdio.h>
void swap (int &a, int &b){
	int x = a;
	a = b;
	b = x;
}
void sxc (int a[], int n){
	int i, j, idx;
	for (i = 0; i < n-1; i++){
		idx = i;
	}
	for (j = i+1; j < n; j++){
        if (a[j] < a[idx]){
        idx = j;
         swap(a[idx], a[i]);
}
}
}
void xuatmang(int a[], int n)
{
    int i;
    for (i=0; i < n; i++)
        printf("%d ", a[i]);
    }

int main(){
	int a[]= {41, 23, 4, 14, 56, 1};
	int n = sizeof(a) / sizeof(a[0]);
	sxc (a, n);
	printf ("Mang sau khi xep: ");
	xuatmang(a, n);
}
