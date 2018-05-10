/*************************************************************************
    > File Name: 9_27.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Thu, 10 May, 2018 11:47:35 PM
 ************************************************************************/

#include <iostream>
#include <forward_list>

using namespace std;

int main(int argc, char** argv)
{
    forward_list<int> flst = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    for( auto prev = flst.before_begin(), curr = flst.begin(); curr != flst.end(); ){
        if( *curr & 0x1 ){
            curr = flst.erase_after(prev);
        }else{
            prev = curr++;
        }
    }

    for( auto i : flst ){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

