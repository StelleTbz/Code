#include <bits/stdc++.h>
using namespace std;
// consts
// values
// fundef
inline void pause();
// main
int main()
{
    int l,r,k;
    long long cnt=0;
    cin>>k>>l>>r;
    for(int i=l;i<=r;i++){
        if(i%10==k||i%k==0) cnt+=i;
    }
    cout<<cnt;
    pause();    //remember to "//" here!!!!
    return 0;
}
// funcdo
inline void pause(){
    cout<<endl<<endl<<endl;
    system("pause");
}