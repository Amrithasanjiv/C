#include<stdio.h>
void main()
{
 int n,t=0,i,left=0,right,mid,x,a[100],flag=0;
 t++;
 t++;
 t++;
 printf("enter the no of elements\n");
 t++;
 scanf("%d",&n);
 t++;
 right=n-1;
 printf("enter %d integer\n",n);
 t++;
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  t++;
 }
 t++;
 printf("enter the element to be searched:");
 t++;
 scanf("%d",&x);
 t++;
  while(left<=right)
  {
  mid=(left+right)/2;
  if(x==a[mid])
  {
  flag=1;
  break;
  }
  else if(x>a[mid])
  {
  left=mid+1;
  continue;
  }
  else if(x<a[mid])
  {
  right=mid-1;
  continue;
  }
  t++;
  }
  t++;
  t++;
  t++;
  if (flag==1)
  printf("element is found\n");
  else
  printf("element is not found\n");
  t++;
  t++;
  printf("space complexcity=%d\n",((8*4)+4*n));
  t++;
  t++;
  printf("time complexicity=%d\n",t);
}
  
