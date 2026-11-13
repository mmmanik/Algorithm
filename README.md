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

Asymptotic notation is a mathematical method used to describe the growth rate of an algorithm's time or space complexity as the input size (n) becomes very large.

It helps compare algorithms without depending on hardware or programming languages.

### 1. Big O Notation – O (Upper Bound)

**Definition:** Big O notation represents an asymptotic upper bound on an algorithm's growth rate.

**Example:**

Suppose:
$f(n) = 3n^2 + 5n + 2$

For sufficiently large n, the highest-order term dominates. Therefore:
$f(n) = O(n^2)$

### 2. Big Omega Notation – Ω (Lower Bound)

**Definition:** Big Omega notation represents an asymptotic lower bound on an algorithm's growth rate.

**Example:**

For:
$f(n) = 3n^2 + 5n + 2$

The dominant term is $n^2$. Therefore:
$f(n) = \Omega(n^2)$

### 3. Big Theta Notation – Θ (Tight Bound)

**Definition:** Big Theta notation represents a tight asymptotic bound. It means that the function has both an upper bound and a lower bound of the same order.

**Example:**

For:
$f(n) = 3n^2 + 5n + 2$

Therefore:
$f(n) = \Theta(n^2)$

### Difference

| Notation | Meaning | Bound |
|---|---|---|
| Big O (O) | Upper bound | Asymptotic upper limit |
| Big Omega (Ω) | Lower bound | Asymptotic lower limit |
| Big Theta (Θ) | Tight bound | Both upper and lower bounds |

**Remember:** Big O = Upper Bound; Big Omega = Lower Bound; Big Theta = Tight Bound.

---

## Q5. What do you mean by time and space complexity of an algorithm? Explain the time-space trade-off concept with an example. [5 Marks]

### 1. Time Complexity

**Definition:** Time complexity is the amount of time an algorithm takes to complete its execution as a function of the input size (n). In analysis, it is commonly measured by counting basic operations.

**Example:**

```cpp
for (int i = 0; i < n; i++)
{
    cout << i << " ";
}