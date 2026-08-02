#include<iostream>
using namespace std;

int main(){
    /*
    int arr[10]={11,3,4,5,6,7,8,};
    int *ptr=&arr[0];
    cout<<*ptr<<endl;
    cout << &ptr << endl;
    cout<< &ptr[0] << endl;
    cout<< &ptr[1] << endl;
    cout<< &ptr[2] << endl;
    cout<< &ptr[3] << endl;
    cout<< &ptr[4] << endl;
    cout<< &ptr[5] << endl;
    cout<< arr[5] << endl;
    cout << *(arr+4) << endl;
    cout << arr[4] << endl;
    cout << *arr+1 << endl;
    cout << *(arr)+1 << endl;
    cout << *(arr+2) << endl;
    */
   int x = 40;
   int *ptr = &x;
   int **ptr2 = &ptr;
    return 0;
}

