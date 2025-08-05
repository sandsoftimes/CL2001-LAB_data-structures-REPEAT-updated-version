#include<iostream>
using namespace std;
int table(int x,int i){
    if(i=1){
        return x;
    }
    cout<<"Bag";
    return x*table(x,i-1);
}
int main(){
    int x=2;
    int y=3;
    for(int i=1;i<=10;i++){
        cout<<"x*y"<<x*i<<endl;
    }
}