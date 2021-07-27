#include<stdio.h>
#include<conio.h>
int binarysearch(int arr[], int n, int key){
	int s = 0;
	int e = n;
	int mid;
	while(s<=e){
	   mid = (s + e) / 2;
	   if(key == arr[mid]){
	     return mid;
	   } else if(key > arr[mid]){
	     s = mid + 1;
	   } else {
	     e = mid - 1;
	   }
	}
	return -1;
}

int main(){
	int key, get, i, arr[5];
	char ch='y';
	clrscr();
	printf("Enter the number into the arary : ");
	for(i = 0; i <= 4; i++){
	scanf("%d", &arr[i]);
	}
	while(ch=='y'){
	printf("\nEnter the key: ");
	scanf("%d", &key);
	get = binarysearch(arr, 5, key);
	printf("The binary search address will be %d", get);
	printf("\n Want to search again press y or any key to terminate: ");
	ch=getche();
	}
	  }