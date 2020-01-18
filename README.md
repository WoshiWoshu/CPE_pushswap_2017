# CPE_pushswap_2017
First year mini project in C consisting of sorting numbers (negative and positive) with fewest operations as possible. To solved it I used the Bubble Sort algorithm and two simple linked lists.

The program must display all the operations in following order. Here are the rules : 

        • sa - swap the first two elements of l_a (nothing will happen if there aren’t enough elements).
        • sb - swap the first two elements of l_b (nothing will happen if there aren’t enough elements).
        • sc - sa and sb at the same time.
        • pa - take the first element from l_b and move it to the first position on the l_a list (nothing will happen if l_b is empty).
        • pb - take the first element from l_a and move it to the first position on the l_b list (nothing will happen if l_a is empty).
        • ra - rotate l_a toward the beginning, the first element will become the last.
        • rb - rotate l_b toward the beginning, the first element will become the last.
        • rr - ra and rb at the same time.
        • rra - rotate l_a toward the end, the last element will become the first.
        • rrb - rotate l_b toward the end, the last element will become the first.
        • rrr - rra and rrb at the same time.

USING : 

        cd CPE_pushswap_2017 && Make
        ./push_swap "2 1 3 6 5 8".
