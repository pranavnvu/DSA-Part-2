#include<iostream>
using namespace std;
int power(int n)
{
    if(n==0)
    {
        return 1;
    }
    int ans = 2*power(n-1);
    return ans;
}
int main()
{
    int n;

    cout << "Enter the power you want to find : ";
    cin >> n;

    int ans = power(n);

    cout << "Answer is : " << ans;

    return 0;
}