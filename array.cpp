#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int arr[n];

   for(int i = 1; i<= n; i++){
    cin>>arr[i];

   }
   for(int i = 1; i<= n; i++ ){
    cout<<arr[i]<<" ";;
   }
   cout<<endl;
   int sum = 0;
   for(int i = 1; i <= n; i++){
    sum+=arr[i];
   }
   cout<<"sum of array is : "<<sum<<endl;
   int MaxInt = INT_MIN;
   int MinInt = INT_MAX;
   for(int i = 1; i <= n; i++){
    MaxInt = max(MaxInt,arr[i]);
    MinInt = min(MinInt,arr[i]);
   }
   cout<<"Biggest number in array arr[] is : "<<MaxInt<<endl;
   cout<<"Smallest number in array arr[] is : "<<MinInt<<endl;
    return 0;
}