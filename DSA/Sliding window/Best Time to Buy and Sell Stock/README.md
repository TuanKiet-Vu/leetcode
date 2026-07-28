# Best Time to Buy and Sell Stock

## Problem
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0

## Pattern
- Sliding window

## Idea
- Traverse the prices
- Finding the lowest buying price
- Calculate the max profit (current price - buying price)
- Update the max profit

## Complexity
- Time: O(n)
- Space: O(1) 



