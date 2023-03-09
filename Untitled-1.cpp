#include <iostream>
#include <math.h>
using namespace std;
float tong(int n, int b, int c)
{
    float s;
    s = float(n + b + c) / 3;
    return s;
}
int main()
{
    int n, b, c;
    cin >> n >> b >> c;
    cout << tong(n, b, c);
}
