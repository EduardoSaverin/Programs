// Array needs to be sorted for this to be work.
// Refer GeeksForGeeks for explantion.
#include<stdio.h>
int binarySearch(int array[],int start,int end,int x){
  while(start<=end){
    int pos = start+(end-start)/2;
    if(x == array[pos]){ return pos;}
    if(x < array[pos]){
      end = pos-1;
    } else{
      start = pos + 1;
    }
  }
  return -1;
}
int exponential(int array[],int n,int x){
  if(array[0] == x){
    return 0;
  }
  int i=1;
  while(i < n && array[i] <=x){
    i *= 2;
  }
  printf("Index : %d",i);
  return binarySearch(array,i/2,i<n?i:n,x);
}

int main(){
  int array[] = {1,2,3,4,5,6};
  int x = 5;
  int n = sizeof(array)/sizeof(x);
  int index = exponential(array,n,x);
  (index == -1)?printf("Element not found."):printf("Element found at %d index\n",index);
}
