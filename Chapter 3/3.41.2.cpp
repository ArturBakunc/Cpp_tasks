#include <iostream>
#include <climits> // For INT_MAX
using namespace std;

int main() 
{
    int prev = 0; 
    int curr = 1; 
    int next;
    int n = 1;

    while (true) 
    {
        next = prev + curr;
        
        if (next < 0 || next > INT_MAX) // overflow check
            break;

        prev = curr;
        curr = next;
        n++;
    }

    cout << "Largest int Fibonacci number: " << curr << " at position n = " << n << endl;

    return 0;
}
