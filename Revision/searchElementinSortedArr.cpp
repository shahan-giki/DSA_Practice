#include<iostream>
using namespace std;

int binarySearch(int array[],int s,int e, int key){
    int start = s;
    int end = e;
    while(start<=end){
        int mid= start+ (end-start)/2;
        if(array[mid]==key){
            return mid;
        }
        if(key<array[mid]){
            end= mid-1;
        }
        else
        {
        start = mid+1;
        }
    }
        return -1;
}

int pivotElement(int arr[],int size){
    int start=0;
    int end= size-1;
    while(start < end){
        int mid = start+(end-start)/2;
        if (arr[mid]>=arr[0]){
            start=mid+1;
        }else{
            end=mid;
        }
    }
    return start;
}

int findPosition(int array[], int size, int key){
    int pivot = pivotElement(array, size);
    if(key<=array[size-1] && key>=array[pivot]){

        return binarySearch(array,pivot,size-1,key);
        }
        else{
            return binarySearch(array,0,pivot-1,key);
        }
}
int main() {
    int array[] = {7, 9, 1, 2, 3};
    int size = sizeof(array) / sizeof(array[0]);

    int key;

    cout << "Enter the element to search: ";
    cin >> key;

    int index = findPosition(array, size, key);

    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}