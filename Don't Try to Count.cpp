#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=s.size();
    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            if(s[i]==s[j]){
                count--;
            }
        }
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}