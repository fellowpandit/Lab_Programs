#include <iostream>
/*
Design and implement a C++ Program for the following array
operations.
a. Creating an array of N Integer Elements
b. Display the array Elements with Suitable Headings
c. Inserting an Element at a given valid Position
d. Deleting an Element at a given valid Position
e. Exit.
*/
#define N 10
using namespace std;

class Array{
private:
    int arr[N]={0},n=0;
public:
    void _display(){
        int count=0,i=0;
        cout<<"Array elements are:"<<endl;
        for(i;i<N;i++){
            if((arr[i]!=0)) {
                cout<<i+1<<".\t"<<arr[i]<<endl;
            }
            else{
                count++;
            }
            if(count==10){
                cout<<"Array is empty!"<<endl;
            }
        }
    }

    void _insert(){
        int pos;
        cout<<"Enter the position:";
        cin>>pos;
        if((arr[pos]==0)&&pos<N&&pos>1){
            cout<<"Enter the number:";
            cin>>arr[pos-1];
            cout<<"Inserted!"<<endl;
        }
        else{
            cout<<"Invalid";
        }
    }

    void _delete(){
        int pos;
        cout<<"Enter the position:";
        cin>>pos;
        if((arr[pos]!=0)&&pos<N&&pos>1){
            arr[pos-1]==0;
            cout<<"Deleted!";
        }
        else{
            cout<<"Invalid";
        }
    }

};

int main() {
    int op;
    bool chk = true;
    Array Arr;
    cout<<"\nArray Created!\n\n1.Display\n2.Insert\n3.Delete\n4.Exit"<<endl;
    while(chk){
        cout<<"\nEnter your choice: ";
        cin>>op;
        switch (op) {
            case 1:
                Arr._display();
                break;
            case 2:
                Arr._insert();
                break;
            case 3:
                Arr._delete();
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
