General instructions
====================

- Use only standard C++.
- You are invited to use C++11 and C++14 features.
- Make your code roughly "production quality" in formatting, choosing variable and function names, etc.
- Comment your code.
- There is no need to follow any specific code style guide.
- Add a makefile to allow us to compile and test the code easily on Linux.

Exercise 1
==========

Consider the following recursively defined function

f(0) = 1
f(1) = 1
f(2n) = f(n)
f(2n+1) = f(n) + f(n-1)

Write a program in C++ that computes f(n) for a given n by directly
applying the recursion relation. Compute f(123456789012345678). Pay
attention to not doing integer overflows.

Measure the wall-clock time it takes the program to run. Use e.g.
the command 'time'. On my machine when compiled with -O3, the program
takes around 13 secs.

Optimize the code so that it runs faster. It's ok to make a reasonable
tradeoff with memory. The runtime goal should be in the millisecond
regime.

Exercise 2
==========

Implement a thread-safe hashmap including the following features:

1. Constructing the map with fixed table size given upfront.

2. Thread-safe support lookup, insertion, and deletion.

3. Do not use a global lock to ensure thread-safety: multiple writers should be able to access one instance of the map at the same time.

4. You are not allowed to use STL containers.

5. You may use all concurrency-related features in C++11 and C++14.

6. Please include a main program or unit test that checks that the map works.

7. Please explain in a short note your approach to thread-safety.

8. You will get bonus points for:
   - table resizing
   - genericity (not bound to specific types)
   - good test coverage
