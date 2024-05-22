#include<iostream>
#include <bits/stdc++.h>
using namespace std;



int main()
{
    int target,n;
    cin>>target>>n;
    int count =0;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if((arr[i]+arr[j])==target){
                count++;
            }
        }
        
    }
    cout<<count;
    


    return 0 ; 
}