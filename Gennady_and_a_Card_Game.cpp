# include <bits/stdc++.h>
using namespace std;
int main(){
string t;
cin>>t;
int tag=0;
int n=5;
while(n--){
    string s;
    cin>>s;
    if(t[0]==s[0]){
    tag=1;
    }
    else if(t[1]==s[1]){
        tag=1;
    }
}
if(tag==1){
    cout<<"YES";
}
else{
    cout<<"NO";
}
 
    return 0;
}
