#include <iostream>
using namespace std;

int main()
{
    int * psome = new int [10];
    delete [] psome;
    return 0;
}
