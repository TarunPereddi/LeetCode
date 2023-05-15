/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let counter = init;
    const increment = function () {
        return ++counter;
    };
    const decrement = function () {
        return --counter;
    };
    const reset = function () {
        counter = init;
        return counter;
    };
return { increment, decrement, reset };
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */