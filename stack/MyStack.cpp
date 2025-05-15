#include <iostream>
#include "MyStack.h"
using namespace std;

MyStack::MyStack(int cap) {
    // TODO: 初始化 capacity、arr、topIndex
    capacity = cap;
    arr = new int[capacity];
    topIndex = -1; // ifempty then topindex - -1
}

MyStack::~MyStack() {
    // TODO: 釋放 arr 記憶體
    delete[] arr;
}

void MyStack::push(int x) {
    // TODO: 如果已滿，印出 "Stack overflow"
    // 否則把 x 放進 arr 並更新 topIndex
    if (topIndex >= capacity - 1) {
        cout << "stack overflow" << endl;
        return;
    }
    arr[++topIndex] = x; // push success
}

void MyStack::pop() {
    // TODO: 如果為空，印出 "Stack underflow"
    // 否則把 topIndex 往下移
    if (topIndex == -1) {
        cout << "stack underflow" << endl;
        return;
    }
    --topIndex;
}

int MyStack::top() {
    // TODO: 如果為空，印出 "Stack is empty" 並回傳 -1
    // 否則回傳 topIndex 對應的值
    if (topIndex == -1) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    else{
      return arr[topIndex]; 
    }
    // placeholder
}

bool MyStack::isEmpty() {
    // TODO: 檢查 topIndex 是否為 -1
    return topIndex == -1;
}

int MyStack::size() {
    // TODO: 回傳目前元素數量
    return topIndex + 1;
}

void MyStack::print() {
    // TODO: 印出 stack 內容（bottom to top）
    if (isEmpty()) {
        cout << "[!] Stack is empty" << endl;
        return;
    }
    for (int i = 0; i <= topIndex; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
