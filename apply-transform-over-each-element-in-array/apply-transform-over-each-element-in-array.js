/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) 
{
    const res = [];
    arr.forEach(myfunc);
    function myfunc(value , index,array)
    {
        res.push(fn(value,index,array));
    }
    return res;
};
