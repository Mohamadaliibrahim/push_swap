
# Push_swap

## Overview

`push_swap` is a project from the 42 curriculum that involves sorting a stack of integers using a limited set of operations. The goal is to write a program that finds the shortest possible sequence of operations to sort the stack, and we use the Turkish algorithm to do that.

## How It Works

The program receives a list of integers as arguments, initializes two stacks (A and B), and then sorts the integers in stack A using a set of predefined operations. The available operations are:

- `sa`: Swap the first two elements of stack A.
- `sb`: Swap the first two elements of stack B.
- `ss`: `sa` and `sb` at the same time.
- `pa`: Push the first element from stack B onto stack A.
- `pb`: Push the first element from stack A onto stack B.
- `ra`: Rotate stack A upwards (the first element becomes the last).
- `rb`: Rotate stack B upwards.
- `rr`: `ra` and `rb` at the same time.
- `rra`: Reverse rotate stack A (the last element becomes the first).
- `rrb`: Reverse rotate stack B.
- `rrr`: `rra` and `rrb` at the same time.

The goal is to use these operations to sort the integers in stack A with the fewest possible moves.

## Installation

To download the project, use the following steps to clone the repository via SSH.

### Cloning the Repository

```bash
git clone git@github.com:Mohamadaliibrahim/push_swap.git
```
Enter the file
```bash
cd push_swap/push_swap
```

This will download all the necessary files for the project into a folder named `push_swap`.

## Compilation

To compile the project, run the following command in your terminal:

```bash
make
```

This will generate an executable file named `push_swap`.

## Usage

You can run the program with a list of integers as follows:

```bash
./push_swap <list_of_integers>
```

### Example:

```bash
./push_swap 3 2 5 1 4
```

The program will output a series of instructions that will sort the stack.

### Error Handling

The program will handle the following errors:

- Non-numeric input.
- Duplicate numbers.
- Exceeding the integer limit.

If an error is detected, the program will print `Error` and exit.

## Cleaning Up

To remove the compiled files, you can use:

```bash
make clean
```

Or, to remove all compiled files including the executable:

```bash
make fclean
```

You can also recompile everything from scratch using:

```bash
make re
```

## Testing

You can test the program by feeding it various lists of integers. It is recommended to compare the output against a known correct implementation to ensure accuracy and efficiency.

### Author

This project was developed by **mohamibr** as part of the 42 School curriculum.
