# Odd-Even Checker (Indirect Recursion in C)

A simple yet symbolic C program that checks whether a number is odd or even using indirect recursion.

> You are odd!!! (no offence) 
> You are balanced and even!!!

## How It Works
- `IsOdd(x)` checks for oddness and calls `IsEven(x)` if needed.
- `IsEven(x)` confirms evenness.
- Demonstrates mutual recursion and clean parameter passing.

## Compile & Run
```bash
gcc odd-even.c -o odd-even
./odd-even

