#include<iostream>
using namespace std;

int binarySearch(int arr[],int t,int st,int end){
    if(st<=end){
        int mid = st + (end - st) / 2;

        if(t>arr[mid]){
            return binarySearch(arr, t, mid + 1, end);
        }
        else if(t<arr[mid]){
            return binarySearch(arr, t, st, mid - 1);
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int t = 10;
    int st = 0;
    int end = sizeof(arr) / sizeof(int);

    cout << binarySearch(arr, t,st,end) << endl;
    return 0;
}