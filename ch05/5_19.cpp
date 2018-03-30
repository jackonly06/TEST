/*************************************************************************
    > File Name: 5_19.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年03月30日 17:25:07
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main(int argc, char** argv)
{
    string rsp;

    do{
        cout << "Input two string: ";
        string str1, str2;
        cin >> str1 >> str2;
        cout << (str1 <= str2 ? str1 : str2 ) << " is less than the other."
             << "\n\n" << "More? Enter yes or no: ";
        cin >> rsp;
    }while( !rsp.empty() && rsp[0] == 'y' );

    return 0;
}

