// Smart pointers

#include <iostream>
using namespace std;


template <typename T>
class smartPointer
{
public:
    smartPointer(T *ptr)
    {
        this->ptr = ptr;
    }

    ~smartPointer()
    {
        delete ptr;
    }

    T& operator*()
    {
        return *ptr;
    }
private:
    T *ptr;
};


int main()
{
    smartPointer<int> pointer = new int(5);

    cout << *pointer;

}
