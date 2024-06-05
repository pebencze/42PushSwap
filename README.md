# PushSwap

The `push_swap` project is a sorting algorithm implementation in C. The goal is to sort a stack of integers with the fewest number of operations using two stacks (`a` and `b`) and a predefined set of instructions. This project is an excellent exercise to practice sorting algorithms and understand algorithmic complexity. It also provides an opportunity to refine C programming skills, error handling, and memory management.

## Mandatory Part

The `push_swap` program sorts integers in ascending order using the following operations:

- `sa`: Swap the first two elements at the top of stack `a`.
- `sb`: Swap the first two elements at the top of stack `b`.
- `ss`: `sa` and `sb` simultaneously.
- `pa`: Push the first element at the top of stack `b` to stack `a`.
- `pb`: Push the first element at the top of stack `a` to stack `b`.
- `ra`: Rotate stack `a` upwards.
- `rb`: Rotate stack `b` upwards.
- `rr`: `ra` and `rb` simultaneously.
- `rra`: Rotate stack `a` downwards.
- `rrb`: Rotate stack `b` downwards.
- `rrr`: `rra` and `rrb` simultaneously.

### Usage

```
./push_swap <list_of_integers>
```
### Example

```
$> ./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa
```
## Bonus Part

The bonus part involves creating a checker program that validates the sorting process performed by push_swap. The checker program reads a series of operations from standard input and applies them to the stack. It then checks if the stack a is sorted and stack b is empty.

### Usage

```

./checker <list_of_integers>
```
### Example:

```

$> ./checker 3 2 1 0
rra
pb
sa
rra
pa
OK
$> ./checker 3 2 1 0
sa
rra
pb
KO
$> ./checker 3 2 one 0
Error
$> ./checker "" 1
Error
```

The checker program must display OK if the stack a is sorted and stack b is empty after executing the instructions, KO otherwise. It should also handle errors appropriately.

### Compilation

Use the provided Makefile to compile both the push_swap and checker programs. The Makefile must include at least the rules: $(NAME), all, clean, fclean, and re.
