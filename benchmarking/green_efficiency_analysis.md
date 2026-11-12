Measurement Methodology
Processor time is measured using clock() function from the <time.h> library. This function returns an approximation of processor time used by the program.

The measurement process follows 4 steps:
First, record the initial processor clock value using Start = clock().
Second, run the algorithm.
Third, record the final processor clock value using End = clock().
Lastly, compute the execution time using the formula:
	
	(End - Start) / CLOCKS_PER_SEC

where CLOCKS_PER_SEC is the number of ticks per second. 

This formula converts the number of clock ticks into seconds, representing the processor time needed to execute the algorithm.

Each algorithm is run 3 times, and the execution times are averaged for a more reliable representation of its performance.

Observed Performance Differences
Task 0 establishes a baseline for understanding the processing time of a simple computation task.

|  Iterations	|   Execution time  |
------------------------------------
|  100000000 	|  0.241917 seconds |
|  100000000 	|  0.269180 seconds | 
|  100000000 	|  0.241334 seconds |
------------------------------------
|   AVERAGE     |  0.250810 seconds |

With an iteration count of 100,000,000, the for loop executes 100,000,000 times, making it a linear time (O(n))complexity. Even though we are executing the same algorithm, the timing changes between runs. Due to the timing variability, it is important to take the average of multiple executions, which is 0.25 seconds in this case.

Task 1 aims to find the number of even number in an array of 50000 integers.

|       Naive algorithm	         |       Single-pass algorithm    |
|  Result   |   Execution time	 |  Result  |    Execution time   |
-------------------------------------------------------------------
| 625025000 |  2.815260 seconds  |   25000  |   0.000106 seconds  |
| 625025000 |  2.803020 seconds  |   25000  |   0.000107 seconds  | 
| 625025000 |  2.774895 seconds  |   25000  |   0.000106 seconds  |
|  AVERAGE  |  2.797725 seconds  |  AVERAGE |   0.0001063 seconds |

The naive algorithm uses nested for loops, making it a quadratic time (O(n^2))complexity, whereas the single-pass algorithm uses 1 for loop, making it a linear time (O(n))complexity. Due to the large number of repeated operations, the naive algorithm takes 2.8 seconds to compute, while the single-pass algorithm takes 0.0001 seconds.

Not only is the naive algorithm 26,318 times slower than the single-pass algorithm, the results also contain repeated numbers. Instead of returning 25,000 even numbers from 50,000 numbers, it returned 625,025,000 even numbers. 

This task also demonstrates that input size affects execution time, even for algorithms with linear time complexity, O(n). Execution took 0.0001 seconds for 50,000 iterations compared to 0.25 seconds for 100,000,000 iterations in task 0. 

