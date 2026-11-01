#include<iostream>
using namespace std;
int main()
{
    int n, k, flag=0;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
        if(a[i]>=a[k-1])
            flag++;
        }
    }
    cout << flag;
    return 0;
}