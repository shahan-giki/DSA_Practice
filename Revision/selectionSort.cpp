#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> &arr, int size) {
    for(int i = 0; i < size - 1; i++) {
        int minIndex = i;

        for(int j = i + 1; j < size; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

void printArray(vector<int> &arr, int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    vector<int> array = {8,6,4,23,45,65};

    selectionSort(array, 6);

    cout << "The sorted Array is: ";

    printArray(array, 6);

    return 0;
}