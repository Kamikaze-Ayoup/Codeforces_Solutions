//I hope you like it :) 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long arr[100000];
     long long n , x , y , multply = 0  ;
     cin >> n >> x >> y ;
     if (n > y){
        cout << "-1" << endl;
        return 0;
     }
     for (int i = 0 ; i < n ; i++){
        if (y%n==0)
            arr[i]= y/n;
        else {
            arr[i] = (y/n) + 1 ;
            y--;
        }
        if (arr[i] > 1 && i > 0){
            arr[0]+=arr[i]-1;
            arr[i]=1;
        }
     }
     multply = (arr[0]*arr[0]) + (n-1) ;

     if (multply >= x){
    for (int i = 0 ; i < n ; i++)
        cout << arr[i] << endl;
     }
    else
        cout << "-1" << endl;
}
