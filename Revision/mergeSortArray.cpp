#include<iostream>
using namespace std;

void mergeSort(int arr1[],int n, int arr2[], int m, int arr3[]){
    int i=0, j=0, k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    while(j<m){
        arr3[k++]=arr2[j++];
    }
}
void printArray(int ar[],int size){
    for(int i=0; i < size; i++){
        cout<< ar[i]<< " ";
    }
    cout << endl;
}

int main(){
    int Array1[5]={4,5,7,3,9};
    int Array2[4]={11,21,33,23};
    int Array3[9]= {0};

    mergeSort(Array1,5,Array2,4,Array3);
    printArray(Array3,9);

    return 0;
}