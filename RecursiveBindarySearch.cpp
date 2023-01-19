#include<iostream>
using namespace std;
/*
 Design a C++ program to search for an element in an array using Recursive Binary Search.
 */

int RecursiveBinarySearch(int arr[], int element, int start, int end) {
    if (start>end) {
        return -1;
    }
    else {
        int mid = (start + end) / 2;
        if (arr[mid] == element) {
            return mid + 1;
        }
        else if (arr[mid] < element) {
            return RecursiveBinarySearch(arr, element, mid-1, end);
        }
        else {
            return RecursiveBinarySearch(arr, element, start, mid+1);
        }
    }
}


int main(){
    int arr[] = {23,44,45,55,67,69,78,88,99,101};
    int result =RecursiveBinarySearch(arr, 69 ,0,9);
    if(result==-1){
        cout<<"Not Found!"<<endl;
    }
    else{
        cout<<"The position is at: "<<result<<endl;
    }
}
