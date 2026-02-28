#include<bits/stdc++.h>
using namespace std;
//consts
//values
//fundef
inline void pus();
//main
int main(){
    int n,x,cnto=0,cnte=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x%2==1) cnto++;
        else cnte++;
    }
    cout<<cnto<<" "<<cnte;
    //main work part end
    pus();
    return 0;
}
//funcdo 
inline void pus(){
    cout<<endl<<endl<<endl;
    system("pause");
}