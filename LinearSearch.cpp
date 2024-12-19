#include<iostream>
using namespace std;

int linearSearch(int arr[],int size, int tar){
    for (int i = 0; i < size;i++){
        if(arr[i]==tar){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1, 5, 6, 4, 3, 8};
    int size = sizeof(arr) / sizeof(int);
    int tar = 8;
    cout << linearSearch(arr, size, tar);
    return 0;
}