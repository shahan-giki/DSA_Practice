#include<iostream>
using namespace std;

void swapElement(int array[], int size){
    for (int i=0; i < size; i +=2){
        if(i+1 < size){
            swap(array[i],array[i+1]);
        }
    }   
}
void printArray(int array[], int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int evenArray[4]={3,4,7,0};
    int arrayOdd[7]={0,3,65,8,5,22,56};
    
    swapElement(evenArray,4);
    printArray(evenArray,4);

    swapElement(arrayOdd,7);
    printArray(arrayOdd,7);
    return 0;
}