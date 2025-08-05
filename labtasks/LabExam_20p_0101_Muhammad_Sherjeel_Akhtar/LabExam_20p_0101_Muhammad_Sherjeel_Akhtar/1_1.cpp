#include<iostream>
using namespace std;
int table(int l){
    if(l==1){
        return 3;
    }
    return 3*table(l-1);
}
int main(){
    int number;
    int limit;
    //cout<<"enter the number: ";
    //cin>>number;
    cout<<"enter the limit: ";
    cin>>limit;
    cout<<table(limit);
}
//ask a user to input the table number and its limit