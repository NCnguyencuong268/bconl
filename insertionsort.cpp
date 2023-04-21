#include <stdio.h>

void sxchen(int a[], int n)
{
   int i, j, k;
   for (i = 1; i < n; i++)
   {
       k = a[i];
       j = i-1;
       while (j >= 0 && a[j] > k)
       {
           a[j+1] = a[j];
           j = j-1;
       }
       a[j+1] = k;
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
sxchen(a, n);
printf ("Mang sau khi xep: ");
xuatmang(a, n);
}
	
