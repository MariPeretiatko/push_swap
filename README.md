# 42 push_swap
Push_swap is a project which allows to sort a stack of unique numbers using minimal number of allowed operations

![visualizer](push_swap.gif)

* There are 2 stacks named a and b.
* The `stack a` contains a random amount of unique negative and/or positive numbers.
* The `stack b` is empty.

The goal is to sort in ascending order numbers into `stack a`. To do so there are
following operations:

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

To launch the program use command `make`. Then execute `./push_swap 1 4 2 3 5` numbers can be of your choice. The program will then print the instructions needed to sort the stack.  
To check sorting run `make bonus`. Then you can execute `ARG="1 4 2 3 5"; ./push_swap $ARG | ./checker $ARG` and see if instructions actually sort the stack. If yes, you will see `OK`, otherwise `KO`.
Or you can run `./checker 1 4 2 3 5` then the program will wait for the instructions, type each instruction pressing `Enter`, to stop recieving intsructions press `Ctrl + D`
