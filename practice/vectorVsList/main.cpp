#include <iostream>
#include <list>
#include <vector>
#include<map>
using namespace std;

int main()
{

    // Create simple 1-D vector
    // vector<int> vector1;
    // for(int i = 0 ; i< 3 ; ++i){
    //     vector1.push_back(i);
    // }
    // for(int i = 0 ; i< vector1.size(); ++i){
    //     cout<<vector1[i];
    // }
    // cout<<endl;
    // // Listed vector
    // vector<vector<int>> listedVector = {
    //     {0,1,2},
    //     {3,4,5},
    //     {7,8,9}
    // };

    // for(int i = 0 ; i< listedVector.size(); i++){
    //     for(int j = 0 ; j< listedVector.size(); j++){
    //         cout<<listedVector[i][j];
    //     }
    //     cout<<endl;
    // }

    // // Using list
    // list<int> list1;
    // for(int i = 0 ; i<3 ; i++){
    //     list1.push_back(i);
    // }

    // for(auto v : list1)
    //     {
    //         cout<<v;
    //     }

    // cout<<endl;

    // // Listed list
    // list<list<int>> listedList = {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };

    // cout<<"Listed List size: "<<listedList.size();

    // Code below does not work for some resonse
    // for(int i = 0 ; i<listedList.size() ; i++)
    //     {
    //         for(auto &j : listedList)

    //         cout<<endl;
    //     }
    // vector<int> test = {};
    // auto it = test.end();
    // it = test.insert(it, 4);
    // test.erase(it);
    // for (auto x : test)
    //     cout << x;
    // cout << "==============";
    // for (int i = 0; i <= 3; ++i)
    // {
    //     for (int j = 0; j <= 3; j++)
    //     {
    //         if(j == 0)
    //             break;
    //         cout << j;
    //     }
    // }
            // open =EFCD            close=AB
    // vector<int> test2 = {1,2 ,3};
    // test2.erase(test2.begin());
    // for(int i = 0 ; i< test2.size() ; i++)
    //     cout<<test2[i];
    // list<int> list1 = {};
    // cout<<list1.size();
    
    // for(auto i = list1.rbegin(); i != list1.rend(); i++)
    //     cout<<*i;
//     map<string ,list<string>> myMap{{"A" , {"B" , "C" , "D"}}};
//    for(auto m : myMap){
//        cout<<m.first<<" -> ";
//        for(auto i = m.second.rbegin() ; i != m.second.rend() ; i ++)
//         cout<<*i;
//    }

    vector<pair <string , list<string>> > myMap = {{"A" , {"B","C","D"}}};

    // for(int i = 0 ; i< myMap.size() ; i++)
    //     {
    //         cout<<myMap[i].first;
    //         for(auto x : myMap[i].second)
    //             cout<<x;
    //     }
        
    for(auto x : myMap)
        {
            cout<<x.first;
        }


        vector<pair<string, map<int, string>>> myGrap = {
        {"A", {{4, "B"}, {4, "C"}, {8, "D"}}},
        {"B", {{7, "E"}, {6, "F"}}},
        {"C", {{5, "F"}, {3, "G"}}},
        {"D", {{8, "G"}, {8, "H"}}},
        {"E", {{4, "I"}, {3, "J"}}},
        {"F", {{6, "K"}}},
        {"G", {{8, "N"},{8, "M"}}},
        {"H", {{4, "L"},{2, "P"}}},
        {"I", {}},
        {"J", {}},
        {"K", {}},
        {"N", {}},
        {"M", {}},
        {"L", {}},
        {"P", {}},
        };
        cout<<endl;
        auto xx = myGrap[0].second.begin();
        cout<<"First node size: "<<myGrap[0].second.size();
        cout<<"First"<<xx->first<<endl;
        
            xx++;
        cout<<"Second"<<xx->first;
    return 0;
}