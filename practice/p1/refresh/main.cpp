#include<iostream>
using namespace std;

void getAge(){
    int x;
    cout<<"Enter your birth Year:"; cin>>x;
    cout<<"Your Age is: "<<2021-x;
}

void createArray(){
    int array[3];
    for(int i =0 ; i<=3 ; ++i){
        cout<<"\n Enter Number: "; cin>>array[i];
    }

    // print the array list 
    for(int i = 0 ; i<=3 ; ++i){
        cout<<array[i]<<"\n";
    }
}

int main(){
    getAge();
    createArray();
    
    return 0;
}