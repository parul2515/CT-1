#include <iostream>
using namespace std;
// this is the function which prints all the subarrays having the sum zero;
void printallsubarrays(int nums[],int n){
    // here we consider all the subarrays starting from 'i'//
    for(int i=0;i<n;i++){
        int sum=0;
// and here we consider the subarrays ending  at 'j';
        for(int j=i;j<n;j++){
            sum+=nums[j];

            if(sum==0){
                cout<<"{";
                for(int it=i;it<=j;it++){
                    cout<<nums[it]<<",";
                }
                cout<<"}";
                cout<<endl;
            }
        }
    }
}
int main(){
    cout<<"Enter the size of the array";
    cout<<endl;
    int n;
    cin>>n;
    int numarr[n];
    for(int i=0;i<n;i++){
        cin>>numarr[i];
    }
    printallsubarrays(numarr,n);
   

}