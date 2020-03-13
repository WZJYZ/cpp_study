// Copyright (c) 2020 by Chrono
//
// g++ test_json.cpp -std=c++14 -I../common -o a.out;./a.out

#include <iostream>

#include "json.hpp"

using namespace std;

using json_t = nlohmann::json;

void case1()
{
    json_t j;
    j["age"] = 23;
    j["name"] = "spiderman";
    j["jobs"] = {"superhero", "neighborhood"};
    j["gear"]["suits"] = "2099";

    cout << j.dump() << endl;
}

void case2()
{
    json_t j = {
        {"age", 23},
        {"name", "spiderman"},
        {"jobs", {"superhero", "neighborhood"}},
        {"gear", {"suits", "2099"}}
    };

    cout << j.dump(2) << endl;
}

int main()
{
    case1();
    case2();

    cout << "json demo" << endl;
}
