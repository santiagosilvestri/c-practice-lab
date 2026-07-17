# C-Practice-Lab

This project has been developed by **sasilves** as a personal collection of C exercises for exam preparation and continuous programming practice.

The repository contains **56 standalone exercises** covering strings, command-line arguments, arithmetic, number bases, bit manipulation, dynamic memory, recursion, arrays, and linked lists.

Each source file contains the exercise description, the permitted library functions, the expected function prototype, and, when applicable, usage examples.

### Compile a complete program

Exercises containing a `main` function can be compiled and executed directly.

For example:

```bash
cc -Wall -Wextra -Werror exercises/02-strings/20.inter.c -o inter
./inter "abcabc" "bcd"
```

Expected output:

```text
bc
```
## Repository structure

```text
C-Practice-Lab/
├── exercises/
│   ├── 01-foundations/
│   │   ├── 01.ft_strlen.c
│   │   ├── 02.ft_putstr.c
│   │   ├── 03.ft_swap.c
│   │   ├── 04.ft_strcpy.c
│   │   ├── 05.first_word.c
│   │   ├── 06.rev_print.c
│   │   ├── 07.search_and_replace.c
│   │   ├── 08.ulstr.c
│   │   ├── 09.rotone.c
│   │   ├── 10.rot_13.c
│   │   ├── 11.repeat_alpha.c
│   │   └── 12.fizzbuzz.c
│   │
│   ├── 02-strings/
│   │   ├── 13.ft_strcmp.c
│   │   ├── 14.ft_strdup.c
│   │   ├── 15.ft_strrev.c
│   │   ├── 16.last_word.c
│   │   ├── 17.camel_to_snake.c
│   │   ├── 18.snake_to_camel.c
│   │   ├── 19.alpha_mirror.c
│   │   ├── 20.inter.c
│   │   ├── 21.union.c
│   │   ├── 22.ft_strcspn.c
│   │   ├── 23.ft_strspn.c
│   │   ├── 24.ft_strpbrk.c
│   │   └── 25.ft_atoi.c
│   │
│   ├── 03-numbers-and-bits/
│   │   ├── 26.do_op.c
│   │   ├── 27.max.c
│   │   ├── 28.is_power_of_2.c
│   │   ├── 29.print_bits.c
│   │   ├── 30.reverse_bits.c
│   │   ├── 31.swap_bits.c
│   │   ├── 32.paramsum.c
│   │   ├── 33.tab_mult.c
│   │   ├── 34.pgcd.c
│   │   ├── 35.lcm.c
│   │   ├── 36.add_prime_sum.c
│   │   ├── 37.ft_range.c
│   │   └── 38.ft_rrange.c
│   │
│   ├── 04-text-and-parsing/
│   │   ├── 39.hidenp.c
│   │   ├── 40.epur_str.c
│   │   ├── 41.expand_str.c
│   │   ├── 42.str_capitalizer.c
│   │   ├── 43.rstr_capitalizer.c
│   │   ├── 44.print_hex.c
│   │   └── 45.ft_atoi_base.c
│   │
│   └── 05-memory-and-lists/
│       ├── 46.ft_list_size.c
│       ├── 47.sort_int_tab.c
│       ├── 48.fprime.c
│       ├── 49.rev_wstr.c
│       ├── 50.rostring.c
│       ├── 51.ft_itoa.c
│       ├── 52.ft_split.c
│       ├── 53.flood_fill.c
│       ├── 54.ft_list_foreach.c
│       ├── 55.sort_list.c
│       └── 56.ft_list_remove_if.c
└── README.md
```

## Exercise index

### 1. Foundations and command-line practice

| # | Exercise | Main concept |
|---:|---|---|
| 01 | `ft_strlen` | String length |
| 02 | `ft_putstr` | Character output |
| 03 | `ft_swap` | Pointers |
| 04 | `ft_strcpy` | String copying |
| 05 | `first_word` | Word parsing |
| 06 | `rev_print` | Reverse traversal |
| 07 | `search_and_replace` | Character replacement |
| 08 | `ulstr` | ASCII case conversion |
| 09 | `rotone` | Alphabet rotation |
| 10 | `rot_13` | ROT13 transformation |
| 11 | `repeat_alpha` | Nested loops |
| 12 | `fizzbuzz` | Conditions and modulo |

### 2. Strings and searching

| # | Exercise | Main concept |
|---:|---|---|
| 13 | `ft_strcmp` | Lexicographic comparison |
| 14 | `ft_strdup` | Dynamic allocation |
| 15 | `ft_strrev` | In-place string reversal |
| 16 | `last_word` | Backward word parsing |
| 17 | `camel_to_snake` | Naming conversion |
| 18 | `snake_to_camel` | Naming conversion |
| 19 | `alpha_mirror` | Character mapping |
| 20 | `inter` | Character intersection |
| 21 | `union` | Character union |
| 22 | `ft_strcspn` | Rejected-character scanning |
| 23 | `ft_strspn` | Accepted-character scanning |
| 24 | `ft_strpbrk` | First matching character |
| 25 | `ft_atoi` | String-to-integer conversion |

### 3. Numbers and bits

| # | Exercise | Main concept |
|---:|---|---|
| 26 | `do_op` | Arithmetic operators |
| 27 | `max` | Array traversal |
| 28 | `is_power_of_2` | Powers of two |
| 29 | `print_bits` | Bit masks |
| 30 | `reverse_bits` | Bit reversal |
| 31 | `swap_bits` | Nibble swapping |
| 32 | `paramsum` | Argument counting |
| 33 | `tab_mult` | Multiplication table |
| 34 | `pgcd` | Euclidean algorithm |
| 35 | `lcm` | Least common multiple |
| 36 | `add_prime_sum` | Prime numbers |
| 37 | `ft_range` | Dynamic integer ranges |
| 38 | `ft_rrange` | Reversed integer ranges |

### 4. Text transformations and parsing

| # | Exercise | Main concept |
|---:|---|---|
| 39 | `hidenp` | Ordered subsequences |
| 40 | `epur_str` | Whitespace normalization |
| 41 | `expand_str` | Word formatting |
| 42 | `str_capitalizer` | Word capitalization |
| 43 | `rstr_capitalizer` | End-of-word capitalization |
| 44 | `print_hex` | Decimal-to-hexadecimal conversion |
| 45 | `ft_atoi_base` | Number-base conversion |

### 5. Memory, recursion, arrays, and lists

| # | Exercise | Main concept |
|---:|---|---|
| 46 | `ft_list_size` | Linked-list traversal |
| 47 | `sort_int_tab` | In-place array sorting |
| 48 | `fprime` | Prime factorization |
| 49 | `rev_wstr` | Reverse word order |
| 50 | `rostring` | Word rotation |
| 51 | `ft_itoa` | Integer-to-string conversion |
| 52 | `ft_split` | Dynamic string splitting |
| 53 | `flood_fill` | Recursive region filling |
| 54 | `ft_list_foreach` | Function pointers and lists |
| 55 | `sort_list` | Linked-list sorting |
| 56 | `ft_list_remove_if` | Linked-list deletion |

## Suggested study approach

1. Read the assignment without looking at the solution.
2. Write the function or program from scratch.
3. Compile using strict warning flags.
4. Test normal inputs and edge cases.
5. Compare the result with the repository version.
6. Rewrite the exercise later without using references.

## Notes

This is an independent educational project created for personal study and exam preparation.

It is not an official 42 repository, official exam subject, or complete solution set. The implementations prioritize clarity, repetition, and understanding of fundamental C programming concepts.
