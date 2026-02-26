#include<bits/stdc++.h>
using namespace std;
//consts
//values
//fundef
//main
int main(){
    int h,s,m,sum=0;
    char ap;
    cin>>h>>m>>s>>ap;
    if(ap=='P') sum+=12*3600;
    sum+=h*3600+m*60+s;
    cout<<sum;
    return 0;
}
//funcdo 
