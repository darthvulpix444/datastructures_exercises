###Level-Order Traversal for BST
##Problem:
Provide a non-recursive method for traversing a tree level by level for a given Binary Search Tree (BST). Hence,
this method will take a BST as an input parameter
Approach:
##1. Algorithm Design
#BFS Algorithm
A level-order traversal algorithm using Breadth-First Search (BFS) was designed for a Binary Search Tree (BST).
BFS is a breadth-first search algorithm that sequentially visits nodes at each level.
#c. Worst-Case Scenario:
In the worst-case scenario, BFS algorithm explores the entire graph, visiting each node and edge.
#d. Complexity Calculation:
Time complexity of the BFS algorithm: O(V+E).
##2.Implementation of Binary Search Tree (BST) ADT in C++
#Node Class
A TreeNode class was created to represent each node in the BST. This class includes a key value and left and
right sub-trees.
#BST Class
The BinarySearchTree class defines the general structure of a BST. It includes fundamental operations such as
insertion, deletion, and search.
##3. Level-Order Traversal Method
#Implementation of BFS Algorithm
The BFS algorithm was implemented to traverse nodes level by level in the BST. A queue data structure
was used for this purpose.
##4. Main Method
#Running the Program
A main function was implemented to create a BST, add nodes, and demonstrate the level-order traversal
method.
