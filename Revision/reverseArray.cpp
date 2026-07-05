#include<iostream>
#include<vector>
using namespace std;

vector<int> reverseArray(vector<int> arr){
        int start = 0 , end = arr.size()-1;
        while(start<=end){
            swap(arr[start],arr[end]);
            start++;
            end--;
            }
        return arr;
}
void printArray(vector <int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> Array;
    Array.push_back(12);
    Array.push_back(14);
    Array.push_back(16);
    Array.push_back(18);
    Array.push_back(20);

    vector<int> reverse = reverseArray(Array);
    cout<<endl;
    cout << "The reversed Array is ";
    printArray(reverse);
    cout << endl;

    return 0;
}