#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {1,2,7,8,6,4,5};
    int n = sizeof(arr) / sizeof(int);
    vector<int> ans;
    int target = 9;

    for (int i = 0; i < n;i++){
        for (int j = i + 1; j < n;j++){
            if(arr[i]+arr[j]==target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    cout << ans[0] << " " << ans[1] << endl;
}