# Largest binary gap

## Context
A **binary gap** of a integer N is any maximal sequence of consecutive zeros that is surrounded by ones in the binary
representation of N.

## Goal
Write a function that, given a positive integer `N`, returns the length of its largest binary gap. The function should
return 0 if there's no binary gap.
```c++
int largest_binary_gap(int N);
```

## Constraints
- Focus: <ins>efficiency</ins>
- N is an integer within the range \[1 .. 2'147'483'647\]

## Examples
```c++
/**
 * Gaps
 */
largest_binary_gap(17) == 3  // 17 = 0b10001
largest_binary_gap(21) == 1  // 21 = 0b10101

/**
 * No gaps
 */
largest_binary_gap(15) == 0 // 15 = 0b1111
largest_binary_gap(32) == 0 // 32 = 0b100000
```
