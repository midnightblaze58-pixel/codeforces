#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m[n], c[n], flag1=0, flag2=0;
    for(int i=0;i<n;i++)
    {
        cin >> m[i] >> c[i];
        if(m[i]>c[i])
            flag1++;
        else if(m[i]<c[i])
            flag2++;
    }
    if(flag1>flag2)
        cout << "Mishka";
    else if(flag1<flag2)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";
    return 0;
}