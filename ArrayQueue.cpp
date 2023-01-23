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
	int front=0, rear=0, que[MAX];
public:
	void _insert(){
		if(rear==MAX-1)cout<<"Queue Overflow.";
		else{
			cout<<"Enter data:";
			cin>>que[rear];
			rear++;
		}
	}
	
	void _delete(){
		if(rear<front)cout<<"Queue Underflow.";
		else{
			cout<<que[front]<<endl;
			front++;
			Move();
			rear--;
		}
	}
	
	void Move(){
		for(int i=front; i<=rear;i++){
			que[i-1] = que[i];
		}
	}
	
	void _display(){
		if(rear<front)cout<<"Queue is empty.";
		else{
			for(int i=front; i<rear; i++){
				cout<<i+1<<"\t"<<que[i]<<endl;
			}
		}
	}
};

int main(){
	Queue q;
	while(true){
		
	}
	q._insert();
	q._delete();
	q._display();
	return 0;
}
