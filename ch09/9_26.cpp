/*************************************************************************
    > File Name: 9_26.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Thu, 10 May, 2018 02:56:46 PM
 ************************************************************************/

#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    int ia[] = {0, 1, 1, 2, 3, 4, 7, 11, 15, 32, 88, 99};

    vector<int> vec(ia, end(ia));
    list<int> lst(vec.begin(), vec.end());

    for( auto it = lst.begin(); it != lst.end(); ){
        if( *it & 0x1 ){
            it = lst.erase(it);
        }else{
            it++;
        }
    }

    for( auto it = vec.begin(); it != vec.end(); ){
        if( !(*it & 0x1) ){
            it = vec.erase(it);
        }else{
            ++it;
        }
    }

    cout << "list : ";

    for( auto i : lst ){
        cout << i << " ";
    }
    cout << "\nvector : ";

    for( auto i : vec ){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

