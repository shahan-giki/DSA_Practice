// Finding first and last element in a sorted Array.
// Code Studio Problem

#include<iostream>
using namespace std;

int binarySearchFirst(int array[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end) {

        if (array[mid] == key) {
            ans = mid;
            end = mid - 1;
        }
        else if (key < array[mid]) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int binarySearchLast(int array[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end) {

        if (array[mid] == key) {
            ans = mid;
            start = mid + 1;
        }
        else if (key < array[mid]) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int main() {

    // Array must be sorted
    int even[10] = {0, 1, 3, 4, 5, 5, 5, 6, 7, 8};

    int FirstIndex = binarySearchFirst(even, 10, 5);
    cout << "The First index of 5 is " << FirstIndex << endl;

    int LastIndex = binarySearchLast(even, 10, 5);
    cout << "The Last index of 5 is " << LastIndex << endl;

    return 0;
}