#include <iostream>
using namespace std;
int main()
{
  int n, sum = 0;
  int a = -1;
  int b = 1;
  cout << "enter number";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    sum = a + b;
    cout << sum << " ";
    a = b;
    b = sum;
  }
}
