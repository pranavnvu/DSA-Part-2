#include<iostream>
using namespace std;
int counting(int n)
{
    if(n==0)
    {
        return;
    }
    cout << n << " ";
    counting(n-1);
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    counting(n);

    return 0;
}