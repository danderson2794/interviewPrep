#include <bits/stdc++.h>


int numSteps(const int clouds[], const int &size);

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "ERROR: Invalid number of arguments, ending program now\n";
        exit(1);
    }
    std::ifstream data(argv[1]);

    int numClouds = 0, itr = 0;
    data >> numClouds;

    int clouds[numClouds];

    // populate array with the input file given.
    while (data >> clouds[itr++]);  
    // close file pointer. 
    data.close();

    std::cout << numSteps(clouds, numClouds) << "\n";
}

/* 
pseudo algorithm:
- start at cloud 0. Try to move by i + 2, if it is a 1, move i + 1.
- if I successfully move, return ++ans.
*/

int numSteps(const int clouds[], const int &size)
{
    int pos = 0, ans = 0;

    do
    {
        if (clouds[pos + 2] != 1)
        {
            pos += 2;
            ans++;
        } else if (clouds[pos + 1] == 0)
        {
            pos += 1;
            ans++;
        }
        else; 
    
    } while (pos < size -1);
    

    return ans;

}