#include <iostream>
using namespace std;

int main()
{
    static int count = 1;
    cout << count++ << endl;

    main();   // recursive call (not allowed by the standard)
    return 0;
}
