/*************************************************************************
    > File Name: 3_24.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年03月21日 16:30:18
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int i;
    vector<int> ivec;

    while( cin >> i ){
        ivec.push_back(i);
    }

    if( ivec.empty() ){
        cout << "intput at least one integer." << endl;
        return -1;
    }
    else if( ivec.size() == 1 ){
        cout << *ivec.begin() << " has no adjacent elements.";
    }
    else{
        ;
    }

    for( auto it = ivec.begin(); it + 1 != ivec.end(); ++it ){
        cout << *it + *(it + 1) << " ";
    }
    cout << endl;

    for( auto beg = ivec.begin(), end = ivec.end() - 1; beg <= end; ++beg, --end ){
        cout << *beg + *end << " ";
    }
    cout << endl;

    return 0;
}

