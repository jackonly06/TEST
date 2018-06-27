/*************************************************************************
    > File Name: 11_18.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Wed, 27 Jun, 2018 11:38:25 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char** argv)
{
    map<string, size_t> word_count;

    map<string, size_t>::const_iterator map_it = word_count.cbegin();

    while( map_it != word_count.cend()){
        cout << map_it->first << " occurs " << map_it->second << " times " << endl;
        ++map_it;
    }

    return 0;
}

