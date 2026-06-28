#include<iostream>
using namespace std;

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
int main(){
    int array[7]={7,8,1,2,3,4,5};
    int size = 7;
    cout<<"Pivot Element is "<<pivotElement(array,7);
    return 0;
}