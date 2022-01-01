### Objective
<p>In this challenge, you will work with arithmetic operators. Check out the Tutorial tab for learning materials and an instructional video.</p>

<h3>Task</h3>
Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost. Round the result to the nearest integer.

<h3>Example</h3>



A tip of 15% * 100 = 15, and the taxes are 8% * 100 = 8. Print the value  and return from the function.

Function Description
Complete the solve function in the editor below.

solve has the following parameters:

int meal_cost: the cost of food before tip and tax
int tip_percent: the tip percentage
int tax_percent: the tax percentage
Returns The function returns nothing. Print the calculated value, rounded to the nearest integer.

Note: Be sure to use precise values for your calculations, or you may end up with an incorrectly rounded result.

<h3>Input Format</h3>

There are  lines of numeric input:
The first line has a double,  (the cost of the meal before tax and tip).
The second line has an integer,  (the percentage of  being added as tip).
The third line has an integer,  (the percentage of  being added as tax).

<h3>Sample Input</h3>

<p>
12.00<br>
20<br>
8
</p>

<h3>Sample Output</h3>

<p>
15
Explanation

Given:
, , 

Calculations:




We round  to the nearest integer and print the result, .