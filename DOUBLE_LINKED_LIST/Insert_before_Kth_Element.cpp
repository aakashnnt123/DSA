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

Node* InsertbeforeHead(Node* head , int val)
{
  Node* newnode = new Node(val,head ,nullptr);
  head->back = newnode;
  head = newnode;

  return head;
}
Node* InsertbeforeKthElement(Node* head ,int k , int val)
{
  if(k ==1)
  {
    return InsertbeforeHead(head , 15);
  }

  Node* temp = head;
  int cnt =0;
  while(temp != NULL)
  {
    cnt++;
    if(cnt == k)break;
    temp=temp->next;
  }

  Node* prev = temp->back;
  Node* newnode = new Node(val , temp,prev);
  prev->next = newnode;
  temp->back =newnode;

  return head ;
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
  Node* head1= InsertbeforeKthElement(head , 4 , 15);
  
  print(head1);
}