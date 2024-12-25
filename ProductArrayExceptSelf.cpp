#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(int);
    int x = 0;

    while(x<n){
        int p = 1;
        for (int i = 0; i < n;i++){
            if(x!=i){
                p *= arr[i];
            }
        }
        x++;
        cout << p << " ";
    }

    // for (int i = 0; i < n;i++){
    //     int sum = 1;
    //     for (int j = 0; j < n;j++){
    //         if(i!=j){
    //             sum *= arr[j];
    //         }
    //     }
    //     cout << sum << " ";
    // }
}