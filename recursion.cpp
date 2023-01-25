#include <bits/stdc++.h>
using namespace std;
int firstocc(int arr[] , int n, int i , int key)
{
   if(i == n)
      return -1;
   if(arr[i] == key)
   {
      return i;
   }
      return firstocc(arr, n, i+1, key);
}
int lastocc(int arr[], int n, int i, int key)
{
   if(i == n)
   {
   return -1;
   }
   int rest = lastocc(arr,n,i+1,key);
   if(rest!= -1)
   {
      return rest;
   }
   if(arr[i] == key)
   {
   return i;
   }
   return -1;
}
int dec(int n)
{
   if(n == 0 )
   return 0;
   cout<<n<<endl;
   dec(n-1);
}
int Inc(int n)
{
   if(n == 0)
   {
      return 0;
   }
   Inc(n-1);
   cout<<n<<endl;
}
bool sort(int arr[], int n)
{
   if(n == 1)
   return true;

   bool prev = sort(arr+1 , n-1);
   return (arr[0] < arr[1] && prev);
}
int fibona(int n)
{
   if(n == 0 || n == 1)
   return n;
   return fibona(n-1) + fibona(n-2);
    

}
   int fact(int n)
   {
      if(n == 0)
      return 1;
      int prevvalue = fact(n-1);
      return n*prevvalue;
   }
   int power(int n, int p){
      if(p == 0)
      {
         return 1;
      }
      int prevpower = power(n,p-1);
      return n*prevpower;
   }
   int sum(int n)
   {
      if(n == 0)
      {
         return 0;
      }
      int prevnum = sum(n-1);
      return n + prevnum;
   }
    int main()
{
   int arr[10] = {1,2,3,4,5,5,2,-1};
   cout<<lastocc(arr,10,0,2)<<endl;
   cout<<firstocc(arr,5,0,2)<<endl;
   // int n = 10;
   // Inc(n);
   // dec(n);
   // int arr[5] = {1,2,3,4,5};
   // cout<<sort(arr,5)<<endl;
   // int num;
   // cin>>num;
   // int p;
   // cin>>p;
   // cout<<sum(num)<<endl;
   // cout<<power(num,p)<<endl;
   // cout<<fact(num)<<endl;
   // cout<<fibona(num);
       return 0;
 }