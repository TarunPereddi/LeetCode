/**
 * @param {any} o1
 * @param {any} o2
 * @return {boolean}
 */
var areDeeplyEqual = function(o1, o2) {
  if (o1 === o2) {
    return true;
  }
  
  if (typeof o1 !== 'object' || o1 === null || typeof o2 !== 'object' || o2 === null) {
    return false;
  }
  
  if (Array.isArray(o1) !== Array.isArray(o2)) {
    return false;
  }

  const keys1 = Object.keys(o1);
  const keys2 = Object.keys(o2);
  
  if (keys1.length !== keys2.length) {
    return false;
  }

  for (const key in o1) {
    if (!(key in o2) || !areDeeplyEqual(o1[key], o2[key])) {
      return false;
    }
  }

  return true;
};