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
class queue
{
    node *back;
    node *front;

public:
    queue()
    {
        back = NULL;
        front = NULL;
    }
    void enqueue(int x)
    {
        node *newnode = new node(x);
        if (front == NULL)
        {
            back = newnode;
            front = newnode;
            return;
        }
        back->next = newnode;
        back = newnode;
    }
    void pop()
    {
        if (front == NULL)
        {
            cout << "\n queue underflow";
            return;
        }
        cout << "\nThe node which is deleted is";
        cout << "\n"
             << front->data;
        node *delnode = front->next;
        delete front;
        front = delnode;
    }
    void peek()
    {
        if (front == NULL)
        {
            cout << "\nqueue underflow";
            return;
        }
        cout << front->data;
    }
};
int main()
{
    int val;
    queue active;
    int n = 0;
    while (1)
    {
        cout << "\n1.Enqueue.\n2.Pop\n3.Peek\n4.Exit";
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "\nEnter the no. to enqueue : ";
            cin >> val;
            active.enqueue(val);
            break;
        case 2:
            active.pop();
            break;
        case 3:
            active.peek();
            break;
        case 4:
            exit(1);
        default:
            break;
        }
    }
    return 0;
}