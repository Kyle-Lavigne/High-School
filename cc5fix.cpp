#include<iostream>
#include <array>
#include<string>
using namespace std;
int main(){
  int arr1[100], arr2[sizeof(arr1)/sizeof(arr1[0])], i, size, j, counter = 0;
  cout<<"input the size of the array: \n";
  cin>>size;
  cout<<"input the elements of the array: \n";
  for(i=0;i<size;i++){
    cin>>arr1[i];
  }
  for(i=0;i<size;i++){
    if(arr1[i]%2==0){
    arr2[counter]=arr1[i];
    counter++;
    }
  }
    cout<<"The final array is\n";
        for(j=0;j<counter;j++)
               cout<<arr2[j]<<" ";
        return 0;
}
