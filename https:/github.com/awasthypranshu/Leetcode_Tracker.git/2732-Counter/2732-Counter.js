// Last updated: 26/07/2026, 22:03:27
/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    let x = -1;
    return function() {
        x++;
        return n+x;
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */