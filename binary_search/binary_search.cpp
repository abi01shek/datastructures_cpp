#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;


//recursive algorithm
//tail recursion no operations to be done after calling the function

int binary_search(const int& num, const int& low, const int& high, const int nums[]){
  int middle = (low+high)/2;
  //cout << low << " " << middle << " " << high << endl;
  if(nums[middle] == num){
    return middle; //base case
  }
  if(low == high){
    return -1;
  }
  if(num < nums[middle]){
    return binary_search(num, low, middle, nums);
  }
  else{
    return binary_search(num, middle+1, high, nums);
  }
}

int main() {
  int num = 15;
  int nums[] = {1,2,45,60,78,89,90,200,250};
  int low = 0;
  int high = sizeof(nums)/sizeof(nums[0]) - 1;
  cout << "Index is " << binary_search(num, low, high, nums) << endl;
}
