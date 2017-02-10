/**
 * @param {number[]} numbers
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(numbers, target) {
    var hashtable=[];
    for(var i=0; i<numbers.length; i++){
        var item=target-numbers[i];
        if(hashtable[item] === undefined){
            hashtable[numbers[i]] = i;
        }else{
            return [hashtable[item]+1, i+1]
        }
    }
};