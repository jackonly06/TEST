/*************************************************************************
    > File Name: 3_21.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年03月20日  9:58:51
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void check(const vector<int>& vec)
{
    if( vec.empty() ){
        cout << "size: 0; no values." << endl;
    }else{
        cout << "size: " << vec.size() << ";values:";
        for( auto it = vec.begin(); it != vec.end(); ++it ){
            cout << *it << ",";
        }
        cout << "\b." << endl;
    }
}

void check( const vector<string>& vec )
{
    if( vec.empty() ){
        cout << "size: 0; no values." << endl;
    }else{
        cout << "size: " << vec.size() << ";values:";
        for( auto it = vec.begin(); it != vec.end(); ++it ){
            if( it->empty() ){
                cout << "null" << ",";
            }else{
                cout << *it << ",";
            }
        }
        cout << "\b." << endl;
    }
}

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    check(v1);
    check(v2);
    check(v3);
    check(v4);
    check(v5);
    check(v6);
    check(v7);

    return 0;
}

