#include<iostream>
using namespace std;

void swap(int arr[], int i, int j) {
int temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}

int partition(int arr[],int l,int r) {
int pivot = arr[r];
int i = l-1;
for(int j=l; j<r; j += 1) {
if(arr[j]<pivot) {
i += 1;
swap(arr,i,j);
}
}
i += 1;
swap(arr, i, r);
return i;

}


void quickSort(int arr[],int l,int r) {


if( l<r ) {

int pivot = partition(arr, l, r);
quickSort(arr, l, pivot-1);
quickSort(arr, pivot+1, r);

}

}


int main() {

int arr[] = {4,1,6,2, 6,8,3,77,89,66,33,22,15,698,23,32};		// array to be sorted
int length = sizeof(arr)/sizeof(arr[0]);
quickSort(arr, 0, length-1);
for(int i=0;i<length;i++){
cout<<arr[i]<<" ";	// Show Sorted array.
}
cout<<endl;
return 0;

}