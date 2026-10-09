# Basic Data Types

Source: [HackerRank — Basic Data Types](https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem)

Based on Dhwani's shared solution, with explicit `std::` names and the unused `<cstdio>` include removed.

## What I practised

Reading `int`, `long`, `char`, `float`, and `double` values with `cin`, then printing each value on a separate line.

## Approach

Read the five values in order. Print the first three directly. Use `fixed` and `setprecision(3)` for the float, then change the precision to 9 for the double.

## Example

Input:

```text
3 12345678912345 a 334.23 14049.30493
```

Expected output:

```text
3
12345678912345
a
334.230
14049.304930000
```

## What I learned

`<iomanip>` provides `setprecision`. With `fixed`, precision means digits after the decimal point, including trailing zeros.

`long` is platform-dependent. This exercise assumes the platform can hold the supplied long values; on common 64-bit Linux environments, `long` is 64 bits.

## Verification

Local compilation: `g++ -std=c++17 -Wall -Wextra -pedantic`.

The example output was checked locally. A HackerRank accepted submission has not been verified here.
