#include <iostream>
#include "singleton.h"
using namespace std;

int main()
{
    Singleton &obj1 = Singleton::GetInstance();
    Singleton &obj2 = Singleton::GetInstance();
    cout << &obj1 << endl;
    cout << &obj2 << endl;
    return 0;
}