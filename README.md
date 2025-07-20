# 📊 LeetCode Problem: Longest Subarray of 1's After Deleting One Element

## 🧩 Problem Statement

Given a **binary array** `nums`, you should **delete** one element from it.
Return the size of the **longest non-empty subarray** containing only `1's` in the resulting array.

> **Note :**
> - Return `0` if there is no such subarray.



## 🧠 Approach: Segmenting 1’s Around Zeros


 - **Traverse** and group consecutive `1’s` – when you hit a `0`, push the count of `1’s` before and after it into a vector, and the `0` itself.
  
 - **Resulting vector** = `[count1, 0, count2, 0, count3,...]`
  
 - **Traverse** this new vector:
 > - When you see `0` at `i`, check if `i > 0 && i < vec.size()-1`<br>
 > - Then compute: `vec[i-1] + vec[i+1]` and update the max!
 
- Return max


## ✅ Example Walkthrough

### Example 1

##### Input: nums = [1,1,0,1]
##### Output:  3

##### Explanation: 
<pre> 
  After deleting the number in position 2, [1,1,1] contains 3 numbers with value of 1's.
  
</pre>

### Example 2

##### Input: nums = [0,1,1,1,0,1,1,0,1]
##### Output: 5

##### Explanation: 
<pre> 
   After deleting the number in position 4, [0,1,1,1,1,1,0,1] longest subarray with value of 1's is [1,1,1,1,1].
  
</pre>

### Example 3

##### Input: [1,1,1]
##### Output: 2

##### Explanation: 
<pre>
  You must delete one element.
  
</pre>

## 🛠️ Constraints

- `1 <= nums.length <= 10^5`
- `nums[i]` is either `0` or `1`
