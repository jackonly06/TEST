/*************************************************************************
    > File Name: 9_28.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Fri, 11 May, 2018 11:54:29 PM
 ************************************************************************/

#include <string>
#include <forward_list>

#define CATCH_CONFIG_MAIN
#include "../include/catch.hpp"

using namespace std;

void find_and_insert(forward_list<string> &list, const string &to_find, const string &to_add)
{
    auto prev = list.before_begin();
    auto size = distance(list.begin(), list.end());
    for( auto curr = list.begin(); curr != list.end(); prev = curr++ ){
    if( *curr == to_find ){
        list.insert_after(curr, to_add);
    }
    if( size == distance(list.begin(), list.end()) ){
        list.insert_after(prev, to_add);
    }
}

TEST_CASE("common", "[find_and_insert]"){
    forward_list<string> l{ "a", "b", "c", "d", "e", "f" };
    forward_list<string> r{ "a", "b", "c", "g", "d", "e", "f" };
    find_and_insert(l, "c", "g");
    REQUIRE(l == r);
}


TEST_CASE("no found", "[find_and_insert]"){
    forward_list<string> l{ "a", "b", "c", "d", "e", "f" };
    forward_list<string> r{ "a", "b", "c", "d", "e", "f", "g" };
    find_and_insert(l, "g", "g");
    REQUIRE(l == r);
}

TEST_CASE("multi found", "[find_and_insert]"){
    forward_list<string> l{ "a", "b", "c", "d", "e", "f" };
    forward_list<string> r{ "a", "b", "g", "c", "d", "b", "g", "f" };
    find_and_insert(l, "b", "g");
    REQUIRE(l == r);
}

int main(int argc, char** argv)
{
    return 0;
}

