#include <bits/stdc++.h>
using namespace std;
void countOfDigits()
{
    int n;
    cin >> n;
    cout << floor(log10(n) + 1);
}
void palindromeNumber()
{
    int n;
    cin >> n;
    int rev = 0, temp = n;
    while (temp)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    cout << (rev == n ? "Yes" : "No");
}
void fatorialOfANumber()
{
    int n;
    cin >> n;
    int fact = 1;
    if (n <= 1)
    {
        cout << 1;
        return;
    }
    for (int i = 1; i <= n; i++)
        fact *= i;
    cout << fact;
}
void trailingZerosInFactorial()
{
    int n, res = 0;
    cin >> n;
    for (int i = 5; i <= n; i *= 5)
        if (n % i == 0)
            res += n / i;
    cout << res;
}
void gcdOfTwoNumbers()
{
    int a, b;
    cin >> a >> b;
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else if (b > a)
            b = b - a;
    }
    cout << a;
}
void checkPrime()
{
    int n;
    bool isPrime = true;
    cin >> n;
    if (n == 1)
    {
        cout << "No";
        return;
    }
    if (n == 2 || n == 3)
    {
        cout << "Yes";
        return;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        cout << "No";
        return;
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            cout << "No";
            return;
        }
    }
    cout << "Yes";
}
void primeFactors()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
        return;
    }
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n /= 2;
    }
    while (n % 3 == 0)
    {
        cout << 3 << " ";
        n /= 3;
    }

    for (int i = 5; i * i <= n; i += 6)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
        while (n % (i + 2) == 0)
        {
            cout << i + 2 << " ";
            n /= (i + 2);
        }
    }
    if (n > 3)
        cout << n;
}
void printAllDivisors()
{
    int n, i;
    cin >> n;
    for (i = 1; i * i < n; i++)
        if (n % i == 0)
            cout << i << " ";
    for (; i >= 1; i--)
        if (n % i == 0)
            cout << n / i << " ";
}
void seiveOfEratos()
{
    int n;
    cin >> n;
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        // cout<<isPrime[i]<<" ";
        if (isPrime[i])
        {
            cout << i << " ";
        }
    }
}
void countingPower()
{
    int x, n, res = 1;
    cin >> x >> n;

    while (n)
    {
        if (n & 1)
            res *= x;
        x *= x;
        n /= 2;
    }
    cout << res;
}
int main()
{
    // 01.Count of Digits
    // countOfDigits();

    // 02.Palindrome Number
    // palindromeNumber();

    // 03.Factorial Of a Number
    // fatorialOfANumber();

    // 04.Trailing Zeros in Factorial
    // trailingZerosInFactorial();

    // 05.GCD of Two Numbers
    // gcdOfTwoNumbers();

    // 06.Check for Prime
    // checkPrime();

    // 07.Prime Factors
    // primeFactors();

    // 08.Print All Divisors
    // printAllDivisors();

    // 09.Seive Of Eratos
    // seiveOfEratos();

    // 10.Counting Power
    // countingPower();
}