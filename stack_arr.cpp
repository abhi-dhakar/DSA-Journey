#include<iostream>
using namespace std;
int top = -1;
int arr[5];

void push(int data){
    if(top >= 4){
        cout<<"stack overflow\n";
        return;
    }
    top++;
    arr[top] = data;
}
int pop(){
    if(top == -1){
        cout<<"stack is underflow\n";
        exit(1);
    }
    int value;
    value = arr[top];
    top--;
    return value;
}
int main(){
push(4);
push(5);
push(6);
push(3);
push(6);
push(3);
int a = pop();
cout<<a;
return 0;
}