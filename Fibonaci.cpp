#include <iostream>
using namespace std;
int main() 
{
    int n, h1 = 0, h2 = 1, nextTerm;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; ++i)
    {
        cout << h1 << " ";
        nextTerm = h1 + h2;
        h1 = h2;
        h2 = nextTerm;
    }
    return 0;
}
