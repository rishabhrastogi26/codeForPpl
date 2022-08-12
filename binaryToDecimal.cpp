#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int m =n;

    int ans = 0;
    int i = 0; 
    while (n != 0)
    {
        int leftmostDigit =n % 10;
        if (leftmostDigit == 1)
        {
            ans = ans + pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout << "binary "<< m << " in decimal is "<< ans;

}
