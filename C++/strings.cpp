#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Complete the program
    string a, b, c;
    cin >> a >> b;
    cout << a.size() << " " << b.size() << "\n";
    cout << a + b << "\n";
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout << a << " " << b << "\n";
    return 0;
}
