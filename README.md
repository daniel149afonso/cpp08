# CPP08 – STL Containers and Iterators

This module introduces the use of **STL containers, iterators and algorithms** in C++.

## Exercises

### ex00 – easyfind
Implement a **template function** that searches for an integer inside a container using STL iterators and `std::find`.  
If the value is not found, an exception must be thrown.

### ex01 – Span
Create a class that stores up to **N integers** and computes:
- the **shortest span** (smallest difference between two numbers)
- the **longest span** (largest difference between two numbers)

The class must also support inserting **a range of numbers using iterators**.

### ex02 – MutantStack
Implement a class derived from `std::stack` that exposes **iterators**, allowing the stack to be traversed like other STL containers.

## Compilation

```bash
make
```
