#include <stdio.h>

int main() {
    int arr[4][2];
    int w, h;
    int i;

    for (i = 0; i <= 3; i++) {
        printf("Enter weight: ");
        scanf("%d", &w);
        printf("Enter height: ");
        scanf("%d", &h);
        arr[i][0] = w;
        arr[i][1] = h;
        
    }

    for(i=0;i<=3;i++){
    	if(arr[i][0]>50 || arr[i][1]>41){
    		printf("box %d is not allowed\n",i);
		}
		else{
			printf("box %d is allowed\n",i);
		}
	}

    return 0;
}

