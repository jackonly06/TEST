/*************************************************************************
    > File Name: 10_21.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Mon, 11 Jun, 2018 11:52:11 PM
 ************************************************************************/

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int local_val = 7;
    auto decrement_to_zero = [&local_val](){
        if(local_val == 0){
            return true;
        }else{
            --local_val;
            return false;
        }
    };

    while(!decrement_to_zero()){
        cout << local_val << endl;
    }

    return 0;
}

