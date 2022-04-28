#include<iostream>
using namespace std;
class Aman{
	public:
		int value;
		Aman* next;
};
int main(){
	Aman* head;
	Aman* A=new Aman();
	Aman* B=new Aman();
	Aman* C=new Aman();
	A->value=1;
	B->value=2;
	C->value=3;
	head=A;
	A->next=B;
	B->next=C;
	C->next=NULL;
	while(head!=NULL){
	
		cout<<head->value<<" ";
		head=head->next;
		}
}
