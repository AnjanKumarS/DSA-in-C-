#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    vector<int> ans;
    int i = 0, j = n - 1;
    int target = 9;

    while (i < j) {
        int pairsum = arr[i] + arr[j];
        if (pairsum > target) {
            j--;
        } else if (pairsum < target) {
            i++;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            break;  // Exit the loop once a pair is found
        }
    }

    if (!ans.empty()) {
        cout << ans[0] << ", " << ans[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }
    
    return 0;
}
