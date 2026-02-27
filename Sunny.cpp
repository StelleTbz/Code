#include<bits/stdc++.h>
using namespace std;
//consts
//values
//fundef
inline void pus();
//main
int main(){
    int h,s,m,dt,t;
    cin>>h>>m>>s>>dt;
    t=dt+s+60*m+3600*h;
    cout<<t%3600<<" "<<t/3600%60<<" "<<t%60;
    pus();
    return 0;
}
//funcdo 
inline void pus(){
    cout<<endl<<endl<<endl;
    system("pause");
}