#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node* next;
  Node* back;

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
  Node* head = new Node(arr[0]);
  Node *prev = head;

  for (int i = 1; i < arr.size(); i++)
  {
    Node *temp = new Node(arr[i], nullptr, prev);
    prev->next = temp;
    prev = temp;
  }
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
int main()
{
  vector<int> arr = {12, 5, 7, 8};
  Node* head = Convert2Array(arr);
  Node* head1 = DeleteTail(head);
  print(head1);
  return 0;
}