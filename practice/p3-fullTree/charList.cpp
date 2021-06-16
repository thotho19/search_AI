#include<iostream>
#include<list>
using namespace std;

int main(){
    list<char> nodes;
    for(int i = 0 ; i< 3 ; i++)
        nodes.push_back('A');

    for(auto v : nodes)
        cout<<v;
}