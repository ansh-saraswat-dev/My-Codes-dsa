<h2><a href="https://www.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1?">Bottom View of Binary Tree</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given a binary <strong>tree</strong>, return an array where elements represent the bottom view of the binary tree from left to right.</span></p>
<p><span style="font-size: 14pt;">Note: If there are <strong>multiple </strong>bottom-most nodes for a horizontal distance from the root, then the <strong>latter </strong>one in the level traversal is considered. For example, in the below diagram, 3 and 4 are both the bottommost nodes at a horizontal distance of 0, here <strong>4</strong> will be considered.<br></span><span style="font-size: 14pt;"><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700160/Web/Other/blobid0_1749205033.webp" width="233" height="274"><br></span><span style="font-size: 14pt;">For the above tree, the output should be 5 10 <strong>4</strong> 14 25.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:
</strong><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700160/Web/Other/blobid1_1749205073.webp" height="100"><br><strong>Output: </strong>3 1 2<strong>
Explanation: </strong>First case represents a tree with 3 nodes and 2 edges where root is 1, left child of 1 is 3 and right child of 1 is 2.
<img src="https://contribute.geeksforgeeks.org/wp-content/uploads/BT-1.jpg" alt="" width="400" height="202">
Thus bottom view of the binary tree will be 3 1 2.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input:
</strong>         10
&nbsp;      /    \
&nbsp;     20    30
&nbsp;    /  \
&nbsp;   40   60
<strong>Output: </strong>40 20 60 30</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input:
</strong>        1
&nbsp;      /   
&nbsp;     2
<strong>Output: </strong>2 1</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 &lt;= number of nodes &lt;= 10<sup>5</sup><br>1 &lt;= node-&gt;data &lt;= 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Paytm</code>&nbsp;<code>Flipkart</code>&nbsp;<code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<code>OYO Rooms</code>&nbsp;<code>Walmart</code>&nbsp;<code>CouponDunia</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;