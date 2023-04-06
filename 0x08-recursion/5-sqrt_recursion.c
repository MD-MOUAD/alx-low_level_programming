#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 * @n: the integer.
 * Return:  the natural square root of n
 * or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
    if (n < 0) {
        return -1; // negative number has no natural square root
    } else if (n == 0) {
        return 0; // base case: square root of 0 is 0
    } else {
        int root;
		root = _sqrt_recursion(n - 1); // recursively calculate the square root of n-1
        if (root < 0) {
            return -1; // n-1 does not have a natural square root, so neither does n
        } else if (root * root == n) {
            return root; // found the square root of n
        } else {
            return root + 1; // try the next number
        }
        
    }
