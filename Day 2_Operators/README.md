### Objective
<p>In this challenge, you will work with arithmetic operators. Check out the Tutorial tab for learning materials and an instructional video.</p>

<h3>Task</h3>
Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost. Round the result to the nearest integer.

<h3>Example</h3>
<p>
<b>
<i>
meal<sub>c</sub>ost = 100 <br>
tip<sub>p</sub>ercent = 5 <br>
tax<sub>p</sub>ercent = 8
</i>
</b>
</P>
A tip of 15% * 100 = 15, and the taxes are 8% * 100 = 8. Print the value <b>123</b> and return from the function.

<h3>Function Description</h3>
Complete the solve function in the editor below.

solve has the following parameters:
<ul>
<li>int meal_cost: the cost of food before tip and tax</li>
<li>int tip_percent: the tip percentage</li>
<li>int tax_percent: the tax percentage</li>
Returns The function returns nothing. Print the calculated value, rounded to the nearest integer.

<b>Note:</b> Be sure to use precise values for your calculations, or you may end up with an incorrectly rounded result.
</ul>
<h3>Input Format</h3>
<p>
There are <b>3</b> lines of numeric input:<br>
The first line has a double, <b>meal<sub>c</sub>ost</b>(the cost of the meal before tax and tip).<br>
The second line has an integer, <b>tip<sub>p</sub>ercent</b>(the percentage of  being added as tip).<br>
The third line has an integer, <b>tax<sub>p</sub>ercent</b>(the percentage of  being added as tax).
</p>
<h3>Sample Input</h3>

<p>
12.00<br>
20<br>
8
</p>

<h3>Sample Output</h3>

<p>
15<br>

<h3>Explanation</h3>
Given:
<p><b>meal_cost = 12,tip_percent = 20,<br>
tax_percent = 8
</b></p>
Calculations:
<p><b>
tip = 12 and <sup>12</sup>/<sub>100</sub></b>X<b>20 = 2.4</b><br>
<b>tax = 8 and <sup>8</sup>/<sub>100</sub></b>X<b>20 = 0.96</b><br>
<b>total_cost = meal_cost + tip + tax = 12 + 2.4 = round(total_cost) = 15</b><br>
We round  to the nearest integer and print the result, <b>15.</b>