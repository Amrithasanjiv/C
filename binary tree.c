#include<stdio.h>
int main() {
	int i,n,pos,a[20];
	printf("Enter the number of elements in the binary tree: ");
	scanf("%d",&n);
	printf("Enter the tree elements: ");
	for (i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	printf("The given binary tree is: \n");
	for (i=0; i<n; i++) {
		printf("%d \t",a[i]);
	}
	printf("\nEnter the position : ");
	scanf("%d",&pos);
	if (pos<0 || pos>=n) {
		printf("\nInvalid position!");
		return 1;
	} 
	if (pos>0) {
		printf("\nParent of %d is: %d",a[pos], a[(pos-1)/2]);
	} else {
		printf("\nNo parent");
	}
	if ((2*pos)+1 >= n) {
		printf("\nNo left child");
	} else {
		printf("\nLeft child of %d is: %d",a[pos],a[(2*pos)+1]);
	}
	if ((2*pos)+2 >= n) {
			printf("\nNo right child");
	} else {
		printf("\nRight child of %d is: %d",a[pos],a[(2*pos)+2]);
	}
	return 0;
}
