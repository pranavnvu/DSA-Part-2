#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    int ans = n * fact(n-1);
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number n : ";
    cin >> n;

    int ans = fact(n);
    cout << "Factorial of n is : " << ans;

    return 0;
}