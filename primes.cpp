
#include <iostream>

using namespace std; 

int isPrime(int primes[], int number) 
{
    for (int i = 0; primes[i] * primes[i] <= number; i++)
    {
        if (number % primes[i] == 0)
        {
            return primes[i];
        }
    }
    return number; 

}

void generatePrimes(int primes[], int SIZE)
{
    primes[0] = 2; 
    int count = 1; 

    for (int number = 3; count < SIZE; number += 2)
    {
        if (isPrime(primes, number) == number)
        {
            primes[count] = number; 
            count++; 
        }

    }

}


void primeNumberOrSmallestFactor(int primes[], int numbers[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        int result = isPrime(primes, numbers[i]);

        if (result == numbers[i])
        {
            cout << numbers[i] << " is PRIME." << endl; 
        }
        else
        cout << numbers[i] << " has a prime factor of " << result << endl;
        
    }
    
}
