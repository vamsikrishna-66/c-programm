#include<stdio.h>
main(){
	int arr[15];
	int c1=0,c2=0,c3=0,c4=0,i;
	
	for(i=0;i<15;i++){
		printf("enter number %d ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<15;i++){
		if(arr[i]>0){
			c1= c1+1;
		}
		else if(arr[i]<0){
			c2=c2+1;
		}
	}
	for(i=0;i<15;i++){
		if(arr[i]%2==0){
			c3=c3+1;
		}
		else{
			c4=c4+1;
		}
}
	printf("pos : %d \nneg : %d \neven : %d \nodd : %d",c1,c2,c3,c4);

}
