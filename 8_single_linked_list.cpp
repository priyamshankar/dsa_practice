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
void insert_at_head(node *&head, int val)
{
    node *newnode = new node(val);
    newnode->next = head;
    head = newnode;
}
void insert_at_tail(node *&head, int val)
{

    node *newnode = new node(val);
    node *temp = head;
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    return;
}
void inbetween(node *&head, int val)
{
    node *newnode = new node(val);
    node *temp = head;
    int pos;
    cout << "\nEnter the position to which the no, is to be inserted" << endl;
    cin >> pos;
    int count = 1;
    while (temp->next != NULL && count != pos - 1)
    {
        count++;
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void delete_node(node *&head)
{
    int pos, count;
    cout << "\nenter the position to delete";
    cin >> pos;
    node *temp = head;
    node *temp2 = head;
    count = 1;
    while (temp->next != NULL && count != pos - 1)
    {
        count++;
        temp = temp->next;
    }
    temp2 = temp->next;
    cout << "\nThe data: " << temp2->data << " is deleted";
    temp->next = temp2->next;
    delete temp2;
}
void display(node *head)
{
    node *temp = head;
    if (head == NULL)
    {
        cout << "head is empty" << endl;
        return;
    }
    // cout<<endl;
    while (temp->next != NULL)
    {
        cout
            << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return;
}
int main()
{
    node *head = NULL;
    int n;
    int m;
    while (1)
    {
        cout << "To insert at head put 1\nTo insert at tail put 2\nTo insert in between put 3\nTo delete a node put 4\nTo only display put 5\nTo exit put 6: ";
        cin >> m;
        cout << ".....\n";
        switch (m)
        {
        case 2:

            cin >> n;
            insert_at_tail(head, n);
            display(head);
            break;
        case 1:
            cin >> n;
            insert_at_head(head, n);
            display(head);
            break;
        case 5:
            display(head);
            break;
        case 6:
            exit(1);
            break;
        case 3:
            cin >> n;
            inbetween(head, n);
            display(head);
            // default:
            break;
        case 4:
            delete_node(head);
            break;
        }
    }
    return 0;
}