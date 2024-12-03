#include <stdio.h>

int main () {
	
	int arr[] = {0,3,2,1,4};
	int n = sizeof(arr)/sizeof(int);
	   
	for(int i = 0; i < n; i ++){
	    int minIdex = i;
	    for(int j = i + 1; j < n; j++){
	   		if(arr[j] < arr[minIdex]){
	   			minIdex = j;
			   }
		   }
		    if(minIdex != i){
		    	int temp;
		    	temp = arr[minIdex];
		    	arr[minIdex] = arr[i];
		    	arr[i] = temp;
		    }
	   }
	    for(int i = 0; i < 5; i++){
	    	printf("%d\t", arr[i]);
		}
		return 0;
	}
