// ------------------------------- OOP Diamond Problem -----------------
#include <iostream>
using namespace std;

class a
{
public:
    void show()
    {
        cout << "class A" << endl;
    }
};

class b : virtual public a
{
};
class c : virtual public a
{
};

class d : public b, public c // here is ambiguity fall
{
};

int main()
{
    d obj;
    obj.show(); // we can solve it manually
    return 0;
}