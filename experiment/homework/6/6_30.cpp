#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6}, *p = a;
    cout << (*++p)++ << endl;
    return 0;
}