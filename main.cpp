

#include <iostream>
using namespace std;

struct Node
{
    int value; // значение элемента списка
    Node* next; // указатель на следующий элемент списка
};

class List
{
    Node* head; //Голова
    Node* tail; //Задняя часть
    
public:
    List()
    {
        head=NULL;
    }
    ~List()
    {
    }
    void Push(int x);
    void Show ();
};

int main()
{
    List list;
    list.Push(12);
    list.Push(5);
    list.Push(3);
    list.Push(100);
    list.Show();
}
void List :: Push(int x)
{
    Node *temp=new Node;
    temp->value=x;
    temp->next=head;//
    head=temp;
    
}
void List :: Show ()
{
    Node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
}
