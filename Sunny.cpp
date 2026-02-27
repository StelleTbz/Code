#include <bits/stdc++.h>
using namespace std;
// consts
// values
// fundef
inline void pus();
// main
int main()
{
    int m,n;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        if(i%m!=0) cout<<i<<endl;
    }
    // pus();    //remember to "//" here!!!!
    return 0;
}
// funcdo
inline void pus(){
    cout<<endl<<endl<<endl;
    system("pause");
}