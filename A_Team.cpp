#include<iostream>
using namespace std;

int main()
{
    int n, flag=0, num1, num2, num3;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> num1 >> num2 >> num3;
        if((num1==0 && num2==0 && num3==0) || (num1==0 && num2==0 && num3==1) || (num1==0 &&num3==0 && num2==1) || (num2==0 && num3==0 && num1==1))
        {
            
        }
        else
        {
            ++flag;
        }
    }
    cout << flag;
    return 0;
}