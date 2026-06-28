#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    int peakIndexInMountainArray(vector<int>& arr){
        int start = 0;
        int end = arr.size()-1;
        while(start<end){
            int mid = start+(end-start)/2;
            if(arr[mid]<arr[mid+1]){
                start=mid+1;
            }else{
                end=mid;
            }
        }
        return start;
        
    }
};

int main(){
    solution obj;
    vector<int> arr = {0, 2, 4, 7, 5, 3, 1};
    int peakIndex = obj.peakIndexInMountainArray(arr);
    cout<<"Peak Index "<< peakIndex<<endl;
    cout<<"Peak Value "<< arr[peakIndex]<<endl;

    return 0;
}