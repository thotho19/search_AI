#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <string>
using namespace std;

int main()
{
    vector<pair<string, map<int, string>>> myGrap = {
        {"A", {{5, "B"}, {4, "C"}, {8, "D"}}},
        {"B", {{7, "E"}, {6, "F"}}},
        {"C", {{5, "F"}, {3, "G"}}},
        {"D", {{8, "G"}, {8, "H"}}},
        {"E", {{4, "I"}, {3, "J"}}},
        {"F", {{6, "K"}}},
        {"G", {{8, "N"},{7, "M"}}},
        {"H", {{4, "L"},{2, "P"}}},
        {"I", {}},
        {"J", {}},
        {"K", {}},
        {"N", {}},
        {"M", {}},
        {"L", {}},
        {"P", {}},
        };
    vector<string> open = {myGrap[0].first};
    vector<string> close;
    int index = 0;
    string goal;
    cout<<"Enter the Targeted Goal: "; cin>>goal;
    // for (int i = 0; i < myGrap.size(); i++)
    // {
    //     cout << myGrap[i].first << ": ";
    //     for (auto j : myGrap[i].second)
    //         cout << j.first << j.second;
    //     cout << endl;
    // }

    do
    { 
        bool visited = false;
        bool deadEnd = false;
        bool plateau = false;
        //2-check if the node was the goal or not
        if (open[index] == goal)
        {
            cout << "Goal has been Found:" << endl;
            // Print the close
            for (auto item : close)
                cout << item << " -> ";
            cout<<open[index]<<endl;
            // push the node to the close 
            close.push_back(open[index]);   
            break;
        }
        //3-check if existed in the close array
        for(auto item : close){
            if(item == open[index]){
                //open.earse(it);
                open.erase(open.begin());
                // Dynamic programming goes here
                visited = true;
            }
        }
        if(visited == true)
            continue;
        //4-check if the node has childern
        for(int i = 0 ; i<myGrap.size() ; i++){
            if(open[index] == myGrap[i].first){
                //Check if the node has a children
                if(myGrap[i].second.size() != 0){
                    close.push_back(open[index]);
                    open.erase(open.begin());
                    // Push the children to the open array
                    for(auto j = myGrap[i].second.rbegin() ; j != myGrap[i].second.rend() ; j++)
                        {  
                            open.insert(open.begin() , j->second);
                        }
                        // Break the current loop
                        break;
                }else{
                     cout<<"Dead-End :( "<<endl;
                    // Print the close
                    for (auto item : close)
                        cout << item << " -> ";
                    cout<<open[index]<<endl;
                    // push the node to the close 
                    close.push_back(open[index]);   
                    deadEnd = true;
                    break;
                }
            }
        }
        if(deadEnd == true)
            break;
    } while (open.size() != 0);

    return 0;
}