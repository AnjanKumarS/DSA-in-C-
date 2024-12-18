#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> vec;

    vector<int> vec = {1, 2, 3,4,5};
    // cout << vec[5] << endl;

    //vector<int> vec(5, 1);
    // cout << vec[0] << endl;
    // cout << vec[1] << endl;
    // cout << vec[2] << endl;
    // cout << vec[3] << endl;
    // cout << vec[4] << endl;
    // cout << vec[5] << endl;

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);

    vec.pop_back();
    vec.pop_back();

    cout << "Front : " << vec.front() << endl;
    cout << "Back : " << vec.back() << endl;

    cout << "At : " << vec.at(2) << endl;

    cout << "Size : " << vec.size() <<endl;

    for(int i : vec){
        cout << i << " ";
    }

    return 0;
}