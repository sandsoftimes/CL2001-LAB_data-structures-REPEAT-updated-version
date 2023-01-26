#include <iostream>
using namespace std;
class queue{
    int *arr;
    int size , length , front , rear;
    public:
    queue(int s){
        arr = new int [s];
        size = s;
        front = 0;
        rear = -1;
        length = 0;
    }
    
    bool isfull(){
	    if(front == 0 && rear == size -1){
	        return true;
	}
	        return false;
}
    void Enqueued(int val)
    {
        if(isfull()){
            cout<<"Your Given Queue Is Overflowing";
}
        else{
            rear = rear+1%size;
            arr[rear] = val;}
}  
    void Dequeued(){
        if(isEmpty()){
            cout<<"Your Given Queue Is Empty";
}
        else{
            front = front+1%size;}
}
void queueDisplaying()
{
        if(isEmpty())
            cout<<"Your Given Queue Is Empty";
        else{
            int i;
        if( front <= rear ){
            for( i=front ; i<= rear ; i++)
                cout<<arr[i]<<" ";}
        else{
            i=front;
            while( i < size){
                cout<<arr[i]<<" ";
                i++;}
                i=0;
            while( i <= rear){
                cout<<arr[i]<<" ";
                i++;}}}
}
bool isEmpty()
{
        if(front == -1 && rear == -1)
        return true;
        else
        return false;}
};
int main(){
    queue object1(7);
    object1.Enqueued(8);
    object1.Enqueued(4);
    object1.Enqueued(12);
    object1.Enqueued(18);
    object1.Enqueued(2);
    object1.Dequeued();
    object1.Dequeued();
    object1.queueDisplaying();
    cout<<endl;
    if(object1.isEmpty()==true){
        cout<<"Yes Empty";
    }
    else{
        cout<<"Not Empty";
    }
    //object1.isfull();
    return 0;}
