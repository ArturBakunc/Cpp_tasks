#include <iostream>
using namespace std;

int main()
{
     const int SIZE = 1000;

     bool primes[SIZE];
     for (int i = 0; i < 1000; i++)
     {
        primes[i] = true;
     }
 
     primes[0] = false;
     primes[1] = false;

     for (int i = 2; i * i < SIZE; i++)
     {
         for (int j = i * 2; j < SIZE; j += i)
         {
            primes[j] = false;
         }
     }  
    
     int count = 0;

     for (int i = 2; i < SIZE; i++)
     {
         if (primes[i] == true)
         {
            cout << i << " ";
            count++;
         }    
         if (count == 20)
         {
            count = 0;
            cout << endl;
         }
     }

    return 0;
}