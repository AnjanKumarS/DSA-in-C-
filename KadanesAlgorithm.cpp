#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,0,-8,56,7};
    int n = sizeof(arr) / sizeof(int);
    int cursum = 0, maxsum = 0;

    for(int val : arr){
        cursum += val;
        maxsum = max(cursum, maxsum);

        if(cursum<0){
            cursum = 0;
        }
    }
    cout << maxsum;
}