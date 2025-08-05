#include<iostream>
using namespace std;
class Queue{
    private:
    int *arr;
    int front;
    int rear;
    int size;
    int noofelements;
    public:
    Queue(int s){
        arr=new int[s];
        size=s;
        front=0;
        rear=-1;
        noofelements=0;
    }
    void enqueue(int val){
        if(isFull()){
            cout<<"Queue overflow"<<endl;
            return;
        }
        if(rear==(size-1))
        rear=0;
        else
        rear++;
        arr[rear]=val;
        noofelements++;
    }
    bool isFull(){
        if(noofelements==size)
        return true;
        else
        return false;
    }
    int dequeue(){
        if(isEmpty()){
            cout<<"Queue Underflow"<<endl;
            return 0;
        }
        int val=arr[front];
        if(front==(size-1))
        front=0;
        else
        front++;
        noofelements--;
        return val;
    }
    bool isEmpty(){
        if(noofelements==0)
        return true;
        else
        return false;
    }
};
int main(){
    Queue obj1(6);
    obj1.enqueue(4);
    obj1.enqueue(8);
    cout<<obj1.dequeue();
}