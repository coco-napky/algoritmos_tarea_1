#include "Test.h"
#include <iostream>
using namespace std;

bool numberExists(vector<int> ordered_numbers, int x, int inicio, int fin)
{
    if(inicio > fin)
        return false;

    int index = inicio + (fin - inicio)/2;
    int mid = ordered_numbers[index];

    if(mid == x)
        return true;

    return mid < x ? numberExists(ordered_numbers, x, index + 1, fin)
    : numberExists(ordered_numbers, x, 0, index - 1);
}

bool numberExists(vector<int> ordered_numbers, int x)
{
    return numberExists(ordered_numbers, x, 0, ordered_numbers.size() - 1);
}

int main ()
{
    test();
    return 0;
}
