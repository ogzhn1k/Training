#include<iostream>
#include<string>
using namespace std;
template<class T>
class node {
public:
	T data;
	node<T>*next;
};
template<class T>
void append(node<T>*&front, const T&item) {
	if (front == NULL) {
		front== new node<T>;
		front->data = item;
		front->next = NULL;
	}
	else {
		node<T>*newnode, curr=front;
		while (curr->next != nullptr)
			curr = curr->next;
		newnode = new node<T>;
		newnode->data = item;
		newnode->next = nullptr;
		curr->next = newnode;
	}
}
template<class T>
void erase(node<T>*&front, const T&target) {
	node<T>*prev = nullptr, *curr = front;
	bool found = false;
	while (found == false && curr!=nullptr) {
		if(curr->data==target){
			if (prev == nullptr)
				front = front->next;
			else
				prev->next = curr->next;
			found = true;
			delete curr;
		}
		else {
			prev = curr;
			curr = curr->next;
		}
	}
	if (found == false)
		cout << "Target value has not  found!!!" << endl;
	else
		cout << target << " was deleted successfully!!!" << endl;
}
template<class T>
void writelist(node<T>*front) {
	while (front != NULL) {
		if (front->next == nullptr) {
			cout << front->data;
			break;
		}
		cout << front->data << " --> ";
		front = front->next;
	}
	cout << endl;
}
template<class T>
int length(node<T>*front) {
	int counter = 0;
	while (front != NULL) {
		counter++;
		front = front->next;
	}
	return counter;
}
template<class T>
void deletemore(node<T>*&front, const T&target) {
	node<T>*prev = nullptr, *curr = front, *deletednode;
	int i = 0;
	while (curr != NULL) {
		if (curr->data == target) {
			i = 1;
			deletednode = curr;
			if (prev == nullptr) {
				front = front->next;
				curr = front;
			}
			else {
				prev->next = curr->next;
				curr = prev->next;
			}
		}
		else {
			prev = curr;
			curr = curr->next;
		}
	}
	if (i = 0)
		cout << target << " was not found!!!"<<endl;
}
template<class T>
T lastelement(node<T>*front) {
	T last;
	while (front->next != nullptr)
		front = front->next;
	last = front->data;
	return last;
}
int main()
{ 
	node<int>*p;
	p = new node<int>;
	p = NULL;
	int choice,num;
	while (1 == 1) {
		cout << "------------------"<<endl;
		cout << "1-Append" << endl;
		cout << "2-Delete" << endl;
		cout << "3-Erase(for more than 1)" << endl;
		cout << "4-Size" << endl;
		cout << "5-Last" << endl;
		cout << "6-Print" << endl;
		cout << "------------------" << endl;
		cout << endl;
		cout << "Enter your choice : "<<endl;
		cout << "--> ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Enter the number which will appended to the list : ";
			cin >> num;
			append(p, num);
			break;
		case 2:
			cout << "Enter the number which will deleted from the list : ";
			cin >> num;
			erase(p, num);
			break;
		case 3:
			cout << "Enter the number which will deleted from the list(More than one) :  ";
			cin >> num;
			deletemore(p, num);
			break;
		case 4:
			cout << "Size --> " << length(p) << endl;;
			break;
		case 5:
			cout << "Last Element --> " << lastelement(p)<<endl;
			break;
		case 6:
			writelist(p);
			break;
		}
	}
}