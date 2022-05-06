#include<iostream>
using namespace std;
class cric{
	public:
		int data;
		cric* next;
		cric(int value){
			data=value;
			next=NULL;
		}
};
void insertCric(cric* &head,int value){
	cric* n=new cric(value);
	if(head==NULL){
		head=n;
		return;
	}
	cric* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
}
void display(cric* head){
	cric* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}
int main(){
	cric* head=NULL;
	insertCric(head,1);
	insertCric(head,2);
	display(head);
	int n;
	cout<<"enter a value you want insert : ";
	cin>>n;
	insertCric(head,n);
	display(head);
	return 0;
}
