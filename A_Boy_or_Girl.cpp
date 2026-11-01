#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int flag=0;
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s[i+1])
            flag++;
    }
    if(flag%2==0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}