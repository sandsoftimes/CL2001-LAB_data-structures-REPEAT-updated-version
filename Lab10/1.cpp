#include<iostream>
using namespace std;
int Table(int t, int l){
    if(l==15){
        return 15;
    }
    else{
        cout<<t<<" x "<< l << " = "<< t*l<<endl;
        Table(t, l+1);  //one controlling parameter!
    }
}
int factorial(int val){
    if(val==1)
    return 1;
    else{
        cout<<"val: "<<val<<" * fun("<<val-1<<" ) "<<endl;
        return val*factorial(val-1);
    }
}
int fun(int val){
    if(val==5){
        return 5;
    }
    else{
        cout<<"val: "<<val<<" fun("<<val+1<<")"<<endl;
        return val+fun(val+1);
    }
}
int main(){
    //fun(0);
    //Table(10, 1);
    cout<<factorial(5)<<endl;
}
