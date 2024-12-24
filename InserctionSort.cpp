#include<iostream>
using namespace std;

int main(){
    int a[] = {5,6,1,4,8,3};
    int n = sizeof(a) / sizeof(int);

    for (int i = 0; i < n;i++){
        int t = a[i];
        int j = i - 1;
        while(j>=0 && t<a[j]){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = t;
    }

    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
    }
}