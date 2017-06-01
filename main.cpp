#include <iostream>
#include <string>
#include <strstream>
using namespace std;


int MOD (string str,int m)
{
    int k;
    int l=str.size();
    cout<<l<<endl;
    if(l!=1)
    {
      string str1(str,1);
      char str2=str[0];
      cout<<str1<<'\n'<<str2<<endl;
      k=(MOD(str1,m)*10)%m+(str2-'0')%m;
      return k;
    }
    else return str[0]-'0';
}


int main()
{
    string s="14286490110000000000000000000068337600000000000000000000000004";//倒序
    int t=MOD(s,42);
    cout << t << endl;
    return 0;
}

