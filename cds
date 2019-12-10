#include <iostream>

using namespace std;
void f(long n, int i)
{
    if(n!=0)
    {
        if(n%3>0)
        {
            cout << i;
            f(n/3, i+1);
        }
    }
}
int main()
{
f(121, 1);
return 0;
}
