# CPP08 – STL Containers, Iterators and Algorithms

This module focuses on using the C++ Standard Template Library (STL), including containers, iterators and algorithms.

Compilation flags used in all exercises:
c++ -Wall -Wextra -Werror -std=c++98

---------------------------------------

EX00 – easyfind

Goal:
Implement a template function called easyfind that searches for an integer inside a container.

Requirements:
- The function must work with STL containers containing integers.
- It must return an iterator pointing to the found element.
- If the value is not found, an exception must be thrown.

Concepts used:
- Function templates
- STL iterators
- Exception handling

STL functions used:
- std::find
- container.begin()
- container.end()

---------------------------------------

EX01 – Span

Goal:
Create a class that stores up to N integers and computes the distance between them.

Main functions:
- addNumber(int) : adds a number to the container
- shortestSpan() : returns the smallest difference between two numbers
- longestSpan() : returns the largest difference between two numbers
- addRange(iterator begin, iterator end) : inserts multiple numbers using iterators

Requirements:
- Throw an exception if adding numbers exceeds the maximum capacity.
- Throw an exception if a span is requested with fewer than two numbers.

Concepts used:
- STL containers (std::vector)
- Iterators
- Exception handling
- Algorithm library

STL functions used:
- std::sort
- std::min
- std::min_element
- std::max_element
- std::distance
- vector.insert

---------------------------------------

EX02 – MutantStack

Goal:
Implement a class derived from std::stack that allows iteration through the stack.

Normally, std::stack does not provide iterators. This exercise exposes the iterators of the underlying container.

Main functions:
- begin()
- end()

Concepts used:
- Template classes
- Inheritance
- STL container adapters
- Iterators

STL elements used:
- std::stack
- container_type
- iterator
- this->c.begin()
- this->c.end()

---------------------------------------

Key concepts learned:
- Templates
- STL containers
- Iterators
- Standard algorithms
- Exception handling
- Container adapters
## Compilation

```bash
make
```
