# 42 push_swap
The "push_swap" project aims to sort a stack of unique numbers with the minimal number of allowed operations. Here are the specifications:

    Two stacks are involved, named "a" and "b".
    Stack "a" initially contains a random number of unique positive and/or negative integers.
    Stack "b" starts empty.
The objective is to arrange the numbers in ascending order within stack "a". To achieve this, the following operations are permitted:

# 100 RANDOM NUMBERS
![100](https://github.com/MariPeretiatko/push_swap/assets/83024504/59a088d1-54f4-429d-84de-77916a90f566)

# 500 RANDOM NUMBERS
![500](https://github.com/MariPeretiatko/push_swap/assets/83024504/c5cae7c7-a368-4a85-92af-78cf3b029e31)

| Operation | Description |
| --------- | ----------- |
| **sa** (swap a) | Swap the first 2 elements at the top of stack a.  Do nothing if there is only one or no elements. |
| **sb** (swap b) | Swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements. |
| **ss** | sa and sb at the same time. |
| **pa** (push a) | Take the first element at the top of b and put it at the top of a. Do nothing if b is empty. |
| **pb** (push b) | Take the first element at the top of a and put it at the top of b. Do nothing if a is empty. |
| **ra** (rotate a) | Shift up all elements of stack a by 1. The first element becomes the last one. |
| **rb** (rotate b) | Shift up all elements of stack b by 1. The first element becomes the last one. |
| **rr** | ra and rb at the same time. |
| **rra** (reverse rotate a) | Shift down all elements of stack a by 1. The last element becomes the first one. |
| **rrb** (reverse rotate b) | Shift down all elements of stack b by 1. The last element becomes the first one. |
| **rrr** | rra and rrb at the same time. |

## Algorithm
I utilized two sorting algorithms: Quick Sort and an implementation of the Turk Algorithm. Quick Sort handles the initial sorting phase, while the Turk Algorithm, which prioritizes the cost of swapping arguments, is employed for the subsequent sorting process.


## Launching the program

To initiate the program, enter the command "make". Then execute "./push_swap 1 4 2 3 5" with numbers of your choice. The program will subsequently display the instructions required to sort the stack.

To verify the sorting, execute "make bonus". Then run the command "ARG="1 4 2 3 5"; ./push_swap $ARG | ./checker $ARG" and observe whether the instructions effectively sort the stack. If successful, you will see "OK"; otherwise, "KO". Alternatively, you can execute "./checker 1 4 2 3 5", and the program will await instructions. Type each instruction and press Enter. To cease receiving instructions, press Ctrl + D.
