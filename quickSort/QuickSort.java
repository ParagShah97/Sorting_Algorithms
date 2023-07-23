import java.util.*;

class QuickSort {

public static void swap(int arr[], int i, int j) {
int temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}

public static int partition(int arr[], int l, int r) {

int pivot = arr[r];
int i = l-1;
for (int j=l; j<r; j += 1) {
if(arr[j] < pivot) {
i++;
swap(arr,i,j);
}
}
i++;
swap(arr,i,r);
return i;
}

public static void quickSort(int arr[], int l, int r) {

if(l<r) {

int pivot = partition(arr, l, r);
quickSort(arr, l, pivot-1);
quickSort(arr, pivot+1, r);

}
}

public static void main(String args[]) {

int arr[] = {4,1,6,2, 6,8,3,77,89,66,33,22,15,698,23,32};		// array to be sorted
quickSort(arr, 0, arr.length-1);
System.out.println("Sorted array is "+ Arrays.toString(arr));


}

}