#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {21,18,5,32,23};
    //------------------------------------SELECTION SORT-------------------------------
    // for(int i = 0; i<=4 ; i++){
    //     for(int j = i+1; j<=5; j++ ){
    //         if(arr[j]< arr[i]){
    //         int temp = arr[j];
    //         arr[j] = arr[i];
    //         arr[i] = temp;
    //         }
    //     }
    // }
    //---------------------------------BUBBLE SORT------------------------------------
    // int counter = 0;
    // while(counter < 5){
    //     for(int i = 0; i<=4; i++){
    //         if(arr[i] > arr[i+1]){
    //             int temp = arr[i];
    //             arr[i] = arr[i+1];
    //             arr[i+1] = temp;
    //         }
    //     }
    //     counter++;
    // }
    //--------------------------------INSERTION SORT----------------------------------
    // for(int i = 1; i < 5; i++){
    //     int current =  arr[i];
    //     int j = i-1;
    //     while(arr[j] > current && j >= 0 ){
    //         arr[j+1] = arr[j];
    //         j--;
    //     }
    //     arr[j+1] = current;
    // }
    for(int i = 0; i<= 4; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}