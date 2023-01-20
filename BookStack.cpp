#include<iostream>
using namespace std;
/*
 Create a class BOOK with members ISBN, Title, Author and Price. Write
 a C++ program to construct a stack data structure for N BOOK objects
 and write member functions to perform the following operations on it:
    a) PUSH-To add a new BOOK object to the stack
    b) POP- To remove a BOOK object from the stack
 */

class Book{
private:
    double Price;
    string ISBN, Title,Author;
public:
    Book(string ISBN, string Title, string Author, double Price){
        this->ISBN=ISBN;
        this->Author=Author;
        this->Price=Price;
        this->Title=Title;
    }

    void Display(){
        cout<<"\nBook Title: "<<Title<<endl;
        cout<<"Author: "<<Author<<endl;
        cout<<"ISBN: "<<ISBN<<endl;
        cout<<"Price: "<<Price<<endl;
    }
};

class StackBook {
private:
    int top, N;
    Book *books;
public:
    StackBook(int size) {
        N = size;
        books[N] = {Book("", "", "", 0)};
        top = -1;
    }

    void push(Book book) {
        if (top == N - 1) {
            cout << "Stack Overflow" << endl;
        } else {
            this->books[++top] = book;
            cout << "Book added to stack." << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack underflow" << endl;
        } else {
            books[top].Display();
            cout << "Book removed from stack." << endl;
            top--;
        }
    }
};


int main(){
    int n=2;
    StackBook Stack(n);
    Book b1("123", "Book 1", "Author 1", 10.99);
    Stack.push(b1);
    Book b2("456", "Book 2", "Author 2", 12.99);
    Stack.push(b2);
    Stack.pop();
    Stack.pop();
    return 0;
}
