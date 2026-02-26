#include<bits/stdc++.h>
using namespace std;
long long sqrtsp(long long);
int main(){
//    system("echo off");
//    system("chcp 65001");
    long long n;
    while(n!=0){
        printf("输入数据以求解其平方根，输入0以退出 \n根号下的数为: ");
        cin>>n;
        if(cin.fail()){
            cin.clear();
            printf("输入错误，应输入数字\n\n");
        }
        if (n==0) break;
        if(n<0) {
			printf("输入错误，负数没有实数平方根\n\n");
			continue;
		}
        if(n>0){ 
			sqrtsp(n);
    	}
    }
    return 0;
}
long long sqrtsp(long long n){
    long long k=1;
    for(long long i=2;i<=(long long)(sqrt(n*1.0));i++){
        while(n%(i*i)==0){
            k*=i;
            n/=(i*i);
        }
    }
    long long a=n;
    if(n==1){
        cout<<k<<endl;
        return 0;
    }
    if(k==1){
        cout<<"sqrt "<<a<<endl;
        return 0;
    }
    printf("%lld sqrt %lld \n",k,a);
    return 0;
}
