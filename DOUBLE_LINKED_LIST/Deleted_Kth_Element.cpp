#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *back;

public:
  Node(int data1)
  {
    data = data1;
    next = nullptr;
    back = nullptr;
  };

public:
  Node(int data1, Node *next1, Node *back1)
  {
    data = data1;
    next = next1;
    back = back1;
  };
};

Node *Convert2Array(vector<int> &arr)
{
  Node *head = new Node(arr[0]);
  Node *prev = head;

  for (int i = 1; i < arr.size(); i++)
  {
    Node *temp = new Node(arr[i]);
    temp->back = prev;
    prev->next = temp;
    prev = temp;
  }
  return head;
}


Node* DeleteHead(Node* head)
{
   if(head == NULL || head->next == NULL )
     return NULL;

     Node*prev = head;
     head = head->next;
     head->back = nullptr;
     prev->next = nullptr;
     delete prev;

     return head;
}
Node* DeleteTail(Node* head)
{
  Node* temp = head;

  while(temp->next != NULL)
  {
    temp = temp->next;
  }

  Node* prev = temp->back;
  temp->back = nullptr;
  prev->next = nullptr;
 
  delete temp;

  return head;

}

int print(Node *head)
{
  Node* temp = head;

  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

Node* Delete_kth_Element(Node* head , int k)
{
  if(head == NULL)
     return NULL;

   int cnt = 0;
  Node* temp = head;
   while(temp != NULL)
   {
      cnt++;
     if(cnt == k) break;

     temp = temp->next;
   }
   
   Node* prev = temp->back;
   Node* front = temp->next;
  
    if(prev == NULL && front == NULL)
    return NULL;

   else if(prev == NULL)
      return DeleteHead(head);

   else if(front == NULL)
     return DeleteTail(head);
    

    prev->next = front;
    front->back = prev;

    temp->next=nullptr;
    temp->back=nullptr;
    delete temp;

  return head;
}
int main()
{
  vector<int> arr = {10,12,5,7,8,9};
  Node* head = Convert2Array(arr);
  Node* head1 = Delete_kth_Element(head , 4);
  print(head1);
  return 0;
}