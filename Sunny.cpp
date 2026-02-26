#include<bits/stdc++.h>
using namespace std;
//consts
//values
//fundef
//main
int main(){
    int s,cnt=0;
    cin>>s;
    for(int i=(int)sqrt(1.0*s);i>0;i--){
        if(s%i==0){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
//funcdo 
