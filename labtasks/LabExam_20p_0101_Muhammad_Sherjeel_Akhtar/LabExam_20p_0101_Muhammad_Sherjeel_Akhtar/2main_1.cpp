#include<iostream>
using namespace std;
int size1(int arra1[]){
    int*point=arra1;
    int first=sizeof(arra1[2])/sizeof(arra1[0]);
    return 0; 

}
int main(){
    char arr1[]={'A','B','C','D','E','F','G','H'};
    char arr2[]={'A','C','E','H'};
    int sizey1=sizeof(arr1)/sizeof(arr1[0]);
    int sizey2=sizeof(arr2)/sizeof(arr2[0]);
    cout<<sizey1;
    cout<<sizey2;
}