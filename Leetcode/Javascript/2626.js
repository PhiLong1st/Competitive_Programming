/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
// Link: https://leetcode.com/problems/array-reduce-transformation/description/
var reduce = function (nums, fn, init) {
    nums.forEach(x => init = fn(init, x));
    return init;
};