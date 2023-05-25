# C - Stacks, Queues - LIFO, FIFO

## General
### What do LIFO and FIFO mean?
- LIFO (Last-In, First-Out) - In LIFO, the last item inserted into the stack is the first one to be removed.
 This means that the order of insertion is reversed when accessing the elements.

- FIFO (First-In, First-Out) - This is the standard behavior of a stack, where the item that is inserted first is the first one to be removed.

### What is a stack, and when to use it?
- A stack is a fundamental data structure that follows the LIFO (Last-In, First-Out) principle.
 It is a collection of elements with two primary operations: push and pop.

Push: It adds an element to the top of the stack.
Pop: It removes the top element from the stack.

### What is a queue, and when to use it?
- A queue is another fundamental data structure that follows the FIFO (First-In, First-Out) principle.
It is a collection of elements with two primary operations: enqueue and dequeue.

Enqueue: It adds an element to the end of the queue.
Dequeue: It removes the element from the front of the queue.
A queue behaves like a queue of people waiting in line, where the first person who joins the queue is the first one to be served.
New elements are always added at the end of the queue, and elements are removed from the front.

### What are the common implementations of stacks and queues?
The common implementations of stacks and queues are as follows:

1. Arrays: Stacks and queues can be implemented using arrays. In this implementation, elements are stored in a contiguous block of memory,
 and operations like push (enqueue) and pop (dequeue) are performed by manipulating the indices of the array.
 Arrays provide fast access to elements by index, but they have a fixed size and may require resizing if the capacity is exceeded.

2. Linked Lists: Stacks and queues can also be implemented using linked lists. In this implementation, 
each element (node) in the stack or queue contains the actual data and a reference to the next element. 
New elements are added by creating a new node and updating the next pointers, while removal involves adjusting the pointers accordingly.
Linked lists allow dynamic resizing and efficient insertion and deletion at the beginning or end, 
but they require additional memory for storing the pointers.

3. Doubly Linked Lists: Doubly linked lists can be used to implement queues where elements are inserted and removed from both ends.
Each node contains references to both the previous and next nodes, allowing efficient insertion and deletion at both ends. 
This implementation is useful for double-ended queues (deque) where elements can be added or removed from either end.

4. Linked List with Tail Pointer: This implementation is specifically useful for queues. 
It is similar to a singly linked list but with an additional reference to the tail node. 
This tail pointer allows efficient insertion at the end (enqueue) and avoids the need to traverse the entire list to append a new element. 
Removal still happens from the front (dequeue), but it can be optimized with a head pointer for quick access.

