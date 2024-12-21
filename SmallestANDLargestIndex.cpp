#include<iostream>
using namespace std;

int main(){
    int n[] = {10,52,63,-10,-99,0,45};
    int s=INT_MAX;
    int l=INT_MIN;
    int si = 0;
    int li = 0;

    for (int i = 0; i < sizeof(n) / sizeof(int);i++){
        if(n[i]<s){
            s = n[i];
            si = i;
        }
        if(n[i]>l){
            l = n[i];
            li = i;
        }
    }
    cout << s << " : " << l << endl;
    cout << si << " : " << li;
    return 0;
}