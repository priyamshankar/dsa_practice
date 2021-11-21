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
void push(node *&head)
{
    int val;
    cout << "\nEnter the value to push : ";
    cin >> val;
    node *newnode = new node(val);
    node *temp = head;
    newnode->next = head;
    head = newnode;
}
void pop(node *&head)
{
    node *temp = head;
    // if (head->data = NULL)
    // {
    //     cout << "\n*****No elements in lists*****\n";
    //     return;
    // }
    temp = temp->next;
    cout << "******Popping the data : ";
    cout << head->data;
    cout << "******" << endl;
    delete head;
    head = temp;
}
void show_front(node *&head)
{
    cout << head->data;
}
int main()
{
    node *head = NULL;
    int n;
    while (1)
    {
        cout << "\n1. Push\n2. Pop\n3. Show\n4. Exit : ";
        cin >> n;
        cout << endl;
        switch (n)
        {
        case 1:
            push(head);
            break;
        case 2:
            pop(head);
            break;
        case 3:
            show_front(head);
            break;
        case 4:
            exit(1);
        default:
            break;
        }
    }
    return 0;
}