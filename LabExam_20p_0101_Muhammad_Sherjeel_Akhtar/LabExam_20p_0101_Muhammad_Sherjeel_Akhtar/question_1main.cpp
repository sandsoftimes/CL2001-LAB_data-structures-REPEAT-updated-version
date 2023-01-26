#include<iostream>
using namespace std;
void table(int N, int i)
{
    if (i > 9)
        return;
    cout << N <<"*"<<i<<"="<<N * i<< endl;
    return table(N, i + 1);
}
int main()
{
    cout<<"Enter the number: ";
    int N = 3;
    int limit;
    cout<<"enter limit: "<<endl;
    table(N, 1);
    return 0;
}