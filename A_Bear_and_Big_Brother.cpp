#include<iostream>
using namespace std;
int main()
{
    int a, b, flag=0;
    cin >> a >> b;
    while(a<=b)
    {
        flag++;
        a=a*3;
        b=b*2;
    }
    cout << flag;
    return 0;
}