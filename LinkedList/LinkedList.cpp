#include<iostream>

using namespace std;


class Node
{
	public:
		int key;
		Node* Next;
		int data;

		Node()
		{
			key=0;
			data = 0;
			Next = NULL;
		}

		Node(int k,int d)
		{
			key = k;
			data = d;
		}

};


class SinglyLinkedList
{
	public:
		Node* head;

		SinglyLinkedList()
		{
			head=NULL;
		}
		SinglyLinkedList(Node* n)
		{
			head=n;
		}


	void DisplayLinkedList()
	{
		Node* temp = head;
		while(temp != NULL)
		{
			cout<<temp->data<<" ";
			temp = temp->Next;
		}
	}
// Checking whether a node with key value exists
	Node* NodeExists(int k)
	{
		Node* temp = head;
		while(temp != NULL)
		{
			if(temp->key == k)
			{
				break;
			}

		}
		return temp;
	}

// Append Nodes

	void AppendNode(Node* n)
	{
		if(NodeExists(n->key)==NULL)
		{
			if(head==NULL)
			{
				head=n;
			}
		}
	}
};




int main()
{

	return 0;
}
