/**
 * @param {Function} fn
 * @return {Function}
 */
//  Link: https://leetcode.com/problems/allow-one-function-call/description/
var once = function (fn) {
    let isCalled = false;
    return function (...args) {
        if (!isCalled) {
            isCalled = true;
            return fn(...args);
        } else {
            return undefined;
        }
    }
};

/**
 * let fn = (a,b,c) => (a + b + c)
 * let onceFn = once(fn)
 *
 * onceFn(1,2,3); // 6
 * onceFn(2,3,6); // returns undefined without calling fn
 */
