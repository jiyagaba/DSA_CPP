#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if (n < 0) {
        return 0;
    }
    int fact = 1;
    for (int i = n; i > 1;i--){
        fact *= i;
    }
    return fact;
}

int main()
    {
        int n;
        cin >> n;
        cout << factorial(n);
        return 0;
}

/*
negative numbers do not have factorial
factorial of 0 is 1, factorial of 1 is 1

factorial of n is defined as the product of numbers from n to 1
n! = n * (n-1) * (n-2) * ..............1
*/