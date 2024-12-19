#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,0,-8,56,7};
    int n = sizeof(arr) / sizeof(int);
    int maxsum = INT_MIN;

    for (int st = 0; st < n;st++){
        int cursum = 0;
        for (int end = st; end < n;end++){
            cursum += arr[end];
            maxsum = max(cursum, maxsum);
        }
    }
    cout << "MaxSubArray Sum : " << maxsum << endl;
    return 0;
}