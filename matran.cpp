#include <iostream>
using namespace std;
#define MAX 100
void nhap(int a[MAX][MAX], int b, int c)
{
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
}
void xuat(int a[MAX][MAX], int b, int c)
{
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}
int tongchan(int a[MAX][MAX], int b, int c)
{
    int s = 0;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] % 2 == 0)
            {
                s += a[i][j];
            }
        }
    }
    return s;
}
bool nt(int a)
{
    if (a < 2)
        return 0;
    for (int i = 2; i <= a / 2; i++)
        if (a % i == 0)
            return 0;
    return 1;
}
int tongnt(int a[MAX][MAX], int b, int c)
{
    int s = 0;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (nt(a[i][j]))
            {
                s += a[i][j];
            }
        }
    }
    return s;
}
int tongmaxdong(int a[MAX][MAX], int b, int c)
{
    int s = 0;
    for (int i = 0; i < b; i++)
    {
        int max = a[i][0];
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] > max)
                max = a[i][j];
        }
        s += max;
    }
    return s;
}
int lonnhat(int a[MAX][MAX], int b, int c)
{
    int max = a[0][0];
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }
    return max;
}
void vtmax(int a[MAX][MAX], int b, int c)
{
    int i, j, lonnhat = lonnhat(a, b, c);
    for (i = 0; i < b; i++)
        for (j = 0; j < c; j++)
            if (a[i][j] == lonnhat)
                cout << "[" << i << "][" << j << "]\t";
}
int main()
{
    int a[MAX][MAX], b, c;
    cin >> b >> c;
    nhap(a, b, c);
    xuat(a, b, c);
    // cout << tongchan(a, b, c);
    // cout << tongmaxdong(a, b, c);
    // cout << lonnhat(a, b, c);
    vtmax(a, b, c); //
    cout << endl;
    // cout << tongnt(a, b, c);
}