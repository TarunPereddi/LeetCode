/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    var array = [];
    var j = 0;
    for (let i = 0; i < arr.length; ++i) {
        if(fn(arr[i], i)){
            array[j] = arr[i];
            j++;
        }
    }
    return array;
};