#include <iostream>
using namespace std;

class LinkList 
{
private:

	class Node 
	{
	public:
		int data;
		Node* next;

		Node()
		{
			data = 0;
			next = nullptr;

		}

		Node(int data)
		{
			this->data = data;
			this->next = nullptr;
		}

	};

	Node* head;
	Node* tail;

public:

	LinkList()
	{
		head = nullptr;
		tail = nullptr;
	}

	void insert(int);
	void printList();
	void search(int);
	void remove(int);

};

void LinkList::insert(int data)
{
	Node* newNode = new Node(data);
	Node* temp = head;
	Node* temp2;

	if (head == nullptr)
	{
		head = newNode;
		
		return;
	}

	if (head->data > data)
	{
		head = newNode;
		head->next = temp;
		return;
	}

	while (temp->next != nullptr)
	{
		if (temp->next->data > data)
		{
			temp2 = temp->next;
			temp->next = newNode;
			temp = temp->next;
			temp->next = temp2;

			return;
		}
		else
		{
			temp = temp->next;
		}

	}

	temp->next = newNode;
	
	return;

}

void LinkList::search(int data)
{
	Node* temp = head;

	while (temp != nullptr)
	{
		if (temp->data == data)
		{

			cout << "number is in the list " << endl;
			return;
		}
		else
		{

			temp = temp->next;
		}

		
	}

	
	cout << "number is not in the list " << endl;
	return;
}



void LinkList::remove(int data)
{
	Node* temp = head;
	Node* temp2;


	if (head->data == data)
	{
		temp = head->next;
		delete(head);

		head = temp;
		return;
	}


	while (temp->next != nullptr)
	{
		if (temp->next->data == data)
		{
			temp2 = temp->next->next;
			delete(temp->next);
			temp->next = temp2;
			return;
		}
		else
		{
			temp = temp->next;
		}
	}
}



void LinkList::printList()
{
	Node* temp = head;

	if (head == nullptr)
	{
		cout << "list is empty" << endl;

		return;
	}

	while (temp != nullptr)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}

	return;
}