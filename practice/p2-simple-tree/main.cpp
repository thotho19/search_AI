#include <iostream>
using namespace std;

int fact(int n){
    if(n==1)
        return 1;
    else
        return (n*fact(n-1));
}
void largest(int *arr , int i ,int &max){
    if(i==4)
        cout<<max;
    else    
        {
            if(arr[i]>max)
                max = arr[i];
            largest (arr , ++i , max);
        }
}
int main()
{
    // int n;
    // cout<<"Enter Fact number: "; cin>>n;
    // cout<<fact(n);

    // find the largest number
    int array[4] = {100,20,30,40};
    int arrSize = sizeof(array)/sizeof(array[0]);
    cout<<arrSize<<"\n";

    for(int i = 0 ; i<= 3 ; ++i)
        cout<<array[i]<<"\n";

    largest(array , 0 , array[0]);

    return 0;
}
