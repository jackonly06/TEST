/*************************************************************************
    > File Name: 11_14.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Tue, 26 Jun, 2018 11:49:40 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Families{
public:
    using Child = pair<string, string>;
    using Children = vector<Child>;
    using Data = map<string, Children>;


    void add(string const &last_name, string const &first_name, string birthday)
    {
        _data[last_name].push_back(make_pair(first_name, birthday));
    }

    ostream &print(ostream &os) const
    {
        if(_data.empty()){
            return os << "No data right now." << endl;
        }


        for(const auto &pair : _data){
            os << pair.first << ":\n";
            for(const auto &child : pair.second){
                os << child.first << " " << child.second << endl;
            }
            os << endl;
        }
        return os;
    }
private:
    Data _data;
};

int main(int argc, char** argv)
{
    Families families;
    string message = "Please enter last name, first name and birthday";

    for(string l, f, b; cout << message << endl, cin >> l >> f >> b; families.add(l, f, b)){
        ;
    }
    families.print(cout << "Current data:" << endl);

    return 0;
}

