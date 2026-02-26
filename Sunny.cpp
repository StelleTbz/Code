#include<bits/stdc++.h>
using namespace std;
//consts
//values
//fundef
bool jdg(int);
//main
int main(){
    int y,m;
    cin>>y>>m;
    if(m==1 or m==3 or m==5 or m==7 or m==8 or m==10 or m==12) cout<<31;
    else if( m==4 or m==6 or m==9 or m==11 ) cout<<30;
    else if(jdg(y)) cout<<29;
    else cout<<28;
    return 0;
}
//funcdo 
bool jdg(int n){
    if(n%100==0) n/=100;
    return n%4==0;
}