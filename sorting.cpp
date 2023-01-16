#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {1,9,5,32,23};

    for(int i = 1; i<= 5; i++){
        for(int j = 1; j<=i; j++ ){
            if(arr[j]> arr[i])
            int x = arr[j];
            arr[i] = arr[j];
        }
    }

    return 0;
}