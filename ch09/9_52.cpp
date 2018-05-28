/*************************************************************************
    > File Name: 9_52.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Mon, 28 May, 2018 10:43:45 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(int argc, char** argv)
{
    auto &expr = "This is (test(program)(((hello world!))) and (ocxs) over";
    auto repel = '#';
    auto seen = 0;

    stack<char> stk;

    for( auto c : expr ){
        stk.push(c);
        if( c == '(' ){
            ++seen;
        }

        if( seen && c == ')' ){
            while( stk.top() != '(' ){
                stk.pop();
            }
            stk.pop();
            stk.push(repel);
            --seen;
        }
    }

    string output;

    for( ; !stk.empty(); stk.pop() ){
        output.insert(output.begin(), stk.top());
    }
    cout << output << endl;

    return 0;
}

