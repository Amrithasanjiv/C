#include<stdio.h>
int main()
{ 
 int n,i,key,j,t=0;
 printf("enter the no of elements");
 scanf("%d",&n);
 t++;
 int a[n];
 //space+=sizeof(a);
 t++;
 printf("enter %d element \n",n);
 t++;
 for(i=0;i<n;i++)
 {
 	scanf("%d",&a[i]);
	 t++;
	 t++; 
 }
 printf("orginal array:\n");
 t++;
 for(i=0;i<n;i++)
 {
 	printf("%d\t",a[i]);
 	t++;
 	t++;
 }
 printf("\n");
 t++;
 for(i=0;i<n;i++)
 {
 key=a[i];
 j=i-1;
 t++;
 t++;
 while(j>=0 && a[j]>key)
 {
 	a[j+1]=a[j];
	 j--;
 	t++;
 	t++;
 }
 a[j+1]=key;
 t++;
 }
 printf("sorted array:\n");
 t++;
 for(i=0;i<n;i++)
 {
 printf("%d\t",a[i]);
 t++;
 t++;
 }
 printf("\n");
 t++;
 printf("space complexcity=%d\n",((5*4)+4*n));
 t++;
 t++;
 printf("time complexicity=%d\n",t);
 return 0;
}
 

