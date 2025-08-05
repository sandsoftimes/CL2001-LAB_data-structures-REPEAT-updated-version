#include <iostream>
#include <string>
using namespace std;
class StackNode
{
	public: string data;
	StackNode *next;
	StackNode(string data, StackNode *top)
	{
		this->data = data;
		this->next = top;
	}
};
class MyStack
{
	public: StackNode *top;
	int count;
	MyStack()
	{
		this->top = nullptr;
		this->count = 0;
	}
	int size()
	{
		return this->count;
	}
	bool isEmpty()
	{
		if (this->size() > 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	void push(string data)
	{
		this->top = new StackNode(data, this->top);
		this->count++;
	}
	string pop()
	{
		string temp = "";
		if (this->isEmpty() == false)
		{
          	StackNode *t = this->top;
			temp = this->top->data;
			this->top = this->top->next;
			this->count--;
          	delete t;
		}
		return temp;
	}
	string peek()
	{
		if (!this->isEmpty())
		{
			return this->top->data;
		}
		else
		{
			return "";
		}
	}
};
class Conversion
{
	public:
		bool isOperator(char text)
		{
			if (text == '+' || text == '-' || 
                text == '*' || text == '/' || 
                text == '^' || text == '%')
			{
				return true;
			}
			return false;
		}
	bool isOperands(char text)
	{
		if ((text >= '0' && text <= '9') || 
            (text >= 'a' && text <= 'z') || 
            (text >= 'A' && text <= 'Z'))
		{
			return true;
		}
		return false;
	}
	void postfixToInfix(string postfix)
	{
		int size = postfix.length();
		MyStack *s = new MyStack();
		string auxiliary = "";
		string op1 = "";
		string op2 = "";
		bool isValid = true;
		for (int i = 0; i < size && isValid; i++)
		{
			if (this->isOperator(postfix[i]))
			{
				if (s->size() > 1)
				{
					op1 = s->pop();
					op2 = s->pop();
					auxiliary = "(" +  op2 + (postfix[i])  +  op1  +  ")";
					s->push(auxiliary);
				}
				else
				{
					isValid = false;
				}
			}
			else if (this->isOperands(postfix[i]))
			{
				auxiliary = (postfix[i]);
				s->push(auxiliary);
			}
			else
			{
				isValid = false;
			}
		}
		if (isValid == false)
		{
			cout << "Invalid postfix : " << postfix << endl;
		}
		else
		{
			cout << " Postfix : " << postfix << endl;
			cout << " Infix   : " << s->pop() << endl;
		}
	}
};
int main()
{
	Conversion *task = new Conversion();
	string postfix = "ab+c*ef+g/+";
	cout<<"The Infix Notation Is:";
	task->postfixToInfix(postfix);
	postfix = "abc*de-/+";
	cout<<"The Infix Notation Is:";
	task->postfixToInfix(postfix);
	return 0;
}
