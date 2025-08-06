# Heap Sort in C

This project demonstrates the **Heap Sort algorithm** implemented in **C**. Heap Sort is a comparison-based sorting technique based on a **binary heap** data structure. It sorts an array in **O(n log n)** time and does not require additional memory beyond the array itself.

---

## 📌 Features
- Implements **Heap Sort** using a **max heap**.
- Uses `heapify()` to maintain the heap property.
- Includes `swap()` function for element swapping.
- Displays **original** and **sorted arrays** in the output.

---

## 🛠 How It Works
1. Build a **max heap** from the input array.
2. Swap the root (maximum element) with the last element.
3. Reduce the heap size and call `heapify()` to restore the max heap property.
4. Repeat until the entire array is sorted.

---

## 🧩 Code Structure
- **swap()**: Swaps two integers.
- **heapify()**: Ensures the subtree rooted at index `i` satisfies the max heap property.
- **heapSort()**: Sorts the array using Heap Sort algorithm.
- **main()**: Demonstrates the algorithm with an example array.

---

## ▶️ Example Output

Original array: 10 3 7 33 0
Sorted array: 0 3 7 10 33