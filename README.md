# Second C program for 351

1. Adjust Assignment 1 as follows:

- Remove the file reading. The program should "fib" the number on the command line only, as supplied

- For the "int" type, determine the largest fibbable number.

- Change the type to the largest (widest) possible int so that you can fib a much larger number.

- In the spreadsheet, add a column for type name and one for "width of that int type".

- Re-run enough tests to infer the performance curve **for (each) iterative and recursive.**

- Add the tests to see if the wider int changes the perf of numbers that fit within the basic int (is there a cost for going to wider ints).

- For funsies (i.e. 10 extra points), run all the sizes of int there are and add the numbers to the sheet as above

    - **Hint: create a .sh script to help you out by generating a CSV**

    - **Hint2: Can typedef make it easier to modify the code?**

- Can you fit a curve to it? Can you analyze its O() perf?

2. More funsies: 5 pts if you can cause your program to output the place where overflow would occur rather than just blasting past it.

   - **Hint: write a routine that takes two numbers and determines if they can safely be added**

# Reminder

I am your boss. I have given you this assignment and I'm looking for *insight*. A sheet full of zeroes is **NOT** useful. A sheet I cannot play with (sort, calculate) on is **NOT** useful.

# Time to implement

The mod for this should take 10 minutes, running it should take 15-20. If it's much more, LMK.

# Due date

Check in and submit by Monday 9/23 0600.

