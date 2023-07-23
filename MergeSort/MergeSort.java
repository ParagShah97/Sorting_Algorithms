import java.util.*;

class MergeSort {

public static void merge(int arr[], int l, int mid, int r) {

int n1 = mid-l+1;
int n2 = r-mid;

int a[] = new int[n1];
int b[] = new int[n2];

for (int i=0; i<n1; i+=1) {
a[i]=arr[l+i];
}
for (int i=0; i<n2; i+=1) {
b[i]=arr[mid+1+i];
}

System.out.println("small arrays: "+Arrays.toString(a)+" & "+Arrays.toString(b));

int i=0; // left array
int j=0; // right array	
int k=l; // actual array	

while( i<n1 && j<n2 ) {

if(a[i]<b[j]) {
arr[k] = a[i];
i++;k++;

} else {
arr[k] = b[j];
j++;k++;
}

}

while(i<n1) {
arr[k]=a[i];
i++;k++;
}
while(j<n2) {
arr[k]=b[j];
j++;k++;
}
}


public static void mergeSort(int arr[], int l, int r) {

if (l < r) {
//int mid = l + (r-l)/2;
int mid = (l+r)/2;

mergeSort(arr, l, mid);
mergeSort(arr, mid+1, r);

merge(arr, l, mid, r);
}

}


public static void main (String gg[]) {

int arr [] = {4,1,6,2, 6,8, 11, 96,32,65,12};		// array to be sorted
mergeSort(arr, 0, arr.length-1);
System.out.println("Sorted array: "+Arrays.toString(arr));

}

}