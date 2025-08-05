#include<iostream>
using namespace std;
int table(int i){
    if(i=1){
        return 1;
    }
    // cout<<"Bag"<<endl;
    return 3*table(i-1);
}
int main(){
    int x=2;
    int i=3;
    int val=table(3);
    cout<<val;
    //ask a user to enter the table number and its limit store them into pointer then print the desired table using pointer and recursion
}