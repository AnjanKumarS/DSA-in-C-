#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 1,8,8,2,9};

    int ans = 0;
    for(int a : arr){
        ans = ans ^ a;
    }
    cout << ans;
    return 0;
}