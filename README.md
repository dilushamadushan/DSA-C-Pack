# DSA-C-Pack

A comprehensive collection of classic Data Structures and Algorithms implemented in C. This repository includes source code and usage examples for fundamental structures such as Linked Lists (Singly, Doubly), Stacks, Queues, Trees (BST), and Sorting algorithms. It is designed for students, educators, and anyone looking to learn or review DSA concepts with clear, practical C code.

## Features

- **Linked Lists**
  - Singly Linked List: Basic operations (insert, delete, search, display)
  - Doubly Linked List: Enhanced operations (insert/delete at positions, search, count)
- **Stack Implementations**
  - Array-based Stack
  - Linked List-based Stack (with reverse operation)
- **Queue Implementations**
  - Linked List-based Queue
- **Trees**
  - Binary Search Tree (BST) with insert, delete, search, traversals, and balancing check
- **Sorting Algorithms**
  - Insertion Sort (Ascending and Descending)

## Folder Structure

```
.
├── Linked List/
│   ├── Simple Linked List/
│   ├── Doubly Linked list/
│   ├── Queue Implement/
│   └── Stack Implement/
├── Stack/
├── Trees/
├── Shorting/
└── ...
```

## Getting Started

### Prerequisites

- GCC or any C compiler

### Compiling and Running Examples

**Singly Linked List:**
```sh
cd "Linked List/Simple Linked List"
gcc main.c inc.c insert.c delete.c -o sll
./sll
```

**Doubly Linked List:**
```sh
cd "Linked List/Doubly Linked list"
gcc main_dll.c inc_dll.c insert_dll.c delete_dll.c -o dll
./dll
```

**Stack (Linked List):**
```sh
cd "Linked List/Stack Implement"
gcc s_main.c -o stack
./stack
```

**Queue (Linked List):**
```sh
cd "Linked List/Queue Implement"
gcc q_main.c -o queue
./queue
```

**Binary Search Tree:**
```sh
cd Trees
gcc mainBst.c insert.c delete.c search.c traversal.c utils.c -o bst
./bst
```

**Insertion Sort:**
```sh
cd Shorting
gcc insertSort.c -o insertsort
./insertsort
```

## Contributing

Contributions are welcome! Please open issues or submit PRs for improvements, bug fixes, or new data structures and algorithms.

