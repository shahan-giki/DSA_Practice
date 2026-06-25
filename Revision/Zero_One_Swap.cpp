#include<iostream>
using namespace std;
void printArray(int array[], int size){
    for(int i=0; i< size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
void sortOne(int array[], int size){
    int left = 0 , right = size-1;
    while (left<right)
    {
        while (array[left]==0)
        {
            left++;
        }
        while (array[right]==1)
        {
            right--;
        }

        swap(array[left],array[right]);
        left++;
        right--;
        
    }
}

int main(){

    int Num[5]= {0,1,1,0,1};
    sortOne(Num,5);
    printArray(Num,5);

    return 0;
}