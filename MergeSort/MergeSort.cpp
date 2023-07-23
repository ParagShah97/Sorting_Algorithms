#include<iostream>
using namespace std;


void merge(int arr[], int l,int mid, int r) {
// We need to create 2 sub arrays with size n1 and n2
int n1 = mid-l+1;	// left small array
int n2 = r-mid;		// right small array

int a[n1];	// declare array a of size n1
int b[n2];	// declare array b of size n2	

// Loop for populating left small array
for(int i=0;i<n1;i+=1) {
a[i]=arr[l+i];
}

// Loop for populating right small array
for(int i=0;i<n2;i+=1) {
b[i]=arr[mid+1+i];
}


// decalare need variables
int i=0;	// for left small array
int j=0;	// for right small array
int k=l;	// for main array

// Loop for comparing elements of 2 array and smallest goest to main array(arr)
while(i<n1 && j<n2){

// if left small array element value is small
if(a[i]<b[j]) {
arr[k] = a[i];	// populate to main array
i++;
k++;
}
// if right small array element value is small
else {
arr[k] = b[j];	// populate to main array
j++;
k++;
}
}

// Loop for ramaining values in left small array
while(i<n1) {
arr[k] = a[i];
i++;
k++;
}
// Loop for ramaining values in right small array
while(j<n2) {
arr[k] = b[j];
j++;k++;
}
}

// Merge Sort function to be called recusively, pass array, leftmost index, rightmost index
void mergeSort(int arr[], int l, int r) {
// base condition recrsion till left is less than right.
if (l < r) 
{
int mid = (l+r)/2;		// min to divide the array or (l + (l-r)/2 )

mergeSort(arr, l, mid);		// recursive call for left partition from l to mid.
mergeSort(arr, mid+1, r);	// recursive call for right partition from mid+1 to r.

merge(arr, l, mid, r);	// merge function for mergin and sorting the divided element.
}
}


int main() {

int arr[] = {4,1,6,2, 6,8,3,77,89,66,33,22,15,698,23,32};		// array to be sorted
int length = sizeof(arr)/sizeof(arr[0]);		// calculate length of an array
mergeSort(arr,0,length-1);	// call merge sort function with 0th and last index 
for(int i=0;i<length;i++){
cout<<arr[i]<<" ";	// Show Sorted array.
}
cout<<endl;
return 0;
}
