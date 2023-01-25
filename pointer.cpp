#include <bits/stdc++.h>
using namespace std;
int *reference(int n){
    return &n;
}
int main(){
    // int var = 21;
    // int* p = &var;
    // cout<<*p<<endl;
    // cout<<p<<endl;
    // int arr[10] = {1,56,67,34,23};
    
    // int* pt = arr;
    // for(int i = 0; i < 5; i++){
    //     cout<<pt[i]<<endl;
    // }
    int A = 10;
    int* ptr ;
    cout<<&A<<endl;
    ptr = reference(A);
    cout<<ptr<<endl;
    return 0;
}