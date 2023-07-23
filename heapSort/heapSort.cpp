#include<iostream>
using namespace std;

void heapify(int arr[], int e, int n) {
    int largest = e;
    int left = (2*e)+1;
    int right = (2*e)+2;

    if(left<n && arr[left]>arr[largest]) {
        largest = left;
    }
    if(right<n && arr[right]>arr[largest]) {
        largest = right;
    }
    if(largest != e) {
        int temp = arr[largest];
        arr[largest] = arr[e];
        arr[e] = temp;
        heapify(arr, largest, n);
    }
}

void heapSort(int arr[], int n) {

    for(int i = (n/2)-1; i>=0; i--) {
        heapify(arr, i, n);
    }

    for(int i=n-1; i>0; i--) {
        int temp = arr[i];
        arr[i] = arr[0];
        arr[0] = temp;
        heapify(arr, 0, i);
    }

}

void kthLargestElement(int arr[], int n, int k) {
    if(k>n) return;
    int max=0;
  for(int i = (n/2)-1; i>=0; i--) {
        heapify(arr, i, n);
    }
    
  for(int i=n-1; i >= (n-k); i--) {
      max=arr[0];
      int temp = arr[i];
        arr[i] = arr[0];
        arr[0] = temp;
      heapify(arr,0, i);
  }
  cout<<"Max value is : "<<max<<endl;
}

int main() {
    int arr[] = {16,6,5,12,8,4,1};
    heapSort(arr, 7);    
    for(int i=0; i<7; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    kthLargestElement(arr, 7, 1);
    return 0;
}