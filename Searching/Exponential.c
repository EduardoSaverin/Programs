// Array needs to be sorted for this to be work.
#include<stdio.h>

int exponential(int array[],int n,int x){
  // Write code here...
  return -1;
}
int main(){
  int array[] = {1,2,3,4,5,6};
  int x = 5;
  int n = sizeof(array)/sizeof(x);
  int index = exponential(array,n,x);
  (index == -1)?printf("Element not found."):printf("Element found at %d index\n",index);
}
