#include <iostream>
#include <string>
#include <queue>
#include <stack>

using namespace std;
int main()
{
  queue<string> q;


  q.push("First Message Recieved Is : Hi");
  q.push("second Message Recieved Is : How are You");
  q.push("Third Message Recieved Is : What's your name ");

  while(!q.empty()) {

    cout << q.front() << "\n";
    q.pop();
  }
  cout << endl;
  return 0;
}