
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
        extendedEuclid(b,(a%b)%b);
        int temp = x%b;
        x = y%b;
        y =( temp - ((a/b)*y)%b)%b;
    }
    return x;
}

int main(){
    int a,b,c,m;
    cin>>a>>b>>c>>m;
    int ans1,ans2,ans;
    ans1 = moduloExponentiation(a,b,m);

    ans2 = extendedEuclid(a,m);
    
    ans = (ans1*ans2)%m;
    cout<<ans<<endl;
}