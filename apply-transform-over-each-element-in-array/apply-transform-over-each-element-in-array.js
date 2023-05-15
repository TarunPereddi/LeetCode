/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {

const count = arr.length - 1;
for (let a = 0; a <= count; a++) {
  let target = arr[a];
  let mod = fn(target, a);
  arr[a] = mod;
}

return arr;

};
