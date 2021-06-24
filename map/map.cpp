#include <iostream>
#include <string>
#include<list>
#include <map>
using namespace std;
int main()
{
    map<int, string> m{{0, "Thotho"}, {1, "Taha"}};
    // Print
    for (auto mm : m)
    {
        cout << mm.first << " - " << mm.second << endl;
    }
    // Out put
    // 0 - Thotho
    // 1 - Taha

    // Add new item to the map
    m[2] = "Ali";
    // Print
    for (auto mm : m)
    {
        cout << mm.first << " - " << mm.second << endl;
    }
    cout << "----Print Using Iterator ------" << endl;
    // using iterator "pointer to the map"
    map<int, string>::iterator it = m.begin();
    for (; it != m.end(); it++)
        cout << it->first << " - " << it->second << endl;

    cout << "----Insert ------" << endl;
    // Insert to the map
    m.insert({3, "Haithem"});
    for (auto mm : m)
        cout << mm.first << " - " << mm.second << endl;

    cout << "----Insert using iterator------" << endl;
    auto itTwo = m.begin();
    itTwo = m.insert(itTwo , {4 , "Thoalfokar"});
    m.insert(itTwo , {5 , "Hala"});
    for (auto mm : m)
        cout << mm.first << " - " << mm.second << endl;

    // Insert using emplace
    cout << "----Insert using emplace------" << endl;
    auto itThree = m.begin();
    m.emplace_hint(itThree , 6 , "JoJo");
    for (auto mm : m)
        cout << mm.first << " - " << mm.second << endl;
    
    // Earse from items from map
    cout << "----Erase withOut iterator------" << endl;
    m.erase(6);
    for (auto mm : m)
        cout << mm.first << " - " << mm.second << endl;
    map<int , list<string>> test = {{0,{"A","B"}}};
    auto length = test.begin();

}