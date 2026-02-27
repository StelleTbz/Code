#include<bits/stdc++.h>
using namespace std;
//consts
//values
//fundef
inline void pus();
//main
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0) cout<<i<<"\n";
    }
    // pus();
    return 0;
}
//funcdo 
inline void pus(){
    cout<<endl<<endl<<endl;
    system("pause");
}