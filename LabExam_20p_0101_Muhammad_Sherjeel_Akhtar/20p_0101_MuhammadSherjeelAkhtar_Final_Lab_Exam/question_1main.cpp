#include<iostream>
using namespace std;
void table(int *number, int i)
{
    if (i > 9)
        return;
    cout << *number <<"*"<<i<<"="<<*number * i<< endl;
    return table(number, i + 1);
}
int main()
{
    int*p;
    p=&number
    int number;
    cout<<"Enter The Number U Want To Find Table:"<<endl;
    cin>>number;
    cout<<"Limit is:"<<9<<endl;
    // int limit;
    int *p=&number;
    //cout<<"enter limit: "<<endl;
    table(p, 1);
    return 0;
}

