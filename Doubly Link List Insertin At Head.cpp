#include<iostream>
using namespace std;

class node
{
public:

	int data;
	node* next;
	node* prev;

	node(int d)
	{
		data = d;
		next = NULL;
		prev = NULL;
	}

	void inserAtHead(node*& head, int d)
	{
		node* temp = new node(d);
		temp->next = head;
		temp->next->prev = temp;
		head = temp;
	}


	void display(node*& head)
	{
		node* temp = head;
		while (temp != NULL)
		{
			cout << temp->data << "->";
			temp = temp->next;
		}
		cout << "NULL";
	}
};

void main()
{
	node* node1 = new node(1);
	node* node2 = new node(2);
	node* node3 = new node(3);
	node* head;
	head = node1;
	node1->next = node2;
	node2->next = node3;
	node1->inserAtHead(head, 0);
	node1->display(head);
}