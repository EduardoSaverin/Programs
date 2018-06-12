// Array needs to be sorted for this to be work.
#include<stdio.h>

int interpolation(int array[],int n,int x){
  int low = 0;
  int high = n-1;
  // Keep finding pos value this is probing.
  while(low<=high && x >= array[low] && x<= array[high]){
    // position = lowest_index + ((high_index-lowest_index)/(value at high_index - value at lowest_index))*(value to search - value at lowest_index)
    int pos = low+((double)(high-low)/(array[high]-array[low]))*(x-array[low]);
    if(array[pos] == x){
      return pos;
    }
    if(x<array[pos]){
      high = pos-1;
    }else{
      low = pos+1;
    }
  }
  return -1;
}
int main(){
  int array[] = {1,2,3,4,5,6};
  int x = 5;
  int n = sizeof(array)/sizeof(x);
  int index = interpolation(array,n,x);
  (index == -1)?printf("Element not found."):printf("Element found at %d index\n",index);
}
