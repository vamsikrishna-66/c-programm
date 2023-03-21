#include <stdio.h>
main(){
	int n,i,j;
	
	printf("enter number of elements in array :");
	scanf("%d",&n);
	int arr[n],arev[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for (i = n - 1, j = 0; i >= 0; i--, j++) {
        arev[j] = arr[i];
    }
    printf("original array\n");
	for(i=0;i<n;i++){
	    printf("%d ",arr[i]);
	}
	printf("\ninverted array\n");
	for(i=0;i<n;i++){
	    printf("%d ",arev[i]);
	}

}
