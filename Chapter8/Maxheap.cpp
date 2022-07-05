#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;


void display(vector<int> &m){
    for(int i=0;i<m.size();++i){
        cout<<m[i]<<" " ;
    }
    cout<<endl;
    return;
}
void heapify(vector<int> &m,int i){
    int e = m.size();
    int lar = i;
    int l = 2*i+1;
    int r = 2*i+2;
    if(l<e && m[l]>m[lar]){
        lar = l;
    }
     if(r<e && m[r]>m[lar]){
        lar = r;
    }
    if(lar != i){
        int temp = m[i];
        m[i] = m[lar];
        m[lar] = temp;
        heapify(m,lar);
    }
}

void insertMax(vector<int> &m,int key){
    int e = m.size();
    if(e == 0){
        m.push_back(key);
    }
    else{
        m.push_back(key);
        for(int i=e-1;i>=0;i--){
            heapify(m,i);
        }
    }
}

void deleteMax(vector <int> &m,int value){
    int e = m.size();
    int i;
    for(i=0;i<e;i++){
        if(value == m[i]){
            break;
        }
    }
    int temp = m[i];
    m[i] = m[e-1];
    m[e-1] = temp;
    m.pop_back();
    for(int i=e-1;i>=0;i--){
        heapify(m,i);
    }
}

int main(){
    vector <int> m;

    int choice;
    do{
        cout<<"1. insert in Max heap"<<endl;
        cout<<"2. delete from the Max heap"<<endl;
        cout<<"3. Display The Max heap"<<endl;
        cout<<"0. For Exit"<<endl;
        cout<<"ENTER THE CHOICE : ";
        cin>>choice;
        switch(choice){
        case 0:
            break;
        case 1:
            int data;
            cout<<"Enter the data: ";
            cin>>data;
            insertMax(m,data);
            cout<<endl;
            break;

        case 2:
            int value;
            cout<<"Enter the value: ";
            cin>>value;
            deleteMax(m,value);
            cout<<endl;
            break;

        case 3:
            display(m);
            cout<<endl;
            break;

        default:
            cout<<"Please enter correct choice"<<endl;
            cout<<endl;
            break;
        }
    }while(choice!=0);
    return 0;
}
