#include<stdio.h>
void main()
{ 
 int a[100],n,j,i,temp,t;
 t++;
 t++;
 printf("enter the no of elements ");
 t++;
 scanf("%d",&n);
 t++;
 printf("enter the array elements");
 t++;
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 t++;
 t++;
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if (a[i]>a[j])
   {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    t++;
    t++;
    t++;
    }
   }
   t++;
  }
  printf("selection sort array");
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
}