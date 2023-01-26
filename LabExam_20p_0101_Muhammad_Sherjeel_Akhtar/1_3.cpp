#include<iostream>
using namespace std;
int table(int x,int i){
    if(i=1){
        return x;
    }
    cout<<"Bag"<<endl;
    return x*table(x,i-1);
}
int main(){
    int x=2;/*  */
    int i=3;
    int val=table(2,3);
    cout<<val;
}