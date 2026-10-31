#include<iostream>
using namespace std;
int main()
{
    int n, flag=0, num1, num2, num3;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> num1 >> num2 >> num3;
        if (num1 + num2 + num3 >= 2) 
            flag++;
    }
    cout << flag;
    return 0;
}
