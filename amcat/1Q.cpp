#include<bits/stdc++.h>
using namespace std;


void merge(int arr[], int low, int mid, int high){
  
  
  int n1 = mid-low+1;
  int n2 = high-mid;
  
  
  int arr1[n1];
  int arr2[n2];
  
  int k = 0;
  while(k < n1){
    arr1[k] = arr[k+low];
    k++;
  }
  cout << " arr1 : ";
  for(int i : arr1){
    cout << i << " ";
  }
  cout << endl;
  k = 0;
  while(k < n2){
    arr2[k] = arr[k+mid+1];
    k++;
  }
  
  
  int i = 0, j = 0, index = low;
  while(i < n1 && j < n2){
    if(arr1[i] > arr2[j]){
      arr[index] = arr2[j];
      j++;
    }
    else {
      arr[index] = arr1[i];
      i++;
    }
    index++;
  }
  
  
  while(i < n1){
    arr[index] = arr1[i];
    i++;
    index++;
  }
  while(j < n2){
    arr[index] = arr2[j];
    j++;
    index++;
  }

}


void mergeFunction(int arr[], int low, int high){
 
  if(low < high){
    int mid = low + ((high-low)/2);
    mergeFunction(arr, low, mid);
    mergeFunction(arr, mid+1, high);
    merge(arr, low, mid, high);
  }

}


int main() {
  int arr[] = {2, 4, 1, 3};

  mergeFunction(arr, 0, 4-1);
  for(auto i : arr){
    cout << i << " ";
  }
}