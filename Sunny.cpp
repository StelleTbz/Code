#include<bits/stdc++.h>
using namespace std;
//consts
//values
//fundef
bool jdg(int);
//main
int main(){
    int bg,ed,sum=0;
    cin>>bg>>ed;
    for(int i=bg+1;i<ed;i++){
        if(jdg(i)) {
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}
//funcdo 
bool jdg(int n){
    if(n%100==0) n/=100;
    return n%4==0;
}