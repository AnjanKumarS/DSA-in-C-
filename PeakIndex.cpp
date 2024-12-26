#include<iostream>
using namespace std;

int peakArray(int arr[],int n){
    for (int i = 0; i < n;i++){
        if(!(arr[i]<arr[i+1])){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {0,3,8,9,5,2};
    int n = sizeof(arr) / sizeof(int);
    cout << peakArray(arr, n);
    return 0;
}