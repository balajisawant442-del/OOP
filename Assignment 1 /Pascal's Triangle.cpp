// Name: Balaji Sawant
// PRN: B25ET1069
// SY1 C1

#include<iostream>
using namespace std;

// Function to find nCk
int BinoCoef(int n, int k)
{
    int res = 1;

    // Use the smaller value of k
    if (k > n - k)
        k = n - k;

    // Calculate the combination
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }

    return res; // Give back the answer
}

// Function to display Pascal's Triangle
void printPascal(int n)
