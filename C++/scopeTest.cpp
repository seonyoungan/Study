#include <iostream>
using namespace std;

int a = 10; //global variable

main()
{
     int a = 20;//local variable
     cout << a << endl; //result : 20
     cout << ::a << endl; //result : 10
}
