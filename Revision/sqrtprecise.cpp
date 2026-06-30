#include<iostream>
using namespace std;

    int mySqrt(int x) {
        int start = 0;
        int end = x;
        int ans = -1;

        while (start <= end) {
            long long int mid = start + (end - start) / 2;
            long long int square = mid * mid;

            if (square == x) {
                return mid;
            }

            if (square < x) {
                ans = mid;
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return ans;
    }
double precise(int mysqrt,int precision, int tempsol){
    double factor = 1;
    double ans = tempsol;

    for(int i=0;i<precision;i++){
        factor= factor/10;
        for(double j=ans;j*j<mysqrt; j=j+factor){
            ans=j;
        }
    }
return ans;
}
int main(){
int num;
cin >> num;
int sq= mySqrt(num);
double presqb = precise(num,3,sq);
cout<<"The answer is " << presqb;
return 0;
}
