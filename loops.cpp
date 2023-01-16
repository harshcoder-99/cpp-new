#include <bits/stdc++.h>
using namespace std;
int main(){
    /*
    int x,y,q,r;
    cin>>x>>y;
    q = x/y;
    r = x%y;
    cout<<q<<endl;
    cout<<r;*/
    //----------------------biggest of 3 number--------------------
    // int a,b,c,big;
    // cin>>a>>b>>c;
    // if(a>b){
    //     if(a>c)
    //     big = a;
    //     else
    //     big = c;

    // }
    // else{
    //     if(b>c)
    //     big = b;
    //     else
    //     big = c;
    // }
    // cout<<big;
    //----------------------1 to 10 number--------------------------
    // int d =1;
    // while(d<=10){
    // cout<<d<<" ";
    // d++;
    // }
    //---------------------------10 to 2 ---------------------------
    // int n = 10;
    // while(n>0){
    //     cout<<n<<" ";
    //     n-=2;
    // }
    //----------------sum of digits---------------------------------
    // int num,sum=0,rem;
    // cin>>num;
    // while(num>0){
    //     rem = num%10;
    //     sum+=rem;
    //     num/=10;
    // }
    // cout<<sum;
    //-------------------product of digits---------------------------
    // int n,pro=1,rem;
    // cin>>n;
    // while(n){
    //     rem=n%10;
    //     pro*=rem;
    //     n/=10;
    // }cout<<pro;
    //---------------factorial---------------------------------------
        // long long n,fact=1;
    // cin>>n;
    // while(n){
    //     fact*=n;
    //     n--;
    // }
    // cout<<fact;
    //------------------------count no of digits----------------------
    // int n,count=0,rem;
    // cin>>n;
    // do{
    //     rem=n%10;
    //     count++;
    //     n/=10;
    // }while(n);
    // cout<<count;
    //---------------------------fabonnaci serie-----------------------
    // int a,b,c,n;
    // cin>>n;
    // a = 0 , b = 1;
    // cout<<a<<" "<<b<<" ";
    // for(int i = 0 ; i <= n; i++){
    // c = a+b;
    // cout<<c<<" ";
    
    //     a = b;
    //     b = c;
    // }
    /*-------------------------armstrong number------------------------*/
    int n, sum =0, rem,count =0;
    cin>>n;
    int num = n;
    while(num){
        num/=10;
        count++;
    }
    cout<<"number of digits "<<count<<endl;;
    num = n;
    for(int i = 0; i<=n; i++){
        rem = num%10;
        sum+=pow(rem,count);
        num/=10;
    }
    if(sum == n){
        cout<<"it is a armstrong number";

    }else
    cout<<"not an armstrong number";

    return 0;
}