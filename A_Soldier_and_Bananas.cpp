#include<iostream>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int pay=0;
    for(int i=1;i<=w;i++)
    {
        pay=pay + i*k;//3 6 9 12 30-17 13
    }
    if(n<pay)
        cout << (pay-n);
    else 
        cout << 0;
}