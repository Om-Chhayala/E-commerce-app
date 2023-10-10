#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int count = 1;
    int ans[n];
    for(int i=0;i<n;i++){
        if(arr[i] == count){
            count++;
            ans[i] = count;
            count++;
        }
        else{
            
            ans[i] = count;
            count++;
        }
    }
    cout<<ans[n-1]<<endl;
}



int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }



}