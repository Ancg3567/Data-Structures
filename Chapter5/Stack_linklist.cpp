#include<iostream>
using namespace std;
class nd
{ 
    public:
 int data;
 nd *next;
};
class Stack
{
 nd *front;
 public:
 Stack()
 {
  front=NULL;
 }
 void push(int);
 void pop();
 void top();
};
void Stack::push(int d)
{
 nd *temp;
 temp=new nd();
 temp->data = d;
 if(front==NULL)
 {
  temp->next=NULL;
 }
 else
 {
  temp->next=front;
 }
 front=temp;
}
void Stack::pop()
{
 if(front == NULL)
  cout << "Underflow\n";
	
 else
 {
  nd *temp=front;
  front=front->next;
  delete(temp);
 }
}
void Stack::top()
{
 cout<<front->data;
}
int main(){
 Stack st;
 st.push(3);
 st.push(6);
 st.push(9);
 st.top();
}
