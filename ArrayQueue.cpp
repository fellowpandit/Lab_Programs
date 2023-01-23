/*
 Design a C++ Program to perform the following operations on Linear Queue of Inegers
 (Array Implementation of Queue with maximum size MAX)
 a. Insert an Element to a Linear Queue.
 b. Delete an Element from the Linear Queue.
 c. Demonstrate Overflow and Underflow situtations on LInear Queue.
 d. Display the status of LInear Queue.
*/

#include<bits/stdc++.h>
#define MAX 10
using namespace std;

class Queue{
private:
	int front=0, rear=-1, que[MAX];
public:
	void _insert(){
		if(rear==MAX-1)cout<<"Queue Overflow.";
		else{
			cout<<"Enter data:";
			rear++;
			cin>>que[rear];
		}
	}
	
	void _delete(){
		if(rear<front)cout<<"Queue Underflow.";
		else{
			cout<<que[front]<<"-> Deleted!"<<endl;
			Move();			//Moves front end of the queue to 0
			rear--;
		}
	}
	
	void Move(){
		for(int i=front+1; i<=rear;i++){
			que[i-1] = que[i];
		}
	}
	
	void _display(){
		if(rear<front)cout<<"Queue is empty.";
		else{
			for(int i=front; i<=rear; i++){
				cout<<i+1<<"\t"<<que[i]<<endl;
			}
		}
	}
};


int main() {
    int op;
    bool chk = true;
    Queue Q;
    cout<<"\nArray Created!\n\n1.Display\n2.Insert\n3.Delete\n4.Exit"<<endl;
    while(chk){
        cout<<"\nEnter your choice: ";
        cin>>op;
        switch (op) {
            case 1:
                Q._display();
                break;
            case 2:
                Q._insert();
                break;
            case 3:
                Q._delete();
                break;
            case 4:
                chk = false;
                break;
            default:
                cout<<"Invalid Choice"<<endl;
        }
    }
    return 0;
}
