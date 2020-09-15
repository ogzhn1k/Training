/*#include<iostream>
using namespace std;
template<class T>
class dnode {
public:
	 T data;
	 dnode<T>*prev;
     dnode<T>*next;
};
template<class T>
void append(dnode<T>*&head, T newdata) {
	dnode<T>*newnode;
	dnode<T>*curr = head;
	newnode= new dnode<int>;
	if (head == NULL) {
		newnode->data = newdata;
		newnode->next = NULL;
		newnode->prev = NULL;
		head = newnode;
	}
	else {
		while (curr->next != NULL)
		curr = curr->next;

		newnode->data = newdata;
		curr->next = newnode;
		newnode->prev = curr;
		newnode->next = NULL;
	}
}
template<class T>
void erase(dnode<T>*&head,T &target) {
	dnode<T>*curr,*deletednode;
	curr = new dnode<T>;
	curr = head;
	while (curr != NULL) {
		if (curr->data == target) {
			deletednode = curr;
			if (head->prev == NULL) {
				head = head->next;
				head->prev = NULL;
				head->next = NULL;
				curr = head;
			}
			else {
				curr->prev = curr->next;
				curr = curr->prev;
			}
			delete deletednode;
		}
		else {
			curr->prev = curr;
			curr = curr->next;
		}
	}
}
template<class T>
void end(dnode<T>*head) {
	while (head->next != NULL)
		head = head->next;
	if(head->next=NULL)
		cout << "Last element of the list is : " << endl;
}
template<class T>
void begin(dnode<T>*head) {
	if(head->prev==NULL)
		cout << "First element of the list is : " << endl;
}
template<class T>
void length(dnode<T>*head) {
	T cntr=0;
	while (head != NULL) {
		cntr++;
		head = head->next;
	}
	cout << "Length of the list is : " << cntr << endl;
}
template<class T>
void writelist(dnode<T>*head) {
	while (head != NULL) {
		cout << head->data << "--->";
		head = head->next;
	}
	cout << endl;
}
int main() {
	typename dnode<int>*head = NULL;
	int choice,number;
	while (1 == 1) {
		cout << "1-APPEND" << endl;
		cout << "2-ERASE" << endl;
		cout << "3-BEGIN" << endl;
		cout << "4-END" << endl;
		cout << "5-LENGTH" << endl;
		cout << "6-LIST" << endl;
		cout << "-------------" << endl;
		cout << "Enter your choice : ";
		cin >> choice;
		cout << endl;
		if (choice == 1) {
			cout << "Enter the number which you want add to the list : ";
			cin >> number;
			append(head, number);
		}
		if (choice == 2) {
			cout << "Enter the number which you want delete from the list : ";
			cin >> number;
			erase(head, number);
		}
		if (choice == 3) {
			begin(head);
		}
		if (choice == 4) {
			end(head);
		}
		if (choice == 5) {
			length(head);
		}
		if (choice == 6) {
			cout << "LIST : ";
			writelist(head);
		}
	}
}*/