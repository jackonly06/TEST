/*************************************************************************
    > File Name: 7_27.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Mon, Apr 16, 2018  4:27:29 PM
 ************************************************************************/

#include "7_27.h"

int main(int argc, char** argv)
{
    Screen myScreen(3, 3, 'X');
    myScreen.move(2, 0).set('#').display(std::cout);
    std::cout << "\n";
    myScreen.display(std::cout);
    std::cout << "\n";

    return 0;
}

