#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
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
    if (head == NULL)
    {
        insert_at_head(head, val);
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
}
void inbetween(node *&head, int var)
{
    node *newnode = new node(var);
    int pos;
    cout << "\nEnter the position of the no, to be inserted: ";
    cin >> pos;
    int count = 1;
    node *temp = head;
    while (temp->next != NULL && count != pos - 1)
    {
        count++;
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next->prev = newnode;
    newnode->prev = temp;
    temp->next = newnode;
}
void delete_node(node *&head)
{
    node *temp = head;
    int pos;
    cout << "\n Enter the position to delete: ";
    cin >> pos;
    int count = 1;
    while (temp->next != NULL && count != pos)
    {
        count++;
        temp = temp->next;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
}
void display(node *&head)
{
    node *temp = head;
    cout << endl;
    while (temp->next != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

// other things are same almost
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