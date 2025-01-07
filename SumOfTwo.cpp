#include<iostream>
using namespace std;

void sumofTwo(int arr[],int n,int t){
    for (int i = 0; i < n;i++){
        for (int j = i + 1; j < n;j++){
            if(t==arr[i]+arr[j]){
                cout << i << " " << j << endl;
                return;
            }
        }
    }
}

int main(){
    int arr[] = {1,5,6,3};
    int n = sizeof(arr) / sizeof(int);
    int t = 4;
    sumofTwo(arr, n, t);
    return 0;
}