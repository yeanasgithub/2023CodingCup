// CSUB 2023 Coding Cup
// This is a copy of the solution for the upper section challenge problem 

#include <iostream>
using namespace std;

void show_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to reverse arr[0..i]
void flip_array(int arr[], int index, int max)
{
    int temp, start_index = 0;
    while (start_index < index)
    {
        temp = arr[start_index];
        arr[start_index] = arr[index];
        arr[index] = temp;
        start_index++;
        index--;
    }
	show_array(arr, max);
}

int max_index(int arr[], int n)
{
    int index, i;
    for (index = 0, i = 0; i < n; ++i)
    {
        if (arr[i] > arr[index])
        {
            // Update index of largest element
            index = i;
        }
    }
    return index;
}

//Function to sort array using pancake sort
void sort_array(int arr[], int n)
{
    // Start from the complete array and one by one reduce current size by one
    for (int size = n; size > 1; size--)
    {
        int index = max_index(arr, size);

        // Move the maximum element to end of current array "range"
        if (index != size - 1)
        {
            flip_array(arr, index, n);
            flip_array(arr, size - 1, n);
        }
        //show_array(arr, n);
    }
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
