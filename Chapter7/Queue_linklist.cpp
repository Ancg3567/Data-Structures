#include <iostream>
using namespace std;
struct Node{
 int data;
 Node* next;
 Node(int r)
 {
  data=r;
  next=NULL;
 }
};

struct Queue{
 Node *front, *rear;
 Queue()
 {
  front=rear=NULL;
 }

 void enQueue(int t)
 {
  Node* temp=new Node(t);
  if (rear==NULL){
   front=rear=temp;
   return;
  }
  rear->next=temp;
  rear=temp;
 }
 void deQueue()
 {
  if (front==NULL)
   return;
  Node* temp=front;
  front=front->next;
  if (front==NULL)
   rear=NULL;

  delete(temp);
 }
};

int main()
{

 Queue q;
 q.enQueue(100);
 q.enQueue(200);
 q.deQueue();
 q.deQueue();
 q.enQueue(300);
 q.enQueue(400);
 q.enQueue(500);
 q.deQueue();
 cout<<(q.front)->data << endl;
}
