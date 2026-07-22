package Leetcode;
/*Two Sum | LeetCode #1
Problem Statement

Given an integer array nums and an integer target, return the indices of the two numbers such that they add up to the target.

You may assume that each input has exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1

Input

nums = [2,7,11,15]
target = 9

Output

[0,1]

Explanation

nums[0] + nums[1] = 2 + 7 = 9
Example 2

Input

nums = [3,2,4]
target = 6

Output

[1,2]
Example 3

Input

nums = [3,3]
target = 6

Output

[0,1]*/

import java.util.*;
class LC_array1 {

    public int[] twoSum(int[] nums, int target) {

        for (int i = 0; i < nums.length; i++) {

            for (int j = i + 1; j < nums.length; j++) {

                if (nums[i] + nums[j] == target) {
                    return new int[]{i, j};
                }

            }
        }

        return new int[]{};
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the numbers in array");
        int []array=new int[4];
        for(int i=0;i<array.length;i++){
            array[i]=sc.nextInt();
        }
        System.out.println("Enter target");
        int target=sc.nextInt();
        LC_array1 obj= new LC_array1();
        int []result=obj.twoSum(array,target);
        System.out.println("Indices are: " + result[0] + " " + result[1]);

    }
}