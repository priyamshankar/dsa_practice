#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insert_at_tail(node *&head, int val)
{

    node *newnode = new node(val);
    node *temp = head;
    if (head==NULL){
        head=newnode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
void display(node *head)
{
    node *temp = head;
    if (head==NULL){
        cout<<"head is empty"<<endl;
        return;
    }
    while (temp->next != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}
int main()
{
    node *head = NULL;
    int n;
    while (n != 0)
    {
        cin >> n;
        display(head);
        insert_at_tail(head, n);
    }
    // insert_at_tail(head,45);
    // display(head);
}