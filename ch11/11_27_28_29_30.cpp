/*************************************************************************
    > File Name: 11_27_28_29_30.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Sun,  1 Jul, 2018 01:20:40 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    map<string, vector<int>> m;
    m = {{"Alan",
            {
                1, 2, 3, 4, 5
            }},
         {"Jason",
             {
                1, 5, 6, 7, 8
             }
         }};

    map<string, vector<int>>::iterator it;
    it = m.find("Alan");

    return 0;
}

