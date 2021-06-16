#include<iostream>
#include<list>
#include<vector>
using namespace std;

int main(){

    // Create simple 1-D vector 
    vector<int> vector1;
    for(int i = 0 ; i< 3 ; ++i){
        vector1.push_back(i);
    }
    for(int i = 0 ; i< vector1.size(); ++i){
        cout<<vector1[i];
    }
    cout<<endl;
    // Listed vector 
    vector<vector<int>> listedVector = {
        {0,1,2},
        {3,4,5},
        {7,8,9}
    };

    for(int i = 0 ; i< listedVector.size(); i++){
        for(int j = 0 ; j< listedVector.size(); j++){
            cout<<listedVector[i][j];
        }
        cout<<endl;
    }

    // Using list
    list<int> list1;
    for(int i = 0 ; i<3 ; i++){
        list1.push_back(i);
    }

    for(auto v : list1)
        {
            cout<<v;
        }

    cout<<endl;


    // Listed list
    list<list<int>> listedList = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    cout<<"Listed List size: "<<listedList.size();

    // Code below does not work for some resonse
    // for(int i = 0 ; i<listedList.size() ; i++)
    //     {
    //         for(auto &j : listedList)
                
    //         cout<<endl;
    //     }
    return 0;
}