#include<iostream>
using namespace std;
class Node{public:int data;
Node*next;
Node(int valve){
    data=valve;
}};
class DDL{private:Node*head;
int length;
public:
DDL(){
    head=NULL;
    length=0;
}void insertion(int valve){Node*n=new Node(valve);
if(head==NULL){
head=n;
return;}
Node*temp=head;
while(temp!=NULL){temp=temp->next;}}
};
int main(){}