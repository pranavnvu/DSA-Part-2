#include<iostream>
using namespace std;
int way(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    int ans = way(n-1) + way(n-2);
    return ans;
}
int main()
{
    int n;

    cout << "Enter the value of n : ";
    cin >> n;

    int ans = way(n);
    cout << "No. of ways to climb " << n << " stairs is : " << ans;

    return 0; 
}