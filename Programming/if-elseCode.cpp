#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter any no. or digit";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "it is upper case";
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "it is a lower case";
    }
    else
    {
        cout << "it is a numeric value";
    }
}