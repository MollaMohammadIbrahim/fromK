
#include<bits/stdc++.h>

using namespace std;
int moduloExponentiation(int a, int b, int m){

    if(b==0){
        return 1;
    }
    if(b%2==0){
        return moduloExponentiation((a*a)%m,b/2,m);
    }
    else return (a*moduloExponentiation((a*a)%m,(b-1)/2,m))%m;
}
int main(){
    int a,b,c,m;
    cout<<"intput a,b,m"<<endl;
    cin>>a>>b>>m;
    int ans1,ans2;
    ans1 = moduloExponentiation(a,b,m);
    cout<<ans1<<endl;
}