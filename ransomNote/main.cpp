#include <bits/stdc++.h>

int main(int argc, char **argv)
{
    // error handling.
    if (argc != 2) exit(1);
    //open the file.
    std::ifstream data(argv[1]);

    // mWords == magazine word count, nWords == note word count
    int mWords = 0, nWords = 0;
    bool ans = true;
    data >> mWords >> nWords;

    // populate hashmap with a key of num occurences
    std::unordered_map<std::string, int> map;
    std::string temp;
    for (int i = 0; i < mWords; i++)
    {
       data >> temp;
       map[temp]++;
       std::cout << "Map is: " << map[temp] << "\ttemp is " << temp << std::endl;
    }


    // Here we are checking if we have duplicates in either the magazine text, or our note. 
    // If we run out of occurences from the magazine words, we return "NO" and break the loop.
    // Run time : O(N)? I might be able to get it down with a dynamic programming approach;
    // however, I believe this is an acceptable runtime for this specific problem.
    for (int i = 0 ; i < nWords; i++)
    {
        data >> temp;
        if(--map[temp] >= 0); 
        else 
        {
            ans = false; 
            break;
        }
    }

    if (ans) std::cout << "YES\n";
    else std::cout << "NO\n"; 
}