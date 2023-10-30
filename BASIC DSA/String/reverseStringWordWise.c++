#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string reverseStringWordWise(string input)
{
    vector<string> v;

    int length=input.length();
    string str;
    str="";
    for(int i=length-1;i>=0;i--){
        if(input[i]!=' '){
          str+=input[i];
        }
        if(input[i]==' ' || i==0){
               v.push_back(str);
               str="";
        }
    }
    for(int i=0;i<v.size();i++){
        reverse(v[i].begin(),v[i].end());
        str+=v[i]+' ';
    }

    return str;

}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}