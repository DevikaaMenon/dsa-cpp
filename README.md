# DSA Solutions in C++

A curated collection of Data Structures and Algorithms solutions implemented in C++, covering array manipulation, sorting, hashing, recursion, and more.

---

## Table of Contents

| # | Problem | Category | Difficulty | Time | Space |
|---|---------|----------|------------|------|-------|
| 1 | [Second Largest Element](#1-second-largest-element) | Arrays | Easy | O(n) | O(1) |
| 2 | [Second Smallest Element](#2-second-smallest-element) | Arrays | Easy | O(n) | O(1) |
| 3 | [Rotate Array Left by 1](#3-rotate-array-left-by-1) | Arrays | Easy | O(n) | O(1) |
| 4 | [Rotate Array Left by D Places (Naive)](#4-rotate-array-left-by-d-places-naive) | Arrays | Easy | O(n) | O(d) |
| 5 | [Rotate Array Left by K Places (Optimal)](#5-rotate-array-left-by-k-places-optimal) | Arrays | Medium | O(n) | O(1) |
| 6 | [Move Zeroes to End](#6-move-zeroes-to-end) | Arrays | Easy | O(n) | O(1) |
| 7 | [Missing Number (Naive)](#7-missing-number-naive) | Arrays | Easy | O(n²) | O(1) |
| 8 | [Missing Number (XOR Optimal)](#8-missing-number-xor-optimal) | Bit Manipulation | Easy | O(n) | O(1) |
| 9 | [Max Consecutive Ones](#9-max-consecutive-ones) | Arrays | Easy | O(n) | O(1) |
| 10 | [Sort Colors (Dutch National Flag)](#10-sort-colors-dutch-national-flag) | Arrays | Medium | O(n) | O(1) |
| 11 | [Majority Element (Moore's Voting)](#11-majority-element-moores-voting-algorithm) | Arrays | Medium | O(n) | O(1) |
| 12 | [Two Sum](#12-two-sum) | HashMap | Easy | O(n) | O(n) |
| 13 | [Maximum Subarray Sum (Naive)](#13-maximum-subarray-sum-naive) | Arrays | Medium | O(n³) | O(1) |
| 14 | [Best Time to Buy and Sell Stock](#14-best-time-to-buy-and-sell-stock) | Arrays | Easy | O(n) | O(1) |
| 15 | [Rearrange Array by Sign](#15-rearrange-array-by-sign) | Arrays | Medium | O(n) | O(n) |
| 16 | [GCD (Euclidean Algorithm)](#16-gcd-euclidean-algorithm) | Math | Easy | O(log(min(a,b))) | O(log n) |
| 17 | [Alternate Sort](#17-alternate-sort) | Arrays/Sorting | Medium | O(n log n) | O(n) |
| 18 | [Reverse Array using Recursion](#18-reverse-array-using-recursion) | Recursion | Easy | O(n) | O(n) |
| 19 | [Palindrome String (Recursion)](#19-palindrome-string-recursion) | Recursion/Strings | Easy | O(n) | O(n) |
| 20 | [Fibonacci (Linear Iterative)](#20-fibonacci-linear-iterative) | Recursion/DP | Easy | O(n) | O(1) |
| 21 | [Fibonacci (Recursive)](#21-fibonacci-recursive) | Recursion | Easy | O(2ⁿ) | O(n) |
| 22 | [Frequency Count with Array Hash](#22-frequency-count-with-array-hash) | Hashing | Easy | O(n + q) | O(k) |
| 23 | [Character Frequency Hashing](#23-character-frequency-hashing) | Hashing | Easy | O(n + q) | O(26) |
| 24 | [Frequency Count with Ordered Map](#24-frequency-count-with-ordered-map) | Hashing | Easy | O(n log n) | O(n) |
| 25 | [Selection Sort](#25-selection-sort) | Sorting | Easy | O(n²) | O(1) |

---

## 1. Second Largest Element

**Problem:** Find the second largest element in an array without sorting.

### Approach
Track two variables — `largest` and `second_largest`. In a single pass, update both whenever a new maximum is found or a new second-maximum candidate appears. This avoids sorting and runs in linear time.

**Key invariant:** `second_largest` is updated only when `arr[i]` is strictly less than `largest` but greater than the current `second_largest`.

### Complexity
| | Complexity | Justification |
|--|--|--|
| Time | O(n) | Single pass through the array |
| Space | O(1) | Only two variables maintained |

---

## 2. Second Smallest Element

**Problem:** Find the second smallest element in an array without sorting.

### Approach
Mirror of the second largest problem. Track `smallest` and `second_smallest`. Initialize `second_smallest` to `INT_MAX` to ensure any valid element overwrites it. Use `arr[i] != smallest` guard to handle duplicates of the minimum.

### Complexity
| | Complexity | Justification |
|--|--|--|
| Time | O(n) | Single pass through the array |
| Space | O(1) | Two variables only |

---

## 3. Rotate Array Left by 1

**Problem:** Shift every element one position to the left; the first element wraps to the end.

### Approach
Save `arr[0]` in a temporary variable, shift all elements left by one index, then place the saved value at `arr[n-1]`.

### Complexity
| | Complexity | Justification |
|--|--|--|
| Time | O(n) | Single shift pass |
| Space | O(1) | One temporary variable |

---

## 4. Rotate Array Left by D Places (Naive)

**Problem:** Left-rotate an array by `d` positions.

### Approach
Store the first `d` elements in a temporary array. Shift the remaining `n - d` elements to the front. Copy the saved elements back to the end. Normalize `d = d % n` to handle cases where `d >= n`.

### Complexity
| | Complexity | Justification |
|--|--|--|
| Time | O(n) | Two passes: shift + copy back |
| Space | O(d) | Temporary array of size d |

---

## 5. Rotate Array Left by K Places (Optimal)

**Problem:** Left-rotate an array by `k` positions in-place.

### Approach — Reversal Algorithm
Three reversals achieve a left rotation without extra space:
1. Reverse `arr[0..k-1]`
2. Reverse `arr[k..n-1]`
3. Reverse the entire array `arr[0..n-1]`

**Why it works:** After reversing the first `k` elements and the remaining `n-k` elements independently, a final full reversal places everything in the correct rotated order.

**Example:** `[1,2,3,4,5]`, k=2
- After step 1: `[2,1,3,4,5]`
- After step 2: `[2,1,5,4,3]`
- After step 3: `[3,4,5,1,2]` ✓

### Complexity
| | Complexity | Justification |
|--|--|--|
| Time | O(n) | Three reversal passes, each O(n) |
| Space | O(1) | In-place, no extra memory |

---

## 6. Move Zeroes to End

**Problem:** Move all zeroes to the end of the array while maintaining the relative order of non-zero elements. (LeetCode 283)

### Approach — Two Pointer
Find the first zero with pointer `j`. Then walk pointer `i` from `j+1`: whenever a non-zero is found, swap it with `nums[j]` and advance `j`. This fills positions greedily with non-zero elements, pushing zeroes to the end.

### Complexity
| | Complexity | Justification |
|--|--|--|
| Time | O(n) | Two linear scans |
| Space | O(1) | In-place swaps |

---

## 7. Missing Number (Naive)

**Problem:** Given an array of `n-1` integers from `[1..n]`, find the missing number.

### Approach
For each number from `0` to `n`, scan the array to check if it exists. If not found, that is the missing number. This brute force approach is O(n²) due to the nested loop.

### Complexity
| | Complexity | Justification |
|--|--|--|
| Time | O(n²) | Outer loop × inner scan |
| Space | O(1) | No extra data structures |

---

## 8. Missing Number (XOR Optimal)

**Problem:** Same as above — find the missing number using XOR.

### Approach — XOR Trick
XOR has the property that `a ^ a = 0` and `a ^ 0 = a`. XOR all elements in the array (`xor2`) and XOR all integers from `1` to `n` (`xor1`). The result `xor1 ^ xor2` cancels all present numbers, leaving only the missing one.

**Why it works:** Every number that appears in both sequences cancels out; only the missing number has no pair to cancel with.

### Complexity
| | Complexity | Justification |
|--|--|--|
| Time | O(n) | Single pass through the array |
| Space | O(1) | Two XOR accumulators |

---

## 9. Max Consecutive Ones

**Problem:** Find the maximum number of consecutive 1s in a binary array. (LeetCode 485)

### Approach
Maintain a running `count` of consecutive 1s and a `maxCount` for the global best. Reset `count` to 0 on encountering a 0. Update `maxCount` after each increment.

### Complexity
| | Complexity | Justification |
|--|--|--|
| Time | O(n) | Single pass |
| Space | O(1) | Two counter variables |

---

## 10. Sort Colors (Dutch National Flag)

**Problem:** Sort an array of 0s, 1s, and 2s in-place. (LeetCode 75)

### Approach — Dutch National Flag Algorithm
Three pointers: `low`, `mid`, `high`.
- `nums[mid] == 0`: swap with `low`, advance both
- `nums[mid] == 1`: advance `mid` only
- `nums[mid] == 2`: swap with `high`, decrement `high` (don't advance `mid` — the swapped value is unexamined)

This partitions the array into three regions in one pass.

### Complexity
| | Complexity | Justification |
|--|--|--|
| Time | O(n) | Single pass, each element processed once |
| Space | O(1) | Three pointers only |

---

## 11. Majority Element (Moore's Voting Algorithm)

**Problem:** Find the element that appears more than ⌊n/2⌋ times. (LeetCode 169)

### Approach — Boyer-Moore Majority Vote
Maintain a candidate and a count. Increment count for a matching element, decrement for a mismatch. When count hits 0, replace the candidate. The majority element will always survive this process because it outnumbers all others combined.

A second verification pass confirms the candidate actually exceeds n/2.

### Complexity
| | Complexity | Justification |
|--|--|--|
| Time | O(n) | Two linear passes |
| Space | O(1) | Two variables |

---

## 12. Two Sum

**Problem:** Return indices of two numbers that add up to a target. (LeetCode 1)

### Approach — HashMap Complement Lookup
For each element, compute `complement = target - nums[i]`. Look up the complement in a hash map. If found, the pair is identified immediately. Otherwise, store the current element and its index for future lookups.

### Complexity
| | Complexity | Justification |
|--|--|--|
| Time | O(n) | Single pass with O(1) hash map lookups |
| Space | O(n) | Hash map stores up to n elements |

---

## 13. Maximum Subarray Sum (Naive)

**Problem:** Find the maximum sum of any contiguous subarray.

### Approach — Brute Force O(n³)
Enumerate all subarrays with two nested loops `[i..j]`, then sum each with a third inner loop. Track the running maximum.

> **Note:** The optimal solution is Kadane's Algorithm — O(n) time, O(1) space. The naive version is shown here for educational comparison.

### Complexity
| | Complexity | Justification |
|--|--|--|
| Time | O(n³) | Three nested loops |
| Space | O(1) | No extra memory |

---

## 14. Best Time to Buy and Sell Stock

**Problem:** Maximize profit by choosing one day to buy and a later day to sell. (LeetCode 121)

### Approach
Track the running minimum price seen so far (`mini`). For each day, compute the potential profit if sold today (`prices[i] - mini`), update the global max profit, then update `mini`. This single pass implicitly tries all buy-sell pairs where buy < sell.

### Complexity
| | Complexity | Justification |
|--|--|--|
| Time | O(n) | Single pass |
| Space | O(1) | Two variables |

---

## 15. Rearrange Array by Sign

**Problem:** Rearrange so positives occupy even indices and negatives occupy odd indices. (LeetCode 2149)

### Approach — Two-Pointer on Result Array
Maintain two index pointers: `pi = 0` (next positive slot) and `ni = 1` (next negative slot), both incrementing by 2. Place each element in the correct position on a single pass through the input.

### Complexity
| | Complexity | Justification |
|--|--|--|
| Time | O(n) | Single pass |
| Space | O(n) | Output array of size n |

---

## 16. GCD (Euclidean Algorithm)

**Problem:** Compute the greatest common divisor of two integers.

### Approach — Recursive Euclidean
`gcd(a, b) = gcd(b, a % b)` with base case `b == 0 → return a`. Each recursive call reduces the problem size by at least half, making this logarithmic.

### Complexity
| | Complexity | Justification |
|--|--|--|
| Time | O(log(min(a,b))) | Remainder shrinks rapidly |
| Space | O(log n) | Recursive call stack depth |

---

## 17. Alternate Sort

**Problem:** Rearrange a sorted array such that the largest and smallest elements alternate: `[max, min, 2nd-max, 2nd-min, ...]`.

### Approach
Sort the array first. Then use two pointers — `i` at the start (smallest) and `j` at the end (largest) — to build the output array by alternately appending the largest and smallest remaining elements. The middle element of an odd-length array is appended when `i == j`.

### Complexity
| | Complexity | Justification |
|--|--|--|
| Time | O(n log n) | Dominated by the initial sort |
| Space | O(n) | Output array |

---

## 18. Reverse Array using Recursion

**Problem:** Reverse an array in-place using recursion.

### Approach
Recursively swap elements at positions `i` and `n-1-i`, advancing `i` each call. Base case: `i >= n/2` (all pairs swapped).

### Complexity
| | Complexity | Justification |
|--|--|--|
| Time | O(n) | n/2 swaps |
| Space | O(n) | Recursive call stack |

---

## 19. Palindrome String (Recursion)

**Problem:** Check whether a string is a palindrome using recursion.

### Approach
Compare characters at positions `i` and `n-1-i`. If they match, recurse on the inner substring. Base case: `i >= n/2` means all pairs matched — return true. Short-circuit on mismatch.

### Complexity
| | Complexity | Justification |
|--|--|--|
| Time | O(n) | At most n/2 comparisons |
| Space | O(n) | Recursive call stack |

---

## 20. Fibonacci (Linear Iterative)

**Problem:** Print the first `n` Fibonacci numbers.

### Approach
Use three rolling variables `a`, `b`, `c` to compute each next term without storing the full sequence. Starts by printing `1 1` for the base case, then iterates from index 2 to n-1.

### Complexity
| | Complexity | Justification |
|--|--|--|
| Time | O(n) | Single loop |
| Space | O(1) | Three variables |

---

## 21. Fibonacci (Recursive)

**Problem:** Return the Fibonacci number at index `n`.

### Approach
Classic recursive definition: `fib(n) = fib(n-1) + fib(n-2)`, base cases `fib(0) = 0`, `fib(1) = 1`. Each call spawns two sub-calls, leading to exponential time.

> **Note:** This is shown for conceptual clarity. In practice, use memoization (top-down DP) or the iterative approach for efficiency.

### Complexity
| | Complexity | Justification |
|--|--|--|
| Time | O(2ⁿ) | Exponential branching factor |
| Space | O(n) | Maximum call stack depth |

---

## 22. Frequency Count with Array Hash

**Problem:** Answer `q` queries asking how many times a number appears in an array.

### Approach
Precompute a frequency array indexed by value. For each query, return the answer in O(1). This works when the value range is known and small (here, capped at 12).

### Complexity
| | Complexity | Justification |
|--|--|--|
| Time | O(n + q) | O(n) precompute, O(1) per query |
| Space | O(k) | k = size of value range |

---

## 23. Character Frequency Hashing

**Problem:** Count occurrences of queried characters in a string.

### Approach
Map each lowercase character to an index `ch - 'a'` (0 to 25) and build a frequency array of size 26. Answer each character query in O(1).

### Complexity
| | Complexity | Justification |
|--|--|--|
| Time | O(n + q) | Linear precompute, O(1) queries |
| Space | O(26) = O(1) | Fixed alphabet size |

---

## 24. Frequency Count with Ordered Map

**Problem:** Same frequency query problem, but for an unbounded integer range.

### Approach
Use `std::map<int,int>` (a balanced BST) instead of a fixed array, enabling arbitrary integer keys at the cost of O(log n) per access.

### Complexity
| | Complexity | Justification |
|--|--|--|
| Time | O(n log n + q log n) | Map insert/lookup is O(log n) |
| Space | O(n) | Map stores all unique elements |

---

## 25. Selection Sort

**Problem:** Sort an array using selection sort.

### Approach
In each pass `i`, find the index of the minimum element in `arr[i..n-1]` and swap it to position `i`. After `n-1` passes the array is sorted.

### Complexity
| | Complexity | Justification |
|--|--|--|
| Time | O(n²) | Nested loops: n passes × up to n comparisons each |
| Space | O(1) | In-place, one temp variable |

---

## Getting Started

### Prerequisites
- A C++ compiler supporting C++11 or later (g++, clang++, MSVC)

### Compile & Run
```bash
g++ -std=c++17 -o solution solution.cpp
./solution
```

### LeetCode Solutions
Problems sourced from LeetCode can be tested directly on the platform by pasting the `class Solution` block.

---

## Topics Covered

- **Arrays** — rotation, searching, partitioning, two-pointer techniques
- **Bit Manipulation** — XOR for missing number
- **Sorting** — selection sort, Dutch National Flag (3-way partition)
- **Hashing** — array hashing, character hashing, STL map/unordered_map
- **Recursion** — array reversal, palindrome check, Fibonacci
- **Greedy** — stock trading, majority vote, alternate sort
- **Math** — GCD via Euclidean algorithm
