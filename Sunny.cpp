#include<bits/stdc++.h>
using namespace std;
//consts
//values
//fundef
inline void pus();
//main
int main(){
    long double k,c,f;
    cin>>k;
    c=k-273.15;
    f=1.8*c+32;
    if(f>212){
        cout<<"Temperature is too high!";
    }
    else {
        cout<<fixed<<setprecision(2)<<c<<" ";
        cout<<fixed<<setprecision(2)<<f;
    }
    pus();
    return 0;
}
//funcdo 
inline void pus(){
    cout<<endl<<endl<<endl;
    system("pause");
}