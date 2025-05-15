#pragma once

class MyStack {
private:
    int* arr;        // 動態陣列
    int capacity;    // 容量上限
    int topIndex;    // 指向 stack 的頂部（從 -1 開始）

public:
    MyStack(int cap);     // 建構子
    ~MyStack();           // 解構子

    void push(int x);     // 加入元素
    void pop();           // 移除頂部元素
    int top();            // 回傳頂部
    bool isEmpty();       // 判斷是否為空
    int size();           // 回傳目前大小
    void print();         // 印出整個 stack
};
