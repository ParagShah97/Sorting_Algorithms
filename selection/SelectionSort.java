import java.util.*;

class SelectionSort {

public static void main(String args[]) {

int arr [] = {6,3,8,14,7,2};	// initialse an array
int initialArr[] = arr.clone();	// clone initial array
int first, second, min, temp;  // declare needed variables
first = second = min = temp = 0;	// initialze the value of all the variables
boolean isSwap = false;		// isSwap an flag variable that trigger swapping action only when required.
int length = arr.length;	// length of an array

for ( ;first < (length-1); first+=1) { // outer loop for fixing the sorted values 0 --> lenght - 2
isSwap = false;
for(second = first+1, min = first ; second < length; second+=1) {
// inner loop for comparing the values first --> lenght - 1
if(arr[min] > arr[second]) {
isSwap= true;
min = second;
}
}

if(isSwap) {	// swap when arr[min] is greater
temp = arr[min];
arr[min] = arr[first];
arr[first] = temp;

}

}

// Print the initial and sorted array as a string.
System.out.println(Arrays.toString(initialArr));
System.out.println(Arrays.toString(arr));
}
}