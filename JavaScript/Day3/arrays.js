/**
*   Return the second largest number in the array.
*   @param {Number[]} nums - An array of numbers.
*   @return {Number} The second largest number in the array.
**/
function getSecondLargest(nums) {
    // Complete the function
    let largest = nums[0];
    let seccondLargest = nums[0];
    for(let i=1; i<nums.length; i++)
    {
        if(nums[i]>largest)
        {
            seccondLargest = largest;
            largest = nums[i];
        }
        if(nums[i]>seccondLargest && nums[i]<largest)
        {
            seccondLargest = nums[i];
        }
    }
    return seccondLargest;
}


