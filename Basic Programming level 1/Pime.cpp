#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    bool ans = true; //1 indicates to true
    if(n<=1){
        return false; //0 indicates to false
    }
    if(n==2){
        return true;
    }
    if(n % 2 == 0){
        return false;
    }
    for (int i = 3; i < sqrt(n);i+=2){
        if(n % i == 0){
            return false;
        }
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    cout << isPrime(n);
    return 0;
}

/*
Prime number is defined as an positive integer number which is not divible by any integer other than 1 and the number itself.
2 is the only even prime number, rest all even numbers are odd.

to check if a number is prime:
1. n which is negative of 0 is non prime
2. n is 2 is priem
3. n is even is not prime
4. n>2  check for all numbers for 3 to square root of n incementing divisor by 2 , if it is divible by n or not 
*/