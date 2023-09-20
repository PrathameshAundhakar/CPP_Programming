#include <iostream>
#include <cmath>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int modpow(int base, int exponent, int modulus)
{
    int result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % modulus;
        base = (base * base) % modulus;
        exponent = exponent / 2;
    }
    return result;
}

int main()
{
    int p = 17;
    int q = 11;
    int n = p * q;
    int phi = (p - 1) * (q - 1);
    int e = 7;

    while (e < phi)
    {
        if (gcd(e, phi) == 1)
            break;
        else
            e++;
    }

    int d = 0;
    while ((d * e) % phi != 1)
        d++;

    int message = 88;
    int c = modpow(message, e, n);
    int m = modpow(c, d, n);

    cout << "Message: " << message << endl;
    cout << "Encrypted: " << c << endl;
    cout << "Decrypted: " << m << endl;

    return 0;
}