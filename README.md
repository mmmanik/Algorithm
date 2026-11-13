# **Algorithm – Important Questions and Answers**

নিচে ৫টি প্রশ্নের উত্তর পরীক্ষার খাতায় লেখার উপযোগী করে সাজিয়ে দিলাম। উত্তরগুলো সহজ English-এ দেওয়া হয়েছে, যাতে তুমি সহজে বুঝতে ও পরীক্ষায় লিখতে পারো। প্রতিটি প্রশ্নের মার্কস অনুযায়ী উত্তরের দৈর্ঘ্য রাখা হয়েছে।

## **Question 1. What is an Algorithm? Write down the main criteria of an Algorithm. [1+3 Marks]**

### **Definition (1 Mark)**

An algorithm is a finite sequence of well-defined steps or instructions used to solve a particular problem or perform a specific task.

### **Main Criteria of an Algorithm (3 Marks)**

An algorithm must satisfy the following five criteria:

1. **Input:** An algorithm may have zero or more inputs.
2. **Output:** It must produce at least one output or result.
3. **Definiteness:** Every step must be clear, precise and unambiguous.
4. **Finiteness:** An algorithm must terminate after a finite number of steps.
5. **Effectiveness:** Every operation must be simple, basic and executable within a finite amount of time.

**Example:** An algorithm to add two numbers:

1. Start.
2. Take two numbers A and B.
3. Calculate Sum = A + B.
4. Display Sum.
5. Stop.

## **Question 2. Briefly explain some properties of a good algorithm. [2 Marks]**

A good algorithm should have the following properties:

1. **Correctness:** It should produce the correct output for every valid input.
2. **Efficiency:** It should use minimum time and memory.
3. **Simplicity:** It should be easy to understand and implement.
4. **Finiteness:** It should finish its execution after a finite number of steps.
5. **Generality:** It should solve all valid instances of a particular problem, not just one specific case.

## **Question 3. What kind of problems are solved by algorithms? [2 Marks]**

Algorithms are used to solve problems that can be expressed as a sequence of logical and computational steps.

Some common types of problems solved by algorithms are:

1. **Searching Problems:** Finding a particular element in a collection of data.
   - Example: Linear Search, Binary Search.
2. **Sorting Problems:** Arranging data in ascending or descending order.
   - Example: Bubble Sort, Merge Sort.
3. **Optimization Problems:** Finding the best solution among several possible solutions.
   - Example: Shortest Path Problem.
4. **Mathematical Problems:** Performing calculations or solving mathematical equations.
   - Example: Finding factorial, GCD.
5. **Graph Problems:** Finding paths or connections between vertices.
   - Example: Graph Traversal (BFS, DFS).

Algorithms can solve many other computational problems as well.

## **Question 4. What do you understand by Asymptotic Notation? Define Big Omega, Big Theta and Big O notation with proper examples. [1+6 Marks]**

### **Definition of Asymptotic Notation (1 Mark)**

Asymptotic notation is a mathematical method used to describe the growth rate of an algorithm's time or space complexity as the input size (n) becomes very large.

It helps us compare the efficiency of algorithms without depending on hardware or programming languages.

There are three main types of asymptotic notation:

### **1. Big O Notation – O (Upper Bound)**

**Definition:** Big O notation represents the upper bound of an algorithm's growth rate. It describes an upper limit on how fast the algorithm's time or space complexity can grow.

**Example:**

Suppose the time complexity of an algorithm is:

\\[ f(n)=3n^2+5n+2 \\]

For large values of n, the highest-order term dominates. Therefore,

\\[ f(n)=O(n^2) \\]

So, the Big O notation is O(n²).

### **2. Big Omega Notation – Ω (Lower Bound)**

**Definition:** Big Omega notation represents the lower bound of an algorithm's growth rate. It describes a lower limit on how slowly the algorithm's time or space complexity can grow.

**Example:**

Suppose,

\\[ f(n)=3n^2+5n+2 \\]

For large values of n, the dominant term is n².

Therefore,

\\[ f(n)=\Omega(n^2) \\]

So, the Big Omega notation is Ω(n²).

### **3. Big Theta Notation – Θ (Tight Bound)**

**Definition:** Big Theta notation represents the tight bound of an algorithm's growth rate. It means the function has both an upper bound and a lower bound of the same order.

**Example:**

Suppose,

\\[ f(n)=3n^2+5n+2 \\]

The function grows proportionally to n² for large values of n.

Therefore,

\\[ f(n)=\Theta(n^2) \\]

So, the Big Theta notation is Θ(n²).

### **Difference between Big O, Big Omega and Big Theta**

| Notation      | Meaning     | Bound                       |
| ------------- | ----------- | --------------------------- |
| Big O (O)     | Upper bound | Maximum growth limit        |
| Big Omega (Ω) | Lower bound | Minimum growth limit        |
| Big Theta (Θ) | Tight bound | Both upper and lower bounds |

O(1)

O(log n)

O(n)

O(n log n)

O(n²)

O(2ⁿ)

10203040506050100150200Input size nGrowth

\\(O(1):\\;\text{1},\quad O(\log_2 n):\\;\text{4}\\)

\\(O(n):\\;\text{16},\quad O(n\log_2 n):\\;\text{64}\\)

\\(O(n^2):\\;\text{256},\quad O(2^n):\\;\text{65,536}\\)

View

\\(\text{All curves}\\)\\(O(1)\\)\\(O(\log_2 n)\\)\\(O(n)\\)\\(O(n\log_2 n)\\)\\(O(n^2)\\)\\(O(2^n)\\)

\\(n\\)

48163264

Give feedback

**Important for exams:** Remember these three terms:

- Big O = Upper Bound
- Big Omega = Lower Bound
- Big Theta = Tight Bound

## **Question 5. What do you mean by Time and Space Complexity of an Algorithm? Explain the Time-Space Trade-off concept with an example. [5 Marks]**

### **1. Time Complexity**

**Definition:** Time complexity is the amount of time an algorithm takes to complete its execution as a function of the input size (n).

It measures how the number of operations increases when the input size increases.

**Example:**

```
for(int i = 0; i < n; i++)
{
    cout << i << " ";
}
```

The loop executes n times.

Therefore, the time complexity is:

\\[ O(n) \\]

### **2. Space Complexity**

**Definition:** Space complexity is the total amount of memory required by an algorithm to execute as a function of the input size (n).

It includes memory used for variables, data structures and auxiliary storage.

**Example:**

```
int sum = 0;

for(int i = 0; i < n; i++)
{
    sum += i;
}
```

The algorithm uses only a fixed amount of extra memory.

Therefore, its auxiliary space complexity is:

\\[ O(1) \\]

*Note: Auxiliary space means the extra memory used by an algorithm, excluding the input storage.*

### **3. Time-Space Trade-off**

**Definition:** Time-space trade-off is a technique in which we increase memory usage to reduce execution time, or use less memory at the cost of more execution time.

In other words, an algorithm can sometimes become faster by using more memory.

**Example: Searching an Element**

Suppose we have an array containing 1,000 elements and we want to search for a particular value.

**Method 1: Linear Search**

- Checks elements one by one.
- Time Complexity: O(n).
- Auxiliary Space Complexity: O(1).

**Method 2: Hash Table**

- Stores elements in a hash table.
- Searching takes O(1) average time.
- Requires O(n) extra memory to store the elements.

| Method        | Time Complexity | Extra Space |
| ------------- | --------------- | ----------- |
| Linear Search | O(n)            | O(1)        |
| Hash Table    | O(1) average    | O(n)        |

**Explanation:** Linear search requires less memory but takes more time. On the other hand, a hash table requires additional memory but provides faster searching.

This is called the **Time-Space Trade-off**.

## **Quick Revision Before Exam**

| Question | Important points to remember                                   |
| -------- | -------------------------------------------------------------- |
| Q1       | Definition + 5 criteria                                        |
| Q2       | Correctness, Efficiency, Simplicity, Finiteness, Generality    |
| Q3       | Searching, Sorting, Optimization, Mathematical, Graph problems |
| Q4       | Asymptotic notation + O, Ω, Θ                                  |
| Q5       | Time complexity + Space complexity + Time-space trade-off      |

**My suggestion:** Give special attention to Question 1, Question 4 and Question 5. These cover fundamental concepts of algorithm analysis.

# **Algorithm – Important Questions and Answers (Part 2)**

নিচে Question 6–11-এর উত্তর university examination-এর উপযোগী করে সহজ English-এ সাজিয়ে দিলাম। প্রতিটি উত্তরে মার্কস অনুযায়ী প্রয়োজনীয় definition, explanation, example এবং pseudocode দেওয়া হয়েছে।

## **Question 6. Explain the main role of Algorithm in Computing. [2 Marks]**

An algorithm plays an important role in computing because it provides a systematic step-by-step procedure for solving computational problems.

The main roles of an algorithm are:

1. **Problem Solving:** It provides a logical and systematic way to solve complex problems.
2. **Efficiency:** It helps reduce execution time and memory usage.
3. **Automation:** It allows computers to perform tasks automatically.
4. **Accuracy:** It helps produce correct and reliable results.
5. **Optimization:** It helps find the best possible solution to a problem.

**Conclusion:** Algorithms are the foundation of computer programming and efficient problem-solving.

## **Question 7. Define Divide and Conquer Strategy. Give Some Examples of Divide and Conquer Method. [3 Marks]**

### **Definition**

Divide and Conquer is an algorithm design strategy that solves a complex problem by dividing it into smaller subproblems, solving them independently, and combining their results to obtain the final solution.

### **Three Main Steps**

1. **Divide:** Break the main problem into smaller subproblems.
2. **Conquer:** Solve the smaller subproblems recursively.
3. **Combine:** Combine the solutions of the subproblems to get the final result.

[Sorting Part 2 , Divide & Conquer , Merge , Quick and Heap Sort ( Data Structure & Algorithm ) | by Ayush Raj | Medium](https://images.openai.com/static-rsc-4/0Swpcznv6H8WgN230P485jbI2oGDcAPbFAiHFHnfdo2oPma5jXSNT0tTEJInwjH2Rxl1N02g-kP7XXYfvMSxQ4rLH390cb6axtOF0NTbm0-OfI1nso9be66vn75a1nUSMTWNOQN1e7qzZJonatIWPLb-qVgY_WugNr4IJRBgqOU?purpose=inline)

[medium.com](https://medium.com/%40ayushraj.cs/sorting-part-2-divide-conquer-merge-quick-and-heap-sort-data-structure-algorithm-6ecb3a4b3468?utm_source=chatgpt.com)

### **Examples**

1. **Merge Sort:** Divides an array into two halves, sorts them and merges the sorted halves.
2. **Quick Sort:** Selects a pivot and partitions the array into smaller parts.
3. **Binary Search:** Repeatedly divides the search space into two halves to find an element.

**Conclusion:** Divide and Conquer makes complex problems easier to solve by breaking them into smaller problems.

## **Question 8. Show that the Worst Case Complexity of Insertion Sort with Explanation. [4 Marks]**

### **Definition**

Insertion Sort is a sorting algorithm that builds a sorted array one element at a time by inserting each element into its correct position.

### **Worst Case Analysis**

The worst case occurs when the input array is sorted in descending order, but we want to sort it in ascending order.

Example:

`[5, 4, 3, 2, 1]`

In this case, each new element must be compared with all previously sorted elements and shifted to the right.

### **Step-by-step Analysis**

| Pass     | Comparisons / Shifts |
| -------- | -------------------- |
| 1st pass | 1                    |
| 2nd pass | 2                    |
| 3rd pass | 3                    |
| 4th pass | 4                    |
| Total    | 1+2+3+4              |

For n elements:

\\[ T(n)=1+2+3+\cdots +(n-1) \\]

Using the arithmetic series formula:

\\[ T(n)=\frac{n(n-1)}{2} \\]

\\[ T(n)=\frac{n^2-n}{2} \\]

Ignoring constants and lower-order terms:

\\[ \boxed{T(n)=O(n^2)} \\]



Final Answer

**Worst Case Time Complexity of Insertion Sort = O(n²).**



### **C++ Code**

```
void insertionSort(int a[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;

        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}
```

## **Question 9. Show that the Worst Case Complexity of Selection Sort with Explanation. [4 Marks]**

### **Definition**

Selection Sort is a sorting algorithm that repeatedly selects the smallest element from the unsorted portion of an array and places it at the beginning.

### **Worst Case Analysis**

Selection Sort works by finding the minimum element in the unsorted portion and swapping it with the first unsorted element.

Example:

`[5, 4, 3, 2, 1]`

### **Step-by-step Analysis**

For an array of n elements:

- First pass: (n−1) comparisons.
- Second pass: (n−2) comparisons.
- Third pass: (n−3) comparisons.
- Last pass: 1 comparison.

Total number of comparisons:

\\[ T(n)=(n-1)+(n-2)+\cdots+2+1 \\]

Using the arithmetic series formula:

\\[ T(n)=\frac{n(n-1)}{2} \\]

\\[ T(n)=\frac{n^2-n}{2} \\]

Ignoring constants and lower-order terms:

\\[ \boxed{T(n)=O(n^2)} \\]



Final Answer

**Worst Case Time Complexity of Selection Sort = O(n²).**



### **C++ Code**

```
void selectionSort(int a[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int mn = i;

        for(int j = i+1; j < n; j++)
        {
            if(a[j] < a[mn])
                mn = j;
        }

        swap(a[i], a[mn]);
    }
}
```

**Important Note:** Selection Sort has O(n²) time complexity in the best, average and worst cases because it always performs the same number of comparisons.

Pass 1: scan the unsorted suffix

Comparison 1 of 7 comparisons0 sortedMinimum 8Comparing 7

8

7

6

5

4

3

2

1

1

2

3

4

5

6

7

8

Compare 7 with 8; the bars stay fixed while this pass scans

Drag to inspect

Shuffle + restartPlay throughStep onceFinish this pass

Give feedback

## **Question 10. How do you find the Maximum of 4 Numbers? [4 Marks]**

We can find the maximum of four numbers by comparing them one by one.

### **Algorithm**

1. Start.
2. Input four numbers A, B, C and D.
3. Assume A is the maximum number.
4. Compare B with maximum. If B is greater, update maximum.
5. Compare C with maximum. If C is greater, update maximum.
6. Compare D with maximum. If D is greater, update maximum.
7. Print maximum.
8. Stop.

### **Pseudocode**

```
START

INPUT A, B, C, D

MAX = A

IF B > MAX
    MAX = B

IF C > MAX
    MAX = C

IF D > MAX
    MAX = D

PRINT MAX

STOP
```

### **Example**

Suppose,

\\[ A=15,\ B=25,\ C=10,\ D=30 \\]

| Comparison        | Maximum value |
| ----------------- | ------------- |
| Initially MAX = A | 15            |
| B > MAX (25 > 15) | 25            |
| C > MAX (10 > 25) | 25            |
| D > MAX (30 > 25) | 30            |



Final Answer

&#x20;Maximum number = **30**



**Complexity Analysis:**

- Time Complexity: O(1), because only 3 comparisons are required.
- Space Complexity: O(1), because only a fixed number of variables are used.

## **Question 11. Write the Pseudocode for Quick Sort. Show the Steps to Sort the Following Array Using Quick Sort Algorithm. [3+4 Marks]**

Given array:

\\[ A=\\{4,10,9,3,5,7,8,6\\} \\]

### **Part A: Pseudocode of Quick Sort [3 Marks]**

**Definition:**

Quick Sort is a Divide and Conquer sorting algorithm that selects a pivot element and partitions the array into two parts. Elements smaller than the pivot are placed on the left, and larger elements are placed on the right.

### **Pseudocode**

**QUICK-SORT(A, low, high)**

```
QUICK-SORT(A, low, high)

1. IF low < high THEN

2.     p = PARTITION(A, low, high)

3.     QUICK-SORT(A, low, p-1)

4.     QUICK-SORT(A, p+1, high)

5. END IF
```

**PARTITION(A, low, high)**

Here, we select the last element as the pivot.

```
PARTITION(A, low, high)

1. pivot = A[high]
2. i = low - 1

3. FOR j = low TO high - 1

4.     IF A[j] <= pivot THEN
5.         i = i + 1
6.         SWAP A[i] AND A[j]

7. SWAP A[i+1] AND A[high]

8. RETURN i+1
```

### **Part B: Step-by-step Sorting Using Quick Sort [4 Marks]**

**Given Array:**

INITIAL ARRAY

**4**

**10**

**9**

**3**

**5**

**7**

**8**

**6**

We will use the last element as the pivot in each partition.

**Step 1: First Partition**

- Pivot = 6
- Smaller elements than 6: 4, 3, 5
- Greater elements than 6: 10, 9, 7, 8

After partitioning:

**4**

**3**

**5**

**6**

**9**

**7**

**8**

**10**

Result:

`[4, 3, 5, 6, 9, 7, 8, 10]`

Now 6 is in its correct position.

**Step 2: Sort the Left Subarray**

Left subarray: `{4, 3, 5}`

- Pivot = 5
- 4 and 3 are smaller than 5.
- Pivot 5 is placed in its correct position.

Result:

`[4, 3, 5]`

Next, sort `{4, 3}`:

- Pivot = 3
- 4 is greater than 3.
- Swap 4 and 3.

Result:

`[3, 4, 5]`

**Step 3: Sort the Right Subarray**

Right subarray: `{9, 7, 8, 10}`

- Pivot = 10
- All other elements are smaller than 10.
- Pivot 10 remains at the end.

Result:

`[9, 7, 8, 10]`

Next, sort `{9, 7, 8}`:

- Pivot = 8
- 7 is smaller than 8.
- 9 is greater than 8.
- Place 8 between 7 and 9.

Result:

`[7, 8, 9, 10]`

### **Final Sorted Array**

Sorted Successfully

## **3**

## **4**

## **5**

## **6**

## **7**

## **8**

## **9**

## **10**

\\[ \boxed{\\{3,4,5,6,7,8,9,10\\}} \\]

### **Complexity Analysis of Quick Sort**

| Case         | Time Complexity |
| ------------ | --------------- |
| Best Case    | O(n log n)      |
| Average Case | O(n log n)      |
| Worst Case   | O(n²)           |

\- Auxiliary Space Complexity: O(log n) on average due to recursion; O(n) in the worst case.

## **Quick Revision: Questions 6–11**

| Question | Most important topic                |
| -------- | ----------------------------------- |
| Q6       | Role of Algorithm                   |
| Q7       | Divide and Conquer                  |
| Q8       | Insertion Sort – O(n²) worst case   |
| Q9       | Selection Sort – O(n²) worst case   |
| Q10      | Maximum of Four Numbers             |
| Q11      | Quick Sort – Pseudocode and Dry Run |

**Exam tip:** Q8, Q9 and Q11 ভালোভাবে practice করো। বিশেষ করে complexity বের করার mathematical derivation এবং Quick Sort-এর partition steps নিজে হাতে লিখে অনুশীলন করবে। এগুলোতে শুধু final answer লিখলে পূর্ণ নম্বর পাওয়া কঠিন হতে পারে।
Algorithm – Important Questions and Answers (Part 3)
নিচে Question 12–16 পরীক্ষার খাতায় লেখার উপযোগী করে সমাধান করছি। বিশেষ করে Q13, Q15 এবং Q16-এ mathematical calculation ও step-by-step explanation দিয়েছি।

Question 12. Sort the Following Array in Ascending Order Using Quick Sort Algorithm Where Reduction Steps or Partitioning Can Be Used. [4 Marks]
Given array:
\[
A=\{22,88,66,44,33,11,55,77,90,40,60,99\}
\]

Solution:

We use Quick Sort with the last element as the pivot (Lomuto partition method).
Step 1: First Partition
Initial array:

22, 88, 66, 44, 33, 11, 55, 77, 90, 40, 60, 99

Pivot = 99

All other elements are smaller than 99, so 99 remains at the last position.
Step 2: Second Partition
Now consider the subarray:

22, 88, 66, 44, 33, 11, 55, 77, 90, 40, 60

Pivot = 60

After partitioning:

22, 44, 33, 11, 55, 40, 60, 77, 90, 66
Step 3: Continue Partitioning
The following table shows the reduction steps:
Subarray	Pivot	Result after partition
22, 44, 33, 11, 55, 40	40	22, 33, 11, 40, 55, 44
22, 33, 11	11	11, 33, 22
33, 22	22	22, 33
55, 44	44	44, 55
77, 90, 66	66	66, 90, 77
90, 77	77	77, 90

Final Sorted Array
Ascending Order
11

22

33

40

44

55

60

66

77

88

90

99



\[
\boxed{11,22,33,40,44,55,60,66,77,88,90,99}
\]


Question 13. If \(n^2/4-4n=\Theta(n^2)\), Find the Values of \(c_1,c_2\). [3 Marks]
Solution
Given,
\[
f(n)=\frac{n^2}{4}-4n
\]

According to Big Theta notation,
\[
c_1g(n)\leq f(n)\leq c_2g(n)
\]

Where,
\[
g(n)=n^2
\]

Therefore,
\[
c_1n^2\leq \frac{n^2}{4}-4n\leq c_2n^2
\]

Divide all sides by \(n^2\):
\[
c_1\leq \frac14-\frac4n\leq c_2
\]

For \(n\geq32\),
\[
\frac18\leq\frac14-\frac4n\leq\frac14
\]

Therefore, we can choose:
\[
\boxed{c_1=\frac18,\quad c_2=\frac14}
\]

And,
\[
\boxed{n_0=32}
\]

Hence,
\[
\boxed{f(n)=\Theta(n^2)}
\]

Answer: \(c_1=1/8\) and \(c_2=1/4\) are valid constants, with \(n_0=32\).

Note: These are not the only possible constants. Any positive constants satisfying the inequality for sufficiently large n are valid.

Question 14. What Are the Types of Cost Model Used in Algorithm? [2 Marks]
A cost model is a method used to measure the resources required by an algorithm to solve a problem.

The two main types of cost models are:
1. Time Cost Model: Measures the number of basic operations or execution time required by an algorithm.
2. Space Cost Model: Measures the amount of memory required by an algorithm during execution.
Example:
- A loop running n times has O(n) time complexity.
- An algorithm using a fixed number of extra variables has O(1) auxiliary space complexity.

Question 15. Solve the Following Knapsack Problem When n = 3, m = 20, (p₁,p₂,p₃) = (25,24,15) and (w₁,w₂,w₃) = (18,15,10). [5 Marks]
Solution
Given:
- Number of items, n = 3
- Knapsack capacity, m = 20
- Profit = (25, 24, 15)
- Weight = (18, 15, 10)
We will solve this using the Greedy Method (Fractional Knapsack).
Step 1: Calculate Profit-to-Weight Ratio
The formula is:
\[
r_i=\frac{p_i}{w_i}
\]

Item	Profit (P)	Weight (W)	P/W
1	25	18	1.389
2	24	15	1.600
3	15	10	1.500

Step 2: Arrange Items in Descending Order of Ratio
The order is:
\[
Item\ 2 > Item\ 3 > Item\ 1
\]

Step 3: Select Items
Knapsack capacity = 20 kg.

1. Select Item 2:
- Weight = 15 kg
- Profit = 24
- Remaining capacity = 20 − 15 = 5 kg.
2. Select 5 kg from Item 3:
- Total weight = 20 kg.
- Fraction selected = 5/10 = 0.5.
- Profit = 15 × 0.5 = 7.5.
3. Item 1 cannot be selected because the knapsack is full.
Step 4: Calculate Maximum Profit
\[
P_{\max}=24+7.5
\]

\[
\boxed{P_{\max}=31.5}
\]

Final Answer
- Item 1: \(x_1=0\)
- Item 2: \(x_2=1\)
- Item 3: \(x_3=0.5\)
Total weight = 20 kg.

Maximum profit = 31.5.

Important: This answer assumes Fractional Knapsack. If the question means 0/1 Knapsack, fractions are not allowed. In that case, the optimal solution is Item 2 only, with profit 24.

Question 16. For the Given Set of Items and Knapsack Capacity = 5 kg, Find the Optimal Solution for the 0/1 Knapsack Problem Using DP Approach. [6 Marks]
Given Data
- Knapsack capacity (W) = 5 kg
- Items = 4
Item	Weight (w)	Value (v)
1	2	3
2	3	4
3	4	5
4	5	6

Step 1: Define DP Formula
In 0/1 Knapsack, each item can either be selected (1) or not selected (0).

The DP recurrence relation is:
\[
DP[i][w]=
\begin{cases}
0 & i=0 \text{ or } w=0\\
DP[i-1][w] & w_i>w\\
\max(DP[i-1][w],v_i+DP[i-1][w-w_i]) & w_i\leq w
\end{cases}
\]

Where:
- i = Number of available items.
- w = Current knapsack capacity.
- \(w_i\) = Weight of the current item.
- \(v_i\) = Value of the current item.
Step 2: Construct the DP Table
We calculate the maximum value for each capacity from 0 to 5.
Items / Capacity	0	1	2	3	4	5
0 items	0	0	0	0	0	0
Item 1	0	0	3	3	3	3
Item 1, 2	0	0	3	4	4	7
Item 1, 2, 3	0	0	3	4	5	7
Item 1, 2, 3, 4	0	0	3	4	5	7

Step 3: Explain the Calculation
For Item 1 (Weight = 2, Value = 3):
- Capacity 2: Select Item 1 → Value = 3.
- Capacity 3: Select Item 1 → Value = 3.
- Capacity 5: Select Item 1 → Value = 3.
For Item 2 (Weight = 3, Value = 4):

At capacity 5, we have two choices:
1. Do not select Item 2 → Value = 3.
2. Select Item 2 → Value = 4 + DP[1][2] = 4 + 3 = 7.
Therefore:
\[
DP[2][5]=\max(3,7)=7
\]

For Item 3 (Weight = 4, Value = 5):

At capacity 5:
\[
DP[3][5]=\max(7,5)=7
\]

For Item 4 (Weight = 5, Value = 6):

At capacity 5:
\[
DP[4][5]=\max(7,6)=7
\]

Step 4: Find the Optimal Solution (Backtracking)
Starting from DP[4][5] = 7:
1. Item 4 is not selected because DP[4][5] = DP[3][5] = 7.
2. Item 3 is not selected because DP[3][5] = DP[2][5] = 7.
3. Item 2 is selected because DP[2][5] ≠ DP[1][5].
4. Remaining capacity = 5 − 3 = 2.
5. Item 1 is selected because DP[1][2] = 3.
Therefore, selected items are:
\[
\boxed{Item\ 1,\ Item\ 2}
\]

Final Answer
Optimal Selection
Item	Weight	Value	Selected
1	2 kg	3	Yes
2	3 kg	4	Yes
3	4 kg	5	No
4	5 kg	6	No


Total Weight

5 kg

Maximum Value
7


Complexity Analysis
- Time Complexity: \(O(nW)\)
- Space Complexity: \(O(nW)\)
Where n = Number of items and W = Knapsack capacity.

Important Revision for Your Exam
তোমার এই ১৬টি প্রশ্নের মধ্যে কয়েকটি concept বিশেষভাবে ভালোভাবে বুঝে রাখা দরকার:
Topic	Questions
Algorithm fundamentals	Q1–Q3, Q6
Asymptotic notation	Q4, Q13
Complexity analysis	Q5, Q8, Q9
Divide and Conquer	Q7, Q11, Q12
Searching / comparison	Q10
Greedy Algorithm	Q15
Dynamic Programming	Q16
Cost Model	Q14

একটি গুরুত্বপূর্ণ পার্থক্য মনে রাখবে: Q15-এ Fractional Knapsack এবং Q16-এ 0/1 Knapsack। দুটির solution technique আলাদা।

তুমি চাইলে পরবর্তী সময়ে আমি এই ১৬টি প্রশ্ন থেকে প্রতি সপ্তাহে একটি university-style practice test তৈরি করে দিতে পারি।
