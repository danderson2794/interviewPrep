#include <bits/stdc++.h>

/* 
    Setup to read command line arguments. 
    Review the makefile for the arguments. I will add all test cases when 
    finished. 



    Damion Anderson
    01 May, 2021 / Programming Interview prep question 001
    Link:
    https://www.hackerrank.com/challenges/repeated-string/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup

*/

auto get_answer(const std::string &p, const unsigned int &n)
{
    int ans = 0;
    for(unsigned int i = 0; i < n; i++)
    {
        if(p[i % p.size()] == 'a') ++ans;
    }
    return ans; 
}

int main(int argc, char **argv)
{
    std::ifstream file(argv[1]);
    std::string phrase;
    unsigned int numChars = 0;
    file >> phrase; 
    if (phrase.size() == 1 && phrase[0] == 'a')
    {
        std::string ans;
        file >> ans;
        std::cout << ans << "\n"; 
        exit(0); 
    }
    else
    {
        file >> numChars;
        std::cout << numChars << "\n";    
        std::cout << get_answer(phrase, numChars) << std::endl;
    }
}

