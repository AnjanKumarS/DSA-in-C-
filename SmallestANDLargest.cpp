#include<iostream>
using namespace std;

int main(){
    int n[] = {12,25,65,45,-15};
    int s=INT_MAX;
    int l=INT_MIN;

    for (int i = 0; i < sizeof(n)/sizeof(int);i++){
        if(n[i]<s){
            s = n[i];
        }
        if(n[i]>l){
            l = n[i];
        }
    }
    cout << s << " : " << l;
    return 0;
}
