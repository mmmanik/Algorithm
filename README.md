# Algorithm – Complete Question Bank with Answers (Q1–Q16)

**Exam preparation notes | Simple English | University-answer format**

---

## Q1. What is an algorithm? Write down the main criteria of an algorithm. [1+3 Marks]

### Definition [1 Mark]

An algorithm is a finite sequence of well-defined steps or instructions used to solve a particular problem or perform a specific task.

### Main Criteria of an Algorithm [3 Marks]

An algorithm must satisfy the following five criteria:

1. **Input:** An algorithm may have zero or more inputs.
2. **Output:** It must produce at least one output or result.
3. **Definiteness:** Every step must be clear, precise and unambiguous.
4. **Finiteness:** An algorithm must terminate after a finite number of steps.
5. **Effectiveness:** Every operation must be simple, basic and executable within a finite amount of time.

**Example – Adding two numbers:**

1. Start.
2. Take two numbers A and B.
3. Calculate `Sum = A + B`.
4. Display Sum.
5. Stop.

---

## Q2. Briefly explain some properties of a good algorithm. [2 Marks]

A good algorithm should have the following properties:

1. **Correctness:** It should produce the correct output for every valid input.
2. **Efficiency:** It should use minimum time and memory.
3. **Simplicity:** It should be easy to understand and implement.
4. **Finiteness:** It should finish its execution after a finite number of steps.
5. **Generality:** It should solve all valid instances of a particular problem, not just one specific case.

---

## Q3. What kind of problems are solved by algorithms? [2 Marks]

Algorithms are used to solve problems that can be expressed as a sequence of logical and computational steps.

Some common types of problems solved by algorithms are:

1. **Searching Problems:** Finding a particular element in a collection of data. Examples: Linear Search and Binary Search.
2. **Sorting Problems:** Arranging data in ascending or descending order. Examples: Bubble Sort and Merge Sort.
3. **Optimization Problems:** Finding the best solution among several possible solutions. Example: Shortest Path Problem.
4. **Mathematical Problems:** Performing calculations or solving mathematical equations. Examples: Factorial and GCD.
5. **Graph Problems:** Finding paths or connections between vertices. Examples: BFS and DFS.

Algorithms can solve many other computational problems as well.

---

## Q4. What do you understand by asymptotic notation? Define Big Omega, Big Theta and Big O notation with proper examples. [1+6 Marks]

### Definition of Asymptotic Notation [1 Mark]

Asymptotic notation is a mathematical method used to describe the growth rate of an algorithm's time or space complexity as the input size ($n$) becomes very large.

It helps compare algorithms without depending on hardware or programming languages.

### 1. Big O Notation – O (Upper Bound)

**Definition:** Big O notation represents an asymptotic upper bound on an algorithm's growth rate.

**Example:**

Suppose:

$$f(n) = 3n^2 + 5n + 2$$

For sufficiently large $n$, the highest-order term dominates. Therefore:

$$f(n) = O(n^2)$$

### 2. Big Omega Notation – Ω (Lower Bound)

**Definition:** Big Omega notation represents an asymptotic lower bound on an algorithm's growth rate.

**Example:**

For:

$$f(n) = 3n^2 + 5n + 2$$

The dominant term is $n^2$. Therefore:

$$f(n) = \Omega(n^2)$$

### 3. Big Theta Notation – Θ (Tight Bound)

**Definition:** Big Theta notation represents a tight asymptotic bound. It means that the function has both an upper bound and a lower bound of the same order.

**Example:**

For:

$$f(n) = 3n^2 + 5n + 2$$

Therefore:

$$f(n) = \Theta(n^2)$$

### Difference

| Notation | Meaning | Bound |
| :--- | :--- | :--- |
| Big O ($O$) | Upper bound | Asymptotic upper limit |
| Big Omega ($\Omega$) | Lower bound | Asymptotic lower limit |
| Big Theta ($\Theta$) | Tight bound | Both upper and lower bounds |

**Remember:** Big O = Upper Bound; Big Omega = Lower Bound; Big Theta = Tight Bound.

---

## Q5. What do you mean by time and space complexity of an algorithm? Explain the time-space trade-off concept with an example. [5 Marks]

### 1. Time Complexity

**Definition:** Time complexity is the amount of time an algorithm takes to complete its execution as a function of the input size ($n$). In analysis, it is commonly measured by counting basic operations.

**Example:**

```cpp
for (int i = 0; i < n; i++)
{
    cout << i << " ";
}
```

The loop executes $n$ times. Therefore, its time complexity is $O(n)$.

### 2. Space Complexity

**Definition:** Space complexity is the amount of memory required by an algorithm as a function of the input size ($n$).

It may include memory for variables, data structures and auxiliary storage.

**Example:**

```cpp
int sum = 0;

for (int i = 0; i < n; i++)
{
    sum += i;
}
```

The algorithm uses a fixed amount of extra memory. Therefore, its auxiliary space complexity is $O(1)$.

*Note: Auxiliary space means the extra memory used by an algorithm, excluding the input storage.*

### 3. Time-Space Trade-off

**Definition:** Time-space trade-off is a technique in which an algorithm uses more memory to reduce execution time, or uses less memory at the cost of more execution time.

**Example – Searching an Element:**

- **Linear Search:** Checks elements one by one. Time complexity is $O(n)$, and auxiliary space is $O(1)$.
- **Hash Table:** Stores elements in a hash table. Searching takes $O(1)$ average time, while storing the elements requires $O(n)$ extra memory.

| Method | Time Complexity | Extra Space |
| :--- | :--- | :--- |
| Linear Search | $O(n)$ | $O(1)$ |
| Hash Table Search | $O(1)$ average | $O(n)$ |

Linear search uses less extra memory but may take more time. A hash table uses additional memory to provide faster average searching. This is called the time-space trade-off.

---

## Q6. Explain the main role of algorithm in computing. [2 Marks]

An algorithm plays an important role in computing because it provides a systematic, step-by-step procedure for solving computational problems.

The main roles of an algorithm are:

1. **Problem Solving:** It provides a logical and systematic way to solve complex problems.
2. **Efficiency:** It helps reduce execution time and memory usage.
3. **Automation:** It allows computers to perform tasks automatically.
4. **Accuracy:** It helps produce correct and reliable results.
5. **Optimization:** It helps find the best possible solution to a problem.

**Conclusion:** Algorithms are the foundation of computer programming and efficient problem-solving.

---

## Q7. Define divide and conquer strategy. Give some examples of divide and conquer method. [3 Marks]

### Definition

Divide and Conquer is an algorithm design strategy that solves a complex problem by dividing it into smaller subproblems, solving them independently, and combining their results to obtain the final solution.

### Three Main Steps

1. **Divide:** Break the main problem into smaller subproblems.
2. **Conquer:** Solve the smaller subproblems, usually recursively.
3. **Combine:** Combine the solutions of the subproblems to get the final result.

### Examples

1. **Merge Sort:** Divides an array into two halves, sorts them and merges the sorted halves.
2. **Quick Sort:** Selects a pivot and partitions the array into smaller parts.
3. **Binary Search:** Repeatedly divides the search space into two halves to find an element.

Divide and Conquer makes complex problems easier to solve by breaking them into smaller problems.

---

## Q8. Show the worst-case complexity of insertion sort with explanation. [4 Marks]

### Definition

Insertion Sort is a sorting algorithm that builds a sorted array one element at a time by inserting each element into its correct position.

### Worst-Case Analysis

The worst case occurs when the input array is sorted in descending order, but we want to sort it in ascending order.

Example: `[5, 4, 3, 2, 1]`

In this case, each new element must be compared with all previously sorted elements and shifted to the right.

| Pass | Comparisons / Shifts |
| :--- | ---: |
| 1st pass | 1 |
| 2nd pass | 2 |
| 3rd pass | 3 |
| 4th pass | 4 |
| Total | 1 + 2 + 3 + 4 |

For $n$ elements:

$$T(n) = 1 + 2 + 3 + \cdots + (n-1)$$

Using the arithmetic series formula:

$$T(n) = \frac{n(n-1)}{2} = \frac{n^2-n}{2}$$

Ignoring constants and lower-order terms:

$$\boxed{T(n) = O(n^2)}$$

**Answer:** The worst-case time complexity of Insertion Sort is $O(n^2)$.

### C++ Code

```cpp
void insertionSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}
```

---

## Q9. Show the worst-case complexity of selection sort with explanation. [4 Marks]

### Definition

Selection Sort is a sorting algorithm that repeatedly selects the smallest element from the unsorted portion of an array and places it at the beginning.

### Worst-Case Analysis

Selection Sort finds the minimum element in the unsorted portion and swaps it with the first unsorted element.

Example: `[5, 4, 3, 2, 1]`

For an array of $n$ elements:

- First pass: $(n - 1)$ comparisons.
- Second pass: $(n - 2)$ comparisons.
- Third pass: $(n - 3)$ comparisons.
- Last pass: $1$ comparison.

Total number of comparisons:

$$T(n) = (n-1) + (n-2) + \cdots + 2 + 1$$

Using the arithmetic series formula:

$$T(n) = \frac{n(n-1)}{2} = \frac{n^2-n}{2}$$

Ignoring constants and lower-order terms:

$$\boxed{T(n) = O(n^2)}$$

**Answer:** The worst-case time complexity of Selection Sort is $O(n^2)$.

### C++ Code

```cpp
void selectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mn = i;

        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[mn])
                mn = j;
        }

        swap(a[i], a[mn]);
    }
}
```

**Important note:** Selection Sort has $O(n^2)$ time complexity in the best, average and worst cases because it always performs the same number of comparisons.

---

## Q10. How do you find the maximum of four numbers? [4 Marks]

We can find the maximum of four numbers by comparing them one by one.

### Algorithm

1. Start.
2. Input four numbers A, B, C and D.
3. Assume A is the maximum number.
4. Compare B with MAX. If B is greater, update MAX.
5. Compare C with MAX. If C is greater, update MAX.
6. Compare D with MAX. If D is greater, update MAX.
7. Print MAX.
8. Stop.

### Pseudocode

```text
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

### Example

Suppose $A = 15, B = 25, C = 10$ and $D = 30$.

| Comparison | Maximum value |
| :--- | ---: |
| Initially MAX = A | 15 |
| B > MAX (25 > 15) | 25 |
| C > MAX (10 > 25) | 25 |
| D > MAX (30 > 25) | 30 |

**Maximum number = 30.**

### Complexity Analysis

- Time Complexity: $O(1)$, because only 3 comparisons are required.
- Space Complexity: $O(1)$, because only a fixed number of variables are used.

---

## Q11. Write the pseudocode for Quick Sort. Show the steps to sort the following array using Quick Sort algorithm: {4, 10, 9, 3, 5, 7, 8, 6}. [3+4 Marks]

### Part A: Pseudocode of Quick Sort [3 Marks]

**Definition:** Quick Sort is a Divide and Conquer sorting algorithm that selects a pivot element and partitions the array into two parts. Elements smaller than or equal to the pivot are placed on the left, and larger elements are placed on the right.

The following pseudocode uses the last element as the pivot (Lomuto partition scheme).

**QUICK-SORT(A, low, high)**

```text
QUICK-SORT(A, low, high)

1. IF low < high THEN
2.     p = PARTITION(A, low, high)
3.     QUICK-SORT(A, low, p - 1)
4.     QUICK-SORT(A, p + 1, high)
5. END IF
```

**PARTITION(A, low, high)**

```text
PARTITION(A, low, high)

1. pivot = A[high]
2. i = low - 1

3. FOR j = low TO high - 1
4.     IF A[j] <= pivot THEN
5.         i = i + 1
6.         SWAP A[i] AND A[j]
7.     END IF
8. END FOR

9. SWAP A[i + 1] AND A[high]
10. RETURN i + 1
```

### Part B: Step-by-Step Sorting [4 Marks]

Given array:

`[4, 10, 9, 3, 5, 7, 8, 6]`

We use the last element as the pivot in each partition.

**Step 1 – First Partition**

- Pivot = 6.
- Elements smaller than or equal to 6 are placed on the left.
- Elements greater than 6 are placed on the right.

After partitioning:

`[4, 3, 5, 6, 9, 7, 8, 10]`

Now 6 is in its correct position.

**Step 2 – Sort the Left Subarray**

Left subarray: `[4, 3, 5]`

- Pivot = 5. The subarray remains `[4, 3, 5]`.
- Next subarray: `[4, 3]`, pivot = 3.
- After partitioning: `[3, 4]`.

The sorted left subarray is `[3, 4, 5]`.

**Step 3 – Sort the Right Subarray**

Right subarray: `[9, 7, 8, 10]`

- Pivot = 10. The subarray remains `[9, 7, 8, 10]`.
- Next subarray: `[9, 7, 8]`, pivot = 8.
- After partitioning: `[7, 8, 9]`.

The sorted right subarray is `[7, 8, 9, 10]`.

**Final Sorted Array:**

$$\boxed{[3, 4, 5, 6, 7, 8, 9, 10]}$$

### Complexity Analysis of Quick Sort

| Case | Time Complexity |
| :--- | :--- |
| Best Case | $O(n \log n)$ |
| Average Case | $O(n \log n)$ |
| Worst Case | $O(n^2)$ |

Auxiliary Space Complexity: $O(\log n)$ on average due to recursion; $O(n)$ in the worst case.

---

## Q12. Sort the following array in ascending order using Quick Sort, where reduction steps or partitioning can be used. [4 Marks]

Given array:

`[22, 88, 66, 44, 33, 11, 55, 77, 90, 40, 60, 99]`

**Solution:** We use Quick Sort with the last element as the pivot (Lomuto partition method).

### Partitioning / Reduction Steps

**Step 1:** Pivot = 99.

All other elements are smaller than 99, so the array remains unchanged after this partition.

`[22, 88, 66, 44, 33, 11, 55, 77, 90, 40, 60, 99]`

**Step 2:** Partition the left subarray using pivot = 60.

`[22, 44, 33, 11, 55, 40, 60, 77, 90, 88, 66, 99]`

**Step 3:** Partition `[22, 44, 33, 11, 55, 40]` using pivot = 40.

`[22, 33, 11, 40, 55, 44, 60, 77, 90, 88, 66, 99]`

**Step 4:** Partition `[22, 33, 11]` using pivot = 11.

`[11, 33, 22, 40, 55, 44, 60, 77, 90, 88, 66, 99]`

**Step 5:** Partition `[33, 22]` using pivot = 22.

`[11, 22, 33, 40, 55, 44, 60, 77, 90, 88, 66, 99]`

**Step 6:** Partition `[55, 44]` using pivot = 44.

`[11, 22, 33, 40, 44, 55, 60, 77, 90, 88, 66, 99]`

**Step 7:** Partition `[77, 90, 88, 66]` using pivot = 66.

`[11, 22, 33, 40, 44, 55, 60, 66, 90, 88, 77, 99]`

**Step 8:** Partition `[90, 88, 77]` using pivot = 77.

`[11, 22, 33, 40, 44, 55, 60, 66, 77, 88, 90, 99]`

The remaining subarrays contain zero or one element, so no further partitioning is needed.

### Final Sorted Array

$$\boxed{[11, 22, 33, 40, 44, 55, 60, 66, 77, 88, 90, 99]}$$

---

## Q13. If $n^2/4 - 4n = \Theta(n^2)$, find the values of $c_1, c_2$. [3 Marks]

### Solution

Given:

$$f(n) = \frac{n^2}{4} - 4n$$

According to Big Theta notation:

$$c_1 g(n) \leq f(n) \leq c_2 g(n)$$

Here, $g(n) = n^2$.

Therefore:

$$c_1 n^2 \leq \frac{n^2}{4} - 4n \leq c_2 n^2$$

Divide all sides by $n^2$:

$$c_1 \leq \frac{1}{4} - \frac{4}{n} \leq c_2$$

For $n \geq 32$:

$$\frac{1}{8} \leq \frac{1}{4} - \frac{4}{n} \leq \frac{1}{4}$$

Therefore, we can choose:

$$\boxed{c_1 = \frac{1}{8}, \quad c_2 = \frac{1}{4}}$$

And:

$$\boxed{n_0 = 32}$$

Hence:

$$\boxed{f(n) = \Theta(n^2)}$$

**Answer:** $c_1 = 1/8$ and $c_2 = 1/4$ are valid constants, with $n_0 = 32$.

*Note: These are not the only possible constants. Any positive constants satisfying the inequality for sufficiently large $n$ are valid.*

---

## Q14. What are the types of cost model used in algorithm? [2 Marks]

A cost model is a method used to measure the resources required by an algorithm to solve a problem.

The two main types of cost models are:

1. **Time Cost Model:** Measures the number of basic operations or execution time required by an algorithm.
2. **Space Cost Model:** Measures the amount of memory required by an algorithm during execution.

**Example:**

- A loop running $n$ times has $O(n)$ time complexity.
- An algorithm using a fixed number of extra variables has $O(1)$ auxiliary space complexity.

---

## Q15. Solve the following Knapsack problem when $n = 3$, $m = 20$, $(p_1, p_2, p_3) = (25, 24, 15)$ and $(w_1, w_2, w_3) = (18, 15, 10)$. [5 Marks]

### Given Data

- Number of items, $n = 3$.
- Knapsack capacity, $m = 20$.
- Profit = $(25, 24, 15)$.
- Weight = $(18, 15, 10)$.

**Assumption:** This solution uses the Greedy Method for Fractional Knapsack, because the question does not explicitly state 0/1 Knapsack.

### Step 1: Calculate Profit-to-Weight Ratio

The formula is:

$$r_i = \frac{p_i}{w_i}$$

| Item | Profit ($P$) | Weight ($W$) | $P/W$ |
| :--- | ---: | ---: | ---: |
| 1 | 25 | 18 | 1.389 |
| 2 | 24 | 15 | 1.600 |
| 3 | 15 | 10 | 1.500 |

### Step 2: Arrange Items in Descending Order of Ratio

$$\text{Item } 2 > \text{Item } 3 > \text{Item } 1$$

### Step 3: Select Items

Knapsack capacity = $20\text{ kg}$.

1. Select Item 2 completely:
   - Weight = $15\text{ kg}$.
   - Profit = $24$.
   - Remaining capacity = $20 - 15 = 5\text{ kg}$.

2. Select $5\text{ kg}$ from Item 3:
   - Fraction selected = $5/10 = 0.5$.
   - Profit = $15 \times 0.5 = 7.5$.

3. Item 1 cannot be selected because the knapsack is full.

### Step 4: Calculate Maximum Profit

$$P_{\max} = 24 + 7.5$$

$$\boxed{P_{\max} = 31.5}$$

**Final Answer:**

- Item 1: $x_1 = 0$
- Item 2: $x_2 = 1$
- Item 3: $x_3 = 0.5$
- Total weight = $20\text{ kg}$.
- Maximum profit = **31.5**.

**Important:** If the question means 0/1 Knapsack, fractions are not allowed. The optimal solution is Item 2 only, with weight 15 and profit 24.

---

## Q16. For the given set of items and knapsack capacity = 5 kg, find the optimal solution for the 0/1 Knapsack problem using the DP approach. [6 Marks]

### Given Data

- Knapsack capacity ($W$) = $5\text{ kg}$.
- Items = $\{1, 2, 3, 4\}$.

| Item | Weight ($w$) | Value ($v$) |
| :--- | ---: | ---: |
| 1 | 2 | 3 |
| 2 | 3 | 4 |
| 3 | 4 | 5 |
| 4 | 5 | 6 |

### Step 1: Define DP Formula

In 0/1 Knapsack, each item can either be selected (1) or not selected (0).

The DP recurrence relation is:

$$DP[i][w] = \begin{cases} 0 & i=0 \text{ or } w=0 \\ DP[i-1][w] & w_i > w \\ \max(DP[i-1][w], v_i + DP[i-1][w-w_i]) & w_i \leq w \end{cases}$$

Where:

- $i$ = Number of available items.
- $w$ = Current knapsack capacity.
- $w_i$ = Weight of the current item.
- $v_i$ = Value of the current item.

### Step 2: Construct the DP Table

Calculate the maximum value for each capacity from 0 to 5.

| Items / Capacity | 0 | 1 | 2 | 3 | 4 | 5 |
| :--- | ---: | ---: | ---: | ---: | ---: | ---: |
| 0 items | 0 | 0 | 0 | 0 | 0 | 0 |
| Item 1 | 0 | 0 | 3 | 3 | 3 | 3 |
| Items 1, 2 | 0 | 0 | 3 | 4 | 4 | 7 |
| Items 1, 2, 3 | 0 | 0 | 3 | 4 | 5 | 7 |
| Items 1, 2, 3, 4 | 0 | 0 | 3 | 4 | 5 | 7 |

### Step 3: Explain the Calculation

**For Item 1 (Weight = 2, Value = 3):**

- Capacity 2: Select Item 1 $\rightarrow$ Value = 3.
- Capacity 3: Select Item 1 $\rightarrow$ Value = 3.
- Capacity 5: Select Item 1 $\rightarrow$ Value = 3.

**For Item 2 (Weight = 3, Value = 4):**

At capacity 5, we have two choices:

1. Do not select Item 2 $\rightarrow$ Value = 3.
2. Select Item 2 $\rightarrow$ Value = $4 + DP[1][2] = 4 + 3 = 7$.

Therefore:

$$DP[2][5] = \max(3, 7) = 7$$

**For Item 3 (Weight = 4, Value = 5):**

At capacity 5:

$$DP[3][5] = \max(7, 5) = 7$$

**For Item 4 (Weight = 5, Value = 6):**

At capacity 5:

$$DP[4][5] = \max(7, 6) = 7$$

### Step 4: Find the Optimal Solution (Backtracking)

Start from $DP[4][5] = 7$:

1. Item 4 is not selected because $DP[4][5] = DP[3][5] = 7$.
2. Item 3 is not selected because $DP[3][5] = DP[2][5] = 7$.
3. Item 2 is selected because $DP[2][5] \neq DP[1][5]$.
4. Remaining capacity = $5 - 3 = 2$.
5. Item 1 is selected because $DP[1][2] = 3$.

Therefore, selected items are Item 1 and Item 2.

### Final Answer

| Item | Weight | Value | Selected |
| :--- | ---: | ---: | :--- |
| 1 | 2 kg | 3 | Yes |
| 2 | 3 kg | 4 | Yes |
| 3 | 4 kg | 5 | No |
| 4 | 5 kg | 6 | No |
| **Total** | **5 kg** | **7** | |

$$\boxed{\text{Optimal value} = 7}$$

### Complexity Analysis

- Time Complexity: $O(nW)$.
- Space Complexity: $O(nW)$.

Where $n$ = number of items and $W$ = knapsack capacity.

---

# Quick Revision – All 16 Questions

| Question | Main Topic |
| :--- | :--- |
| Q1 | Algorithm definition and criteria |
| Q2 | Properties of a good algorithm |
| Q3 | Types of problems solved by algorithms |
| Q4 | Asymptotic notation: $O, \Omega, \Theta$ |
| Q5 | Time complexity, space complexity and trade-off |
| Q6 | Role of algorithms in computing |
| Q7 | Divide and Conquer |
| Q8 | Insertion Sort worst-case complexity |
| Q9 | Selection Sort worst-case complexity |
| Q10 | Maximum of four numbers |
| Q11 | Quick Sort pseudocode and dry run |
| Q12 | Quick Sort partitioning |
| Q13 | Finding Big Theta constants |
| Q14 | Types of cost model |
| Q15 | Fractional Knapsack using Greedy Method |
| Q16 | 0/1 Knapsack using Dynamic Programming |

## Important Exam Reminders

1. For complexity questions, show the summation and simplify it before writing the final Big O result.
2. For Quick Sort, clearly mention which pivot-selection and partition method you are using.
3. For Big Theta, show both the lower-bound and upper-bound inequalities.
4. Do not confuse Fractional Knapsack with 0/1 Knapsack. Fractional Knapsack allows fractions; 0/1 Knapsack does not.
5. For DP problems, write the recurrence relation, DP table and backtracking result.

---

**End of Algorithm Question Bank (Q1–Q16).**