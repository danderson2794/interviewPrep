#include "defs.h"

/*
    Description:
        - This widget will return the populated array. 
    
    @Pre: there must be data in the ifstream and size > 0
    @Post: returns populated array.
*/
int* populateArray(const std::ifstream & data, const int &size)
{
    int arr[size] = {0};
    int itr = 0;
    while (data >> arr[itr++]);

    return arr;
};