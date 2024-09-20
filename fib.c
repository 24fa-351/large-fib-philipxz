#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <stdlib.h>

unsigned long long fibonacci_recursive(int num);
unsigned long long fibonacci_iterative(int num);
int overflow_check(unsigned long long first_num, unsigned long long second_num);

unsigned long long int fibonacci_recursive(int num)
{
   if (num <= 1)
   {
      return num;
   }
   /* This function would take extremely long time(impossible to check) since there is no memoization added to this function yet*/
   if (overflow_check(fibonacci_recursive(num - 1), fibonacci_recursive(num - 2)))
   {
      printf("Overflow detected at Fibonacci number %d\n", num);
      exit(1);
   }

   return fibonacci_recursive(num - 1) + fibonacci_recursive(num - 2);
}

unsigned long long int fibonacci_iterative(int num)
{
   if (num <= 1)
   {
      return num;
   }

   unsigned long long int first_fibonacci_num = 0, second_fibonacci_num = 1, next_fibonacci_num;

   for (int ix = 2; ix <= num; ix++)
   {
      if (overflow_check(first_fibonacci_num, second_fibonacci_num))
      {
         printf("Overflow detected at Fibonacci number %d\n", ix);
         exit(1);
      }

      next_fibonacci_num = first_fibonacci_num + second_fibonacci_num;
      first_fibonacci_num = second_fibonacci_num;
      second_fibonacci_num = next_fibonacci_num;
   }

   return second_fibonacci_num;
}

int overflow_check(unsigned long long first_num, unsigned long long second_num)
{
   /* Since overflow happens when exceeding max num, Check if adding second num would cause overflow*/
   if (ULLONG_MAX - first_num < second_num)
   {
      return 1;
   }
   return 0;
}

int main(int argc, char *argv[])
{
   int command_line_integer = atoi(argv[1]);
   char command_line_letter = argv[2][0];

   /* Subtract 1 as the first number in fibonacci sequence is 0 */
   int num_to_fibonacci = command_line_integer - 1;
   unsigned long long int fibonacci_result;

   if (command_line_letter == 'r')
   {
      fibonacci_result = fibonacci_recursive(num_to_fibonacci);
   }
   if (command_line_letter == 'i')
   {
      fibonacci_result = fibonacci_iterative(num_to_fibonacci);
   }

   printf("%llu\n", fibonacci_result);
   return 0;
}