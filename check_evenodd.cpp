#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number to check even odd: ";
    cin>>num;
    if(num%2==0){
        cout<<num<<" is even";
    }
    else{
        cout<<num<<" is odd";
    }

    return 0;
}