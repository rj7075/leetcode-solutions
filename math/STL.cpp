STL Concept

1. Vector (vector)
What is it?
A dynamic array that automatically resizes.
vector<int> arr;
Common Operations
arr.push_back(10);
arr.pop_back();
arr.size();
arr.empty();
arr.front();
arr.back();
arr.clear();
Time Complexity
Operation
Complexity
Access
O(1)
push_back
O(1) Amortized
pop_back
O(1)
Insert Middle
O(n)
Delete Middle
O(n)

Used In Problems
Sliding Window
Prefix Sum
Two Pointer
Binary Search
Dynamic Programming
Graph (Adjacency List)

2. Pair (pair)
Stores two values together.
pair<int,int> p;

p.first
p.second
Example
pair<int,string> p={10,"Ranjeet"};
Useful for
Coordinates
Returning two values
Graph edges
Sorting by first or second value

3. String
Stores characters.
string s="hello";
Useful Functions
s.length()

s.size()

s.substr()

s.find()

reverse(s.begin(),s.end())

sort(s.begin(),s.end())
Interview Questions
Reverse String
Palindrome
Anagram
Longest Substring
Pattern Matching

4. Map
Stores key-value pairs in sorted order.
map<int,int> mp;
Example
mp[5]=100;

cout<<mp[5];
Time Complexity
Operation
Complexity
Insert
O(log n)
Search
O(log n)
Delete
O(log n)

Use Cases
Frequency Count
Coordinate Compression
Ordered Data
Prefix Sum Problems

5. Unordered Map
Hash Table.
unordered_map<int,int> mp;
Time Complexity
Operation
Complexity
Insert
O(1) Average
Search
O(1) Average
Delete
O(1) Average

Used For
Frequency Count
Duplicate Detection
Hashing Problems

6. Set
Stores only unique values in sorted order.
set<int> st;
Example
st.insert(10);

st.erase(10);

st.find(5);
Time Complexity
O(log n)
Used In
Remove duplicates
Ordered unique elements
Binary Search on elements

7. Unordered Set
Unique values but not sorted.
unordered_set<int> st;
Complexity
Average O(1)
Used In
Duplicate detection
Fast lookup

8. Multiset
Allows duplicate values.
multiset<int> ms;
Example
ms.insert(5);

ms.insert(5);
Output
5 5
Used In
Sliding Window Median
Maintaining sorted duplicates

9. Stack
LIFO
Last In First Out
stack<int> st;
Operations
push()

pop()

top()

empty()
Used In
Parenthesis Matching
Next Greater Element
DFS
Undo Operation
Time
All O(1)

10. Queue
FIFO
queue<int> q;
Operations
push()

pop()

front()

back()
Used In
BFS
Scheduling
Level Order Traversal

11. Deque
Double Ended Queue
deque<int> dq;
Operations
push_front()

push_back()

pop_front()

pop_back()
Used In
Sliding Window Maximum
Monotonic Queue

12. Priority Queue
Heap
Default = Max Heap
priority_queue<int> pq;
Min Heap
priority_queue<int,
vector<int>,
greater<int>> pq;
Used In
Dijkstra
Merge K Lists
Top K Elements
Heap Problems
Time
Insert
O(log n)
Delete
O(log n)
Top
O(1)

13. sort()
sort(arr.begin(),arr.end());
Descending
sort(arr.begin(),arr.end(),greater<int>());
Time
O(n log n)
Used In
Binary Search
Greedy
Two Pointer

14. reverse()
reverse(arr.begin(),arr.end());
Time
O(n)
Used In
Reverse Array
Reverse String
Next Permutation

15. unique()
Removes consecutive duplicates.
sort(arr.begin(),arr.end());

arr.erase(unique(arr.begin(),arr.end()),arr.end());
Time
O(n)
Used In
Remove Duplicates

16. lower_bound()
Returns first element >= x
lower_bound(arr.begin(),arr.end(),x)
Example
1 2 4 4 5

lower_bound(4)

returns first 4
Complexity
O(log n)
Used In
Binary Search
LIS
Searching in Sorted Arrays

17. upper_bound()
Returns first element > x
upper_bound(arr.begin(),arr.end(),x)
Example
1 2 4 4 5

returns 5

18. binary_search()
binary_search(arr.begin(),arr.end(),x);
Returns
true

false
Complexity
O(log n)

19. next_permutation()
Generates next lexicographical permutation.
next_permutation(arr.begin(),arr.end());
Used In
Permutation Problems
Backtracking

20. accumulate()
Finds sum.
accumulate(arr.begin(),arr.end(),0);
Complexity
O(n)
Used In
Prefix Sum
Sum Problems

21. count()
Counts occurrences.
count(arr.begin(),arr.end(),5);
Complexity
O(n)

22. find()
Finds an element.
find(arr.begin(),arr.end(),5);
Returns Iterator.

STL Concept Questions
Array vs Vector
Array
Vector
Fixed Size
Dynamic Size
Faster
Slightly Slower
No resize
Auto Resize
Stack Memory
Heap Memory

Interview Use
Use Vector unless the size is fixed.

Map vs Unordered Map
Map
Unordered Map
Sorted
Unsorted
Tree
Hash Table
O(log n)
O(1) Average

Use Map when order matters.
Use Unordered Map for frequency counting.

Set vs Unordered Set
Set
Unordered Set
Sorted
Unsorted
O(log n)
O(1)


Stack vs Queue
Stack
Queue
LIFO
FIFO
DFS
BFS
Undo
Scheduling


Queue vs Deque
Queue
Deque
One End Insert
Both Ends
One End Delete
Both Ends

Deque is mainly used in Sliding Window Maximum.

Priority Queue
Stores the highest (or lowest) priority element on top.
Applications
Dijkstra
Huffman Coding
Merge K Sorted Lists
K Largest Elements
Scheduling Problems

Time Complexity of STL Containers
Container
Search
Insert
Delete
Array
O(n)
O(n)
O(n)
Vector
O(n)
O(1) Back
O(n)
Set
O(log n)
O(log n)
O(log n)
Multiset
O(log n)
O(log n)
O(log n)
Map
O(log n)
O(log n)
O(log n)
Unordered Set
O(1) Avg
O(1) Avg
O(1) Avg
Unordered Map
O(1) Avg
O(1) Avg
O(1) Avg
Stack
O(1)
O(1)
O(1)
Queue
O(1)
O(1)
O(1)
Deque
O(1) (ends)
O(1) (ends)
O(1) (ends)
Priority Queue
O(1) Top
O(log n)
O(log n)


Which STL Should You Think of During an Interview?
Problem Pattern
STL/Data Structure
Frequency Count
unordered_map
Remove Duplicates
set, unordered_set, unique()
Sorted Unique Data
set
Fast Lookup
unordered_set, unordered_map
K Largest/Smallest
priority_queue
BFS / Level Order
queue
DFS / Parentheses / Next Greater
stack
Sliding Window Maximum
deque
Binary Search on Sorted Data
lower_bound(), upper_bound(), binary_search()
Sorting
sort()
Reverse Array/String
reverse()
Sum of Elements
accumulate()
Count Occurrences
count() or unordered_map
Search in a Vector
find()
Generate All Permutations
next_permutation()



100 DSA Questions Roadmap (C++)
📚 Module 1 : STL & Basics (10 Questions)
These questions make you comfortable with STL.
Print Vector
Vector vs Array
Frequency Count using unordered_map
Count Characters using map
Remove Duplicates using set
Sort using Custom Comparator
Pair Sorting
Lower Bound & Upper Bound
Priority Queue (Max Heap & Min Heap)
Iterator Practice
Concepts Learned
Vector
Map
Set
Sorting
Iterators
STL

📚 Module 2 : Arrays (15 Questions)
Largest Element
Second Largest Element
Check Sorted Array
Remove Duplicates
Rotate Array Left
Rotate Array Right
Move Zeros to End
Union of Two Arrays
Intersection of Two Arrays
Missing Number
Maximum Consecutive Ones
Single Number
Longest Subarray with Given Sum
Majority Element
Best Time to Buy and Sell Stock
Patterns
Traversal
Prefix Sum
Hashing

📚 Module 3 : Binary Search (10 Questions)
Binary Search
First Occurrence
Last Occurrence
Count Occurrences
Search Insert Position
Floor and Ceil
Search in Rotated Array
Find Peak Element
Square Root using Binary Search
Koko Eating Bananas
Patterns
Binary Search on Answer
Rotated Arrays

📚 Module 4 : Strings (10 Questions)
Reverse String
Palindrome
Valid Anagram
Longest Common Prefix
Remove Outer Parentheses
Reverse Words
Roman to Integer
String Compression
Longest Palindrome
Isomorphic Strings
Patterns
Two Pointer
Hashing

📚 Module 5 : Hashing (10 Questions)
Two Sum
Contains Duplicate
Happy Number
Longest Consecutive Sequence
Top K Frequent Elements
Group Anagrams
Find Duplicate
Majority Element II
Subarray Sum Equals K
Continuous Subarray Sum

📚 Module 6 : Two Pointer & Sliding Window (10 Questions)
Two Sum II
Container With Most Water
Remove Duplicates
Merge Sorted Arrays
Longest Substring Without Repeating Characters
Minimum Window Substring
Maximum Consecutive Ones III
Sliding Window Maximum
Fruits Into Baskets
Permutation in String

📚 Module 7 : Stack & Queue (10 Questions)
Valid Parentheses
Min Stack
Next Greater Element
Next Smaller Element
Daily Temperatures
Stock Span Problem
Largest Rectangle in Histogram
Sliding Window Maximum
Implement Queue using Stack
Implement Stack using Queue

📚 Module 8 : Linked List (10 Questions)
Reverse Linked List
Middle of Linked List
Detect Cycle
Merge Two Lists
Remove Nth Node
Reverse in K Groups
Intersection of Linked List
Palindrome Linked List
Flatten Linked List
LRU Cache

📚 Module 9 : Trees (10 Questions)
Inorder Traversal
Preorder Traversal
Postorder Traversal
Level Order Traversal
Maximum Depth
Diameter
Balanced Tree
Lowest Common Ancestor
Binary Tree Right View
Vertical Order Traversal

📚 Module 10 : Graphs (10 Questions)
BFS
DFS
Number of Islands
Flood Fill
Rotten Oranges
Detect Cycle in Graph
Topological Sort
Course Schedule
Dijkstra
Disjoint Set Union (Union Find)

📚 Module 11 : Dynamic Programming (5 Questions)
Fibonacci
Climbing Stairs
House Robber
Coin Change
Longest Increasing Subsequence

📚 Module 12 : Backtracking (5 Questions)
Generate Parentheses
Subsets
Permutations
Combination Sum
N Queens

⭐ Most Important Interview Questions (Solve Multiple Times)
These are asked very frequently:
✅ Two Sum
✅ Longest Substring Without Repeating Characters
✅ Binary Search
✅ Merge Intervals
✅ Rotate Array
✅ Search in Rotated Sorted Array
✅ Valid Parentheses
✅ Next Greater Element
✅ Daily Temperatures
✅ Sliding Window Maximum
✅ Merge Two Sorted Lists
✅ Reverse Linked List
✅ Detect Cycle in Linked List
✅ LRU Cache
✅ Level Order Traversal
✅ Lowest Common Ancestor
✅ Number of Islands
✅ Course Schedule
✅ Dijkstra's Algorithm
✅ House Robber
✅ Coin Change
✅ Longest Increasing Subsequence
✅ Subarray Sum Equals K
✅ Top K Frequent Elements
✅ Kth Largest Element in an Array

