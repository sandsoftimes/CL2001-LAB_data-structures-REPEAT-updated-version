#include<iostream>
#include<string.h>
#include <bits/stdc++.h>
using namespace std;
class Stack {
    int top;
    int Sizey;
    int*arr;
public:
    Stack(int size){
        top = -1;
        Sizey = size;
        arr = new int [Sizey];
    }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();
};

bool Stack::isEmpty(){
    return (top < 0); 
} 
bool Stack::isFull(){ 
    return (top == Sizey - 1); 
} 
int Stack::peek(){ 
    return arr[top]; 
} 
bool Stack::push(int x) { 
    if (top >= (Sizey-1)) {
        cout << "Stack Is Overflowing";
        return false;
    }
    else {
        top++;
        arr[top] = x;
        return true;
    }
}
int Stack::pop()
{
    if (top < 0) {
        cout << "Stack Is Underflowing";                                                                                                                                          return INT_MIN; 
    } 
    else { 
        int x = arr[top]; 
        top--; return x; 
    }
} 

int priority (char alpha)
{ 
    if(alpha == '+' || alpha =='-') 
        return 1; 
    if(alpha == '*' || alpha =='/') 
        return 2; 
    if(alpha == '^') 
        return 3; 

    return 0; 
} 

string convert(string infix) 
{ 
    int i = 0; 
    string postfix = ""; 

    Stack s(20); 
    while(infix[i]!='\0') 
    { 
        if(infix[i]>='a' && infix[i]<='z'|| infix[i]>='A'&& infix[i]<='Z')          
        {
            postfix += infix[i];
            i++;
        }
        else if(infix[i]=='(')
        {
            s.push(infix[i]);
            i++;
        }
        else if(infix[i]==')')
        {
            while(s.peek()!='(')
                postfix += s.pop();
                
            s.pop();
            i++;
        }
        else            
        {
            while (!s.isEmpty() && priority(infix[i]) <= priority(s.peek())){
                postfix += s.pop();
            }
            s.push(infix[i]);
            i++;
        }
    }
    while(!s.isEmpty()){
        postfix += s.pop();
    }
    cout << "Postfix is : " << postfix; 
    return postfix;
}
int main()
{
    string infix = "a+b*(c^d-e)^(f+g*h)-I"; 
    string postfix;
    cout<<"The Given ";
    postfix = convert(infix);
    return 0;
}