
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
 int x,y;
int extendedEuclid(int a,int b){
   
    if(b==0){
        x = 1;
        y = 0;
    }
    else{
        extendedEuclid(b,(a%b));
        int temp = x;
        x = y;
        y =( temp - (a/b)*y);
    }
    return x;
}

int main(){
    int a,b,c,m;
    cin>>a>>b>>c>>m;
    int ans1,ans2,ans;
    ans1 = moduloExponentiation(a,b,m);

    ans2 = extendedEuclid(c,m);
    
    ans = ((ans1%m)*(ans2%m))%m;
    cout<<ans<<endl;
}