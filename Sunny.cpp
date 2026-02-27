#include <bits/stdc++.h>
using namespace std;
// consts
// values
// fundef

// main
int main()
{
    int x,y,z,q;
    cin>>x>>y>>z>>q;
    int sum=2*x+5*y+3*z;
    if(sum<=q) cout<<"Yes"<<endl<<(int)abs(sum-q);
    else cout<<"No"<<endl<<(int)abs(sum-q);

    //getchar();    //remember to "//" here!!!!
    return 0;
}
// funcdo
