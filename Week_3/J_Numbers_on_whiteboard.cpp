//Numbers 1,2,3 ......... n(each integer from 1 to n once)
//In one operation you can erase any two numbers a and b from the board and write one integer (a+b)/2 rounded up instead.

//You should perform the given operaton n-1 times and make the resulting number that will be left on the board as small as possible.

//For example, if n = 4, the following course of action is optimal
// 1) choose a = 4 and b = 2, so the new number is 3 and the whiteboard contains [1,3,3]
// 2) choose a = 3 and b = 3, so the new number is 3 and the whiteboard contains [1,3]
// 3) choose a = 1 and b = 3, so the new number is 2, and the whiteboard contains[2]

//It's easy to see that after n-1 operations, there will be left only number. Your goal is to minimize it.

//      Input                   output
        1                       2
        4                       2 4
                                3 3
                                3 1