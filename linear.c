#include<stdio.h>
void main()
{
 int a[20],count=0,n,i,x,t=0;
 t++;
 t++;
 printf("enter the size of the element");
 t++;
 scanf("%d",&n);
 t++;
 printf("enter the element to be serached");
 t++;
 scanf("%d",&x);
 t++;
 printf("enter the element");
 t++;
 for (i=0;i<n;i++)
 {
 t++;
 scanf("%d",&a[i]);
 t++;
 }
 t++;
 for(i=0;i<n;i++)
 {
 t++;
 if(a[i]==x)
 {
 count++;
 printf("the element is found at %d\n",i+1);
 t++;
 t++;
 }
 }
 t++;
 if(count>0)
 {
 printf("the element is found %d times\n",count);
 t++;
 }
 else
 {
 printf("the element is not found in the list");
 t++;
 t++;
 }
 printf("space complexcity=%d\n",((5*4)+4*n));
 t++;
 t++;
 printf("time complexicity=%d\n",t);
}
