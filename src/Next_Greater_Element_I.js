/**
 * @param {number[]} findNums
 * @param {number[]} nums
 * @return {number[]}
 */
var nextGreaterElement = function(findNums, nums) {
    var max={};
    var stack=[];
    
    for(var i in nums){
        while(stack.length>0 && stack[stack.length-1]<nums[i]){
            max[stack.pop()] = nums[i];
        }
        stack.push(nums[i]);
    }
    
    for(var i in findNums){
        if(findNums[i] in max){
            findNums[i] = max[findNums[i]];
        }else{
            findNums[i]=-1;
        }
    }
    
    return findNums;
};