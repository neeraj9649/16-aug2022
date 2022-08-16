#include <iostream>
using namespace std;
int binary(int arr[],int l,int u,int f){
    int mid=(l+u)/2;
    if((arr[mid])==f){
        return mid;
    }
    else if(f>arr[mid]){
        l=mid;
        binary(arr,l,u,f);
    }
    else{
        u=mid;
        binary(arr,l,u,f);
    }
}
int main(){
    int t;cin>>t;
    int f;cin>>f;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    cout<<binary(arr,0,t,f);
    return 0;
}