#include<stdio.h>;

int main () {
	
	int arr[] = {1,3,5,2,4};
	int size = sizeof(arr)/sizeof(0);
	
	for (int i = 0; i < size - 1 ; i++){
		for(int j = 0; j < size - i - 1; j++){
			if(arr[j] > arr [j + 1]){
			int temp;
			temp = arr[j];
			arr[j] = arr[ j + 1];
			arr[ j + 1] = temp;
		    }
		}
	}
	for (int i = 0; i < size; i++){
		printf("%d\t", arr[i]);
	}
	
	   
}
