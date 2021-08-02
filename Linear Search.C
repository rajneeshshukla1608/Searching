/* This is linear search in searching algorithms and this is not widly used so this works on both sorted and the unsorted array and can be implemented through array
and linked lists and their complexity is given below

Time complexity - O(n)

*/

#include<stdio.h>
#include<conio.h>
int lisearch(int a[], int key, int j){
for(j=0; j<5; j++){
  if(a[j]==key){
  return j;
 }
}
return -1;
}
void main(){
int a[5],i, key=0, get,j, ret;
clrscr();
printf("Enter the number in to the array: ");
for(i=0;i<5; i++){
  scanf("%d", &a[i]);
 }
printf("Enter the key you want to search: ");
scanf("%d", &key);
ret = lisearch(a,key,j);
printf("This will give the index if found otherwise print (-1) = %d", ret);
getch();
}
