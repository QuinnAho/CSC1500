#include <iostream>

using namespace std;

int arr1[10]= {1,3,7,5,2,4,6,8,9,10};
int arr2[10]= {10,9,8,7,6,5,4,3,2,1};
int arr3[10]= {1,10,2,9,3,8,4,7,5,6};

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int bubbleSort(int arr[], int size){

    int totalIterations = 0;

    for(int i = 0; i < size; i++){
        int iterations = 0; // Counter variable for iterations
        bool isSorted = true; // Flag to check if array is sorted
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSorted = false; // Array is not sorted yet
            }
            iterations++; // Increment the counter
        }
        totalIterations += iterations;
        if(isSorted){
            break; // Array is sorted, exit the loop
        }
    }

    return totalIterations;
}

int main() {

    cout << "First array (before sorting): " << endl;
    printArray(arr1, 10);
    int totalIterationsFirst = bubbleSort(arr1, 10);
    cout << "First array (after sorting): " << endl;
    printArray(arr1, 10);
    cout << "Total number of iterations: " << totalIterationsFirst << endl << endl;

    cout << "Second array (before sorting): " << endl;
    printArray(arr2, 10);
    int totalIterationsSecond = bubbleSort(arr2, 10);
    cout << "Second array (after sorting): " << endl;
    printArray(arr2, 10);
    cout << "Total number of iterations: " << totalIterationsSecond << endl << endl;

    cout << "Third array (before sorting): " << endl;
    printArray(arr3, 10);
    int totalIterationsThird = bubbleSort(arr3, 10);
    cout << "Third array (after sorting): " << endl;
    printArray(arr3, 10);
    cout << "Total number of iterations: " << totalIterationsThird << endl;

    return 0;
}
