# Bottom Most Left Leaf

### Problem: 

Find the left most leaf in a binary tree on the last level/depth.

### solution:

when dealing with a binary tree, recursion is almost always the solution. 
- first we traverse the left side then the right side while keeping track if the max depth and the max value at the depth. This works because we will traverse the left before the right and update the value everytime the depth increases.
