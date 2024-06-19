/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function (arr, fn) {
  let newArray = [];
  arr.forEach((elem, index) => {
    newArray.push(fn(elem, index));
  });
  return newArray;
};
