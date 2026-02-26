#include<bits/stdc++.h>
const char _myflag[]="World needs Sunday!";
using namespace std;
int n,a[1000][1000],ty,tx;
int main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	cin>>n;
	ty=(n+1)/2;
	tx=1;
	a[ty][tx]=1;
	for(int i=2;i<=n*n;i++){
		if(ty==n&&tx==1) tx++;
		else if(ty==n) {
			tx--;
			ty=1;
		} 
		else if(tx==1){
			tx=n;
			ty++;
		}
		else if(a[ty+1][tx-1]==0){
			ty++,tx--;
		}
		else {
			tx++;
		}
		a[ty][tx]=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<setw(3)<<a[j][i]<<" ";		
		}
		cout<<endl;
	}
//  fclose(stdin);
//	fclose(stdout); 
    return 0;
}