/*************************************************************************
    > File Name: 12_06.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Thu, 12 Jul, 2018 11:55:04 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

vector<int> *dynamic_vector_generator();
void dynamic_vector_processor(vector<int> *ptr_v);
void dynamic_vector_printer(vector<int> *ptr_v);

int main(int argc, char** argv)
{
    vector<int> *ptr_vi = dynamic_vector_generator();
    dynamic_vector_processor(ptr_vi);
    dynamic_vector_printer(ptr_vi);

    delete ptr_vi;

    return 0;
}

vector<int> *dynamic_vector_generator()
{
    vector<int> *ptr_v = new vector<int>();
    return ptr_v;
}

void dynamic_vector_processor(vector<int> *ptr_v)
{
    int i;
    cout << "plz enter:\n";
    while( cin >> i && i != 999 ){
        ptr_v->push_back(i);
    }
}

void dynamic_vector_printer(vector<int> *ptr_v)
{
    for( const auto &e : *ptr_v ){
        cout << e << " ";
    }
    cout << "\n";
}




