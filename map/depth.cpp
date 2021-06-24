#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, list<string>> myMap{{"A", {"B", "C", "D"}}};
    vector<string> open;
    vector<string> close;
    string goal = "B";
    return 0;
}