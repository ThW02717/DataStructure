# 📦 Stack 資料結構 Spec

## 🎯 定義

Stack（堆疊）是一種**先進後出（LIFO, Last In First Out）**的線性資料結構。常見應用包含函式呼叫紀錄、undo 機制、數學運算等。

---

## ✅ 要支援的操作（基本功能）

- `void push(int x)`：加入元素到頂部
- `void pop()`：移除頂部元素
- `int top()`：回傳頂部元素
- `bool isEmpty()`：判斷是否為空
- `int size()`：回傳當前 stack 中的元素個數
- `void print()`：印出 stack 中所有元素（從底到頂）

---

## ⏱️ 預期時間複雜度

| 操作    | 時間複雜度 |
| ------- | ---------- |
| push    | O(1)       |
| pop     | O(1)       |
| top     | O(1)       |
| isEmpty | O(1)       |
| size    | O(1)       |
| print   | O(n)       |

---

## ⚠️ 錯誤/例外處理

- 呼叫 `pop()` 時，如果 stack 是空的，要顯示錯誤訊息或 return 特殊值
- 呼叫 `top()` 時，如果 stack 是空的，要顯示錯誤訊息或 return 特殊值
- 如果是陣列實作（固定容量），push 時超過容量要防止 overflow

---

## 🧪 測資建議

- [ ] 空 stack 上呼叫 `pop()` / `top()` 是否會報錯？
- [ ] push 超過容量會不會爆炸？
- [ ] push/pop 交錯執行，top 是否正確？
- [ ] 是否可以成功印出所有元素？
- [ ] 每次操作後 `size()` 是否正確？

---

## 🧠 延伸功能（Optional）

- [ ] 支援泛型（template）
- [ ] 動態擴容 stack（模擬 vector）
- [ ] `int getMin()`：回傳 stack 中最小值，要求 O(1)（LeetCode 155 題）
- [ ] `reverse()`：反轉整個 stack
- [ ] `toVector()`：將 stack 轉為 vector 傳出
