#include<bits/stdc++.h>
using namespace std;
//consts
//values
//fundef
bool jdg(int);
//main
int main(){
    int n,cnt=0,sum=0;
    cin>>n;
    for(int i=1;i<n;i++){
        cnt+=i;
        sum+=cnt;
    }
    cout<<sum;
    return 0;
}
//funcdo 
bool jdg(int n){
    if(n%100==0) n/=100;
    return n%4==0;
}