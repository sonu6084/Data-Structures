#include<bits/stdc++.h>
using namespace std;

class Node{
    public : 
        int data;
        Node* next;
};

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    int count = 1;
    Node* temp = new Node();
    temp = head;
    while(head->next !=NULL){
        cout<<head->data<<" ";
        head = head->next;
        count++;

    }
    cout<<head->data;
    head = temp;
    cout<<endl;

    Node* temp1 = NULL;
    while(head!= NULL){
        temp = head->next;
        head->next = temp1;
        temp1 = head;
        head = temp;
    }
    while(temp1->next != NULL){
        cout<<temp1->data<<"->";
        temp1 = temp1->next;
    }
    cout<<temp1->data;
    
    
}