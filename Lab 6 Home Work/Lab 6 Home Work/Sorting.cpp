#include<iostream>
using namespace std;
class Node{public:int data;Node*next,*prev;
Node(int valve){data=valve;next=prev=NULL;}};
class DDL{private:Node*head;int length;
public:DDL(){head=NULL;length=0;}
void insertion(int vault){Node*n=new Node(vault);
    if(head==NULL){head=n;
}Node*temp;temp=head;
while(temp->next!=NULL)temp=temp->next;
temp->next=n;n->prev=temp;
}void printer(){Node* walls; walls=head;
//cout<<walls->data<<endl;
if(walls->next=NULL){cout<<walls<<endl;
return;}
while(walls->next!=NULL){cout<<walls->data;
walls=walls->next;}
// while(walls!=NULL)
// cout<<walls->data;
// walls=walls->next;
}
//void printer(){Node*temp;temp=head;
//while(temp->next!=NULL){cout<<temp->data;temp=temp->next;}}
};
int main(){DDL obj1;obj1.insertion(1);obj1.insertion(3);
obj1.printer();
}
