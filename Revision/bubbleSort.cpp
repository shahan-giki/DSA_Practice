#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &array, int size){
    bool swapped= false;
    for(int i=1;i<size;i++){
        for(int j=0;j<size-i;j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
            break;
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

    bubbleSort(array, 6);

    cout << "The sorted Array is: ";

    printArray(array, 6);

    return 0;
}