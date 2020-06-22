## Problem F1: Calculator - Easy
# Facebook Virtual Hackathon 2020
5 points

Request Clarification

Download Input & Submit
You've found an old calculator lying around (I mean really old). Its buttons and screen work, but it doesn't seem to do anything when you press the = button.  You've figured out that it has an onboard computer but its memory got wiped a long time ago. You've taken it upon yourself to restore it to its former glory.
Let's start by writing support for the addition and subtraction of single-digit positive integers. Input is fed to the calculator as a sequence of these integers, joined by addition and subtraction operators in infix notation (meaning each operator appears between its operands, as per usual).
More specifically, the expression is given in the alternating format “<digit><operator><digit><operator> … <operator><digit>”, where each <digit> is a single digit character (between 1 and 9, inclusive), and each <operator> is a single operator character (either “+” or “-”).
Your input file is a list of n valid inputs to your calculator, each on their own line. Each expression is at most 100 characters long. Output the answers to each expression in order, separated by spaces.

Constraints
1 ≤ n ≤ 100

Sample Input
1-9-4-1+2
1+6+7+7-2
6+4-2-1+3
3+8-1-3+8
5+7-1-5+1

Sample Output
-11 19 10 15 7