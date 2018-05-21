/*************************************************************************
    > File Name: 9_44.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Mon, 21 May, 2018 11:18:37 PM
 ************************************************************************/

#include <iostream>
#include <string>

using namespace std;

void Replace(string &s, string const &oldVal, string const &newVal)
{
    for( string::size_type i = 0; i != s.size(); ++i ){
        if(s.substr(i, oldVal.size()) == oldVal){
            s.replace(i, oldVal.size(), newVal);
            i += newVal.size() - 1;
        }
    }
}

int main(int argc, char** argv)
{
    string str{"To drive straight thru is a foolish, tho courageous act."};
    Replace(str, "tho", "though");
    Replace(str, "thru", "through");
    cout << str << endl;

    return 0;
}

