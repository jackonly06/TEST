/*************************************************************************
    > File Name: 5_09.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年03月29日  8:42:16
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    unsigned aCnt = 0;
    unsigned eCnt = 0;
    unsigned iCnt = 0;
    unsigned oCnt = 0;
    unsigned uCnt = 0;
    char ch;

    while( cin >> ch ){
        if( ch == 'a' ){
            ++aCnt;
        }
        else if( ch == 'e' ){
            ++eCnt;
        }
        else if( ch == 'i' ){
            ++iCnt;
        }
        else if( ch == 'o' ){
            ++oCnt;
        }
        else{
            ;
        }
    }
    cout << "Number of vowel a: \t" << aCnt << '\n' << "Number of vowel e: \t"
         << eCnt << '\n' << "Number of vowel i: \t" << iCnt << '\n'
         << "Number of vowel o: \t" << oCnt << '\n' << "Number of vowel u: \t"
         << uCnt << endl;
    return 0;
}

