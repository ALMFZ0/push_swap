# push_swap
A sorting algorithm project that efficiently sorts integers using two stacks and a limited set of operations.
push_swap
📌 Overview

push_swap is an algorithmic sorting project where the goal is to sort a list of integers using two stacks and a limited set of operations, while minimizing the total number of moves.

This project focuses on algorithm optimization, data structures, and problem-solving under constraints.

🧠 How It Works

You are given a stack A containing random integers

Stack B starts empty

Only a specific set of operations is allowed

The program outputs the optimal (or near-optimal) sequence of operations to sort stack A in ascending order

🔁 Allowed Operations

sa / sb / ss — swap the first two elements

pa / pb — push the top element to the other stack

ra / rb / rr — rotate stack

rra / rrb / rrr — reverse rotate stack

⚙️ Compilation
make

▶️ Usage
./push_swap 4 67 3 87 23


The program will output a list of operations that sorts the numbers.

✅ Example
$ ./push_swap 3 2 1
sa
rra

📈 Algorithm

This implementation uses:

Indexing / normalization of values

Chunk-based sorting strategy for large inputs

Optimized handling for small stack sizes (≤ 5)

🧪 Testing

You can test the result using the checker program:

./push_swap 5 1 4 2 3 | ./checker 5 1 4 2 3

🚫 Error Handling

Displays Error on:

Duplicate numbers

Non-integer inputs

Values outside integer range

🛠️ Project Structure
.
├── src/
├── includes/
├── Makefile
└── README.md

🎯 Goals

Produce the smallest possible number of operations

Respect all allowed operations

Handle edge cases efficiently

📚 Resources

42 push_swap subject

Sorting algorithms ()

Stack-based problem solving

🧑‍💻 Author ===> Afeizi
