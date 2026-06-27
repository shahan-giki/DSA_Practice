#include<iostream>
using namespace std;

int binarySearch(int array[], int size, int key){
    int start = 0;
    int end = size -1;
    int mid = start+(end-start)/2;

    while (start<=end)
    {
        if(array[mid]==key){
            return mid;
        }
        if(key<array[mid]){
            end=mid-1;
        }
        if(key>array[mid]){
            start=mid+1;
        }
        mid = start+(end-start)/2;
    }

    return -1;
}
int main(){
    int even[6]={0,1,3,4,5,6};
    int odd[7]={1,4,5,6,7,8,66};

    int index = binarySearch(even,6,5);
    cout<<"The index of 5 is " << index << endl;

    return 0;
}