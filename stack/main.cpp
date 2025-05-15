#include "MyStack.h"
#include <iostream>
using namespace std;

#include "MyStack.h"
#include <iostream>
using namespace std;

// 👇 測資函式：你可以多加幾組測試都放這裡
void run_all_tests() {
    cout << "--- basic ---" << endl;
    MyStack st1(5);
    st1.push(10);
    st1.push(20);
    st1.print();         // 預期：10 20
    cout << "top: " << st1.top() << endl; // 預期：20
    st1.pop();
    cout << "top after pop: " << st1.top() << endl; // 預期：10
    st1.print();

    cout << "\n---  Overflow  ---" << endl;
    MyStack st2(2);
    st2.push(1);
    st2.push(2);
    st2.push(3);         // 預期：stack overflow

    cout << "\n---  Underflow  ---" << endl;
    MyStack st3(1);
    st3.pop();           // 預期：stack underflow
    st3.top();           // 預期：stack is empty
    st3.print();         // 預期：stack is empty

    cout << "\n---  Stress test ---" << endl;
    MyStack st4(10);
    for (int i = 0; i < 10; ++i) st4.push(i);
    st4.print();         // 預期：0 1 2 ... 9
    for (int i = 0; i < 5; ++i) st4.pop();
    st4.print();         // 預期：0 1 2 3 4
}

int main() {
    run_all_tests();  // ✅ 執行所有測資
    return 0;
}
