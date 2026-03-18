#include <iostream>
using namespace std;

static const int MAX_ELEMENTS = 100;

class IntegerSet 
{
private:
    int elements[MAX_ELEMENTS]; 

public:
    IntegerSet() 
    {
        for (int i = 0; i <= MAX_ELEMENTS; i++)
        {
            elements[i] = 0;
        } 
    }

    IntegerSet(int values[], int size) 
    {
        for (int i = 0; i <= MAX_ELEMENTS; i++)
        {
            elements[i] = 0;
        }
        for (int i = 0; i < size; i++) 
        {
            if (values[i] >= 0 && values[i] <= MAX_ELEMENTS)
            {
                elements[values[i]] = 1;
            }
        }
    }

    void Insert(int value) 
    {
        if (value >= 0 && value <= MAX_ELEMENTS)
        {
            elements[value] = 1;
        }
    }

    void Remove(int value) 
    {
        if (value >= 0 && value <= MAX_ELEMENTS)
        {
            elements[value] = 0;
        }
    }

    IntegerSet UnionWith(const IntegerSet &otherSet) const 
    {
        IntegerSet result;

        for (int i = 0; i <= MAX_ELEMENTS; i++)
        {
            result.elements[i] = (elements[i] || otherSet.elements[i]);
        }
 
        return result;
    }

    IntegerSet IntersectionWith(const IntegerSet &otherSet) const 
    {
        IntegerSet result;

        for (int i = 0; i <= MAX_ELEMENTS; i++)
        {
            result.elements[i] = (elements[i] && otherSet.elements[i]);
        }

        return result;
    }

    bool IsEqualTo(const IntegerSet &otherSet) const 
    {
        for (int i = 0; i <= MAX_ELEMENTS; i++) 
        {
            if (elements[i] != otherSet.elements[i])
            {
                return false;
            }
        }

        return true;
    }

    void Print() const 
    {
        bool isEmpty = true;

        for (int i = 0; i <= MAX_ELEMENTS; i++) 
        {
            if (elements[i] == 1) 
            {
                cout << i << " ";
                isEmpty = false;
            }
        }

        if (isEmpty)
        {
            cout << "---";
        }
        cout << endl;
    }
};

int main() 
{
    IntegerSet emptySet;             
    int initialValues[] = {1, 3, 5, 7};
    IntegerSet setWithValues(initialValues, 4);

    emptySet.Insert(2);
    emptySet.Insert(3);
    emptySet.Insert(5);

    cout << "EmptySet after inserting 2, 3, 5: ";
    emptySet.Print();             

    cout << "SetWithValues: ";
    setWithValues.Print();        

    
    IntegerSet unionSet = emptySet.UnionWith(setWithValues);
    cout << "Union of EmptySet and SetWithValues: ";
    unionSet.Print();             

    IntegerSet intersectionSet = emptySet.IntersectionWith(setWithValues);
    cout << "Intersection of EmptySet and SetWithValues: ";
    intersectionSet.Print();      

    emptySet.Remove(3);
    cout << "EmptySet after removing 3: ";
    emptySet.Print();            

    if (emptySet.IsEqualTo(setWithValues))
    {
        cout << "EmptySet and SetWithValues are equal" << endl;
    }
    else
    {
        cout << "EmptySet and SetWithValues are not equal" << endl;
    }

    return 0;
}