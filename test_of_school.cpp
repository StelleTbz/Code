#include<bits/stdc++.h>
using namespace std;
long long num,len=1,k;
long long a[10000000]={0};
long long ans=0;
int main(){
    cin>>num>>k;
    for(long long i=0;i<num;i++){
        a[0]++;
        for(int j=0;j+1<len;j++){
            if(a[j]==k){
                ans++;
                a[j]=0;
                a[j+1]++;
            }
        }
        if(a[len-1]==k){
            a[len]=1;
            a[len-1]=0;
            len++;
            ans++;
        }
    }
    cout<<ans;
    return 0;
} 

