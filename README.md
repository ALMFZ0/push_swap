*This project has been created as part of the 42 curriculum by afeizi.*

#  Push_swap - README

---

## 📄 Description

**Push_swap** is a project from the 42 curriculum that focuses on **sorting integers** using two stacks (`A` and `B`) and a limited set of operations.  

**Goal:** Output the **shortest possible sequence of moves** to sort a list of integers in ascending order.  

**Strategies based on input size:**

- **Small inputs (2–5 numbers):** Optimized hard-coded methods.  
- **Larger inputs:** Chunk-based sorting with indexing and range handling.

---

## 🛠️ Instructions

### 1️⃣ Compilation

make

-Generates the push_swap executable from all source files.
### 2️⃣ Execution
./push_swap [numbers...]
Example:
./push_swap 3 2 1 6 5

-The program prints a sequence of operations (sa, pb, ra, etc.) that sorts the stack.
### 3️⃣ Error Handling

#### The program validates input:
❌ Rejects duplicates

❌ Rejects non-integer inputs

❌ Rejects numbers outside the 32-bit signed integer range
#### If input is invalid, outputs:
Error
and exits.


### 4️⃣ Cleaning
#### make fclean
Removes the executable and all object files.

## 🧩 Algorithm Overview
Small Input Sorting (2–5 numbers)

#### Elements	Method

**2-** Swap first two if needed (sa)

**3- sort_three:** Identify min/max and rotate/swap (sa, ra, rra)

**4- sort_four:** Push min to B (pb), sort three in A, push back (pa)

**5- sort_five:** Push min(s) to B, sort three/four in A, push back

#### Example (sort_three):
**Initial Stack A:** [2, 3, 1]

**Step 1:** Find minimum (1 at index 2) → rra

**Step 2:** Swap if necessary → sa

**Result:** [1, 2, 3]

Large Input Sorting (Chunk-based)

**Step 1:** Initialize stacks

**Stack A:** all input numbers

**Stack B:** empty

**Step 2:** Prepare sorted reference

Copy Stack A values to array tab and sort

**Step 3:** Determine chunk size

Total Numbers	Chunk Range

if ≤ 16  --->  5

if ≤ 100 ---> 15

if > 100 ---> 40

**Step 4:** Process stack A in chunks

* Push numbers in current chunk from A → B using pb

* Rotate (ra, rb, rra, rrb) to optimize moves

* Increment chunk range and min index

**Step 5:** Push back from B → A

* Always find maximum in B

* Rotate to top if needed (rb, rrb)

* Push back to A (pa)

### Example:
- Initial Stack A: [8, 3, 7, 1, 9, 2, 5]

- Chunk 1 (1–3): push [1,2,3] → Stack B

- Chunk 2 (5–8): push [5,7,8] → Stack B

- Remaining 9 → Stack A

- Push back from B → A sorted → [1,2,3,5,7,8,9]

### 🛠️ Stack Operations Implemented

Operation	Description

- sa / sb	Swap first two elements of A or B

- ss	Swap both A and B simultaneously

- pa / pb	Push top element from B → A or A → B

- ra / rb	Rotate A or B upwards (first → last)

- rr	Rotate both A and B upwards

- rra / rrb	Reverse rotate A or B (last → first)

- rrr	Reverse rotate both A and B

### 🧠 Memory Management

**stack_free:** Frees all nodes in a stack

**free_args:** Frees dynamically allocated input arrays

All allocated memory is properly freed after execution.

### 📚 Resources
* 42 push_swap subject

* C Programming Documentation

* Linked List in C tutorials

* Stack Data Structure references

**AI Usage:** Only used to organize and write the README content and find the resources.  

All source code was written manually.

### 🔍 Additional Notes

-Implements all required sorting strategies for small and large inputs

-Handles invalid inputs gracefully

-Modular design separates stack operations, helpers, and sorting logic

-Code follows 42 coding standards