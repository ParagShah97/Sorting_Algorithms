import java.util.*;

class BubbleSort {

public static void main(String gg[]) {

//int arr[] = {6,3,8,14,7,2};
 int arr[] = {64, 34, 25, 12, 22, 11, 90};	// initialize an array
int show[] = arr.clone();	// clone the array 
int pass, comp, temp;	// initialize required variables
pass = comp = temp= 0;	// declare required variables
boolean isSwap = false;	// flag variable for optimize  
int length = arr.length;	// array length

for(;pass < length - 1; pass+=1 ) {	
// Outer loop for Pass from [ 0 to n-1 )
isSwap = false;		// isSwap false every time start of pass
for(comp = 0; (comp < length - pass - 1); comp+=1) {
// Inner loop for Comparision from [ 0 to n-pass-1 )
if(arr[comp] > arr[comp+1]) {	// Condition to check isGreater
temp = arr[comp];
arr[comp] = arr[comp+1];
arr[comp+1]=temp;
isSwap = true; // isSwap true if atleast one swap
}

}
if(!isSwap) break;	// Optimize as in whole pass no swap so break
}

System.out.println("Initial array: "+Arrays.toString(show));
System.out.println("Sorted array: "+Arrays.toString(arr));

}	// end of main
}