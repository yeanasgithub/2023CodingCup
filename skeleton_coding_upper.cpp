// Participant's Name:
// Time of Submission: 
// CSUB 2023 Coding Cup
// This is a skeleton file for the upper section challenge problem 
// This file should not be altered once the competition is over. 
// Any file that is altered afterwards will be automatcially disqualitied 
// for the competition.

#include <iostream>
using namespace std;

void show_array(int arr[], int n)
{
   
}


void sort_array(int arr[], int n)
{
   
}

int main()
{
    // given array
	int arr[] = {54, 85, 52, 25, 99, 75, 25, 11, 68};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Input array: ";
    show_array(arr, n);
    sort_array(arr, n);
    cout << "Sorted array: ";
    show_array(arr, n);
	cout << "===========================================" << endl;

	// validation check #1
    int arr1[] = {7, 5, 3, 4, 8, 1, 2, 6};
    n = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Input array1: ";
    show_array(arr1, n);
    sort_array(arr1, n);
    cout << "Sorted array: ";
    show_array(arr1, n);
	cout << "===========================================" << endl;

	// validation check #2
    int arr2[] = {1, 0, 0, 1, 0, 0, 1, 0};
    n = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Input array2: ";
    show_array(arr2, n);
    sort_array(arr2, n);
    cout << "Sorted array: ";
    show_array(arr2, n);
	cout << "===========================================" << endl;
}
