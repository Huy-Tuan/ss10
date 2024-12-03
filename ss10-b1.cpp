#include<stdio.h>

int main () {
	
	int a[5] = {1,2,3,4,5};
	int n;
	int element;
	int pos;
	
	printf("Moi ban nhap mot phan tu co trong mang ");
	scanf("%d", &n);
	
	for(int i = 0; i < 5; i++) {	
	if(n==a[i]){
			element++;
			pos = i;
		}else
			element=0;
		}
    if(element){
	printf("phan tu %d o vi tri %d", n, pos + 1);
   }else{
	printf("khong co phan tu trong mang");
  }
    return 0;
}
