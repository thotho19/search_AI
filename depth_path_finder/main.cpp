#include <iostream>
#include <list>
#include <vector>
#include <string>
using namespace std;
void depth(vector<pair<string , list<string>>> myMap , string goal){
    vector<string> open;
    vector<string> close;
    
    for (auto x : myMap)
    {
        bool visited = false;
        //1-Push first node to the open array
        if (open.size() == 0)
        {
            open.push_back(x.first);
        }
        //2-check if the node was the goal or not
        if (x.first == goal)
        {
            cout<<"Goal has been Found:"<<endl;
            
            // Print the close
            for (auto item : close)
                cout << item << " -> ";
            cout<<x.first<<endl;
            // push the node to the close
            close.push_back(x.first);
            break;
        }
        //3-check if existed in the close array
        for (auto item : close)
        {
            if (item == x.first)
            {
                // open.erase(it);
                open.erase(open.begin());
                // Dynamic programming goes here
                visited = true;
            }
        }
        if(visited == true)
            continue;
        //4-check if the node has childern
        if (x.second.size() == 0)
        {
            // open.erase(it);
            open.erase(open.begin());
            close.push_back(x.first);
            continue;
        }
        //5- push to the close array
        else
        {
            close.push_back(x.first);
            //6-find m and delete from the open array
            open.erase(open.begin());
            // open.erase(it);
        }
        //7-for each second push into the open array
        for (auto i = x.second.rbegin() ; i != x.second.rend() ; i++)
        {
            
            open.insert(open.begin() , *i);

        }
    }
}
int main()
{
    vector<pair <string, list<string>>> myMap = {
        {"A", {"B", "C", "D"}},
        {"B", {"E","F"}},
        {"E" , {"I" ,"J" }},
        {"I" , {}},
        {"J" , {}},
        {"F" , {"K"}},
        {"K" , {}},
        {"C" , {"F" , "G"}},
        {"G" , {"L" , "N"}},
        {"L" , {}},
        {"N" , {}},
        {"D" , {"G" , "H"}},
        {"H" , {"P" , "Q"}},
        {"P" , {}},
        {"Q" , {}}
        };
    string goal;
    cout<<"Enter the targeted goal: "; cin>>goal;
    depth(myMap , goal);
    
    return 0;
}
