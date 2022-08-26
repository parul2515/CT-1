#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int longestsubarray(int a[],int n,int k){
    int i=0;
    int j=0;
    int sum=0;
    int maxlen=INT_MIN;
    while(j<n){
        sum+=a[j];
        if(sum<k){
            j++;
        }
        else if(sum==k){
            maxlen=max(maxlen,j-i+1);
            j++;

        }
        else if(sum>k){
            while(sum>k){
                sum-=a[i];
                i++;
            }
            if(sum==k){
                maxlen=max(maxlen,j-i+1);
            }
            j++;
        }
    }
    return maxlen;

}
int main(){
int n;
cin>>n;
int arr[n];
int k;
cin>>k;
cout<<longestsubarray(arr,n,k);
}