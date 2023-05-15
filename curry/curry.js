/**
 * @param {Function} fn
 * @return {Function}
 */
var curry = function(fn) {
    var res = [];
    return function curried(...args) {
        res.push(...args);
        if(res.length < fn.length){
            return curried;
        }
        return fn(...res);
    };
};

/**
 * function sum(a, b) { return a + b; }
 * const csum = curry(sum);
 * csum(1)(2) // 3
 */