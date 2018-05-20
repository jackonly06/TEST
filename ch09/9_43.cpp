/*************************************************************************
    > File Name: 9_43.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Sun, 20 May, 2018 10:49:20 PM
 ************************************************************************/

#include <iostream>
#include <string>

using namespace std;

void Replace(string &s, const string &oldVal, const string &newVal)
{
    for( auto beg = s.begin(); distance(beg, s.end()) >= distance(oldVal.begin(), oldVal.end()); ){
        if( string {beg, beg + oldVal.size()} == oldVal ){
            beg = s.erase(beg, beg + oldVal.size());
            beg = s.insert(beg, newVal.cbegin(), newVal.cend());
            advance(beg, newVal.size());
        }else{
            ++beg;
        }
    }
}

int main(int argc, char** argv)
{
    {
        string str{"To drive straight thru is a foolish, tho courageous act."};
        Replace(str, "thru", "through");
        Replace(str, "tho", "though");
        cout << str << endl;
    }
    {
        string str{"To drive straight thruthru is a foolish, thotho courageous act."};
        Replace(str, "thru", "through");
        Replace(str, "tho", "though");
        cout << str << endl;
    }
    {
        string str{"To drive straight thru is a foolish, tho courageous act."};
        Replace(str, "thru", "thruthru");
        Replace(str, "tho", "though");
        cout << str << endl;
    }
    {
        string str{"My world is a big world."};
        Replace(str, "world", "worldworldworldworldworld");
        cout << str << endl;
    }
    return 0;
}

