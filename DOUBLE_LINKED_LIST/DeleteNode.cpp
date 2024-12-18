#include <bits/stdc++.h>
using namespace std;

class Node
{
  public:
  int data;
  Node* next;
  Node* back;

  public:
  Node(int data1,Node* next1 , Node* back1)
  {
    data = data1;
    next =  next1;
    back = back1;
  }
   Node(int data1)
  {
    data = data1;
    next =  nullptr;
    back = nullptr;
  }
};

Node* Convert2DLL(vector<int> &arr)
{
  Node* head = new Node(arr[0]);
  Node* temp = head;

  for(int i=1;i < arr.size();i++)
  {
    Node* newnode = new Node(arr[i],nullptr,temp);
    temp->next = newnode;
    temp = newnode;
  }
  return head;
}

void DeleteNode(Node* temp)
{
  Node* prev = temp->back;
  Node* front = temp->next;

  if(front == NULL)
  {
    prev->next = nullptr;
    temp->back = nullptr;
     delete temp;
     return;
  }

  prev->next = front;
  front->back = prev;

  temp->next = nullptr;
  temp->back = nullptr;

  delete temp;

}
int print(Node* head)
{
  Node* temp = head;

 while(temp !=NULL)
 {
  cout<<temp->data<<" ";
  temp = temp->next;
 }
}


int main()
{
  vector<int>arr = {12,10,5,11,9,6,7};
  Node* head = Convert2DLL(arr);
  DeleteNode(head->next->next->next->next->next->next);
  print(head);
}