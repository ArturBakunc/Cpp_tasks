#include <iostream>
using namespace std;
  
class Car
{ 
public:
    Car()
    {
        cout << endl << "1st constructor called. " << endl;
    }
    
    ~Car()
    {
        cout << "1st destructor called. " << endl << endl;
    }
};
  
class Mercedes : public Car
{ 
public:
    Mercedes()
    {
        cout << "2nd constructor called. " << endl;
    }
  
    ~Mercedes()
    {
        cout << "2nd destructor called. " << endl;
    }
};
  
class Sedan : public Mercedes
{ 
public:
    Sedan()
    {
        cout << "3rd constructor called. " << endl << endl;
    }
  
    ~Sedan()
    {
        cout << "3rd destructor called. " << endl;
    }
};
  
int main()
{ 
    Sedan E350;
} 