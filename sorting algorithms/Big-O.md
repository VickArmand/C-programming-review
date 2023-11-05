<h1>Big Oh notation</h1>

This is a relative representation of the complexity of an algorithm.

There are some important and deliberately chosen words in that sentence:
<ul>
<li>relative: you can only compare apples to apples. You can't compare an algorithm that does arithmetic multiplication to an algorithm that sorts a list of integers. But a comparison of two algorithms to do arithmetic operations (one multiplication, one addition) will tell you something meaningful</li>
<li>representation: BigOh (in its simplest form) reduces the comparison between algorithms to a single variable. That variable is chosen based on observations or assumptions. For example, sorting algorithms are typically compared based on comparison operations (comparing two nodes to determine their relative ordering). This assumes that comparison is expensive. But what if the comparison is cheap but swapping is expensive? It changes the comparison</li>
<li>complexity: if it takes me one second to sort 10,000 elements, how long will it take me to sort one million? Complexity in this instance is a relative measure to something else</li>
</ul>


<h4>Illustration:</h4>

The basic arithmetic operations we learned in school were:
<ul>
<li>addition</li>
<li>subtraction</li>
<li>multiplication</li>
<li>division.</li>
</ul>

Each of these is an operation or a problem. A method of solving these is called an algorithm.

The addition is the simplest. You line the numbers up (to the right) and add the digits in a column writing the last number of that addition in the result. The 'tens' part of that number is carried over to the next column.

Let's assume that the addition of these numbers is the most expensive operation in this algorithm. It stands to reason that to add these two numbers together we have to add together 6 digits (and possibly carry a 7th). If we add two 100 digit numbers together we have to do 100 additions. If we add two 10,000 digit numbers we have to do 10,000 additions.

See the pattern? The complexity (being the number of operations) is directly proportional to the number of digits n in the larger number. We call this O(n) or linear complexity.

Subtraction is similar (except you may need to borrow instead of carry).

Multiplication is different. You line the numbers up, take the first digit in the bottom number and multiply it in turn against each digit in the top number and so on through each digit. So to multiply our two 6 digit numbers we must do 36 multiplications. We may need to do as many as 10 or 11 column adds to get the end result too.

If we have two 100-digit numbers we need to do 10,000 multiplications and 200 adds. For two one million digit numbers we need to do one trillion (1012) multiplications and two million adds.

As the algorithm scales with n-squared, this is O(n2) or quadratic complexity.

<h4>The Telephone Book</h4>

The next best example I can think of is the telephone book, normally called the White Pages or similar but it varies from country to country. But I'm talking about the one that lists people by surname and then initials or first name, possibly address and then telephone numbers.

Now if you were instructing a computer to look up the phone number for "John Smith" in a telephone book that contains 1,000,000 names, what would you do? Ignoring the fact that you could guess how far in the S's started (let's assume you can't), what would you do?

A typical implementation might be to open up to the middle, take the 500,000th and compare it to "Smith". If it happens to be "Smith, John", we just got really lucky. Far more likely is that "John Smith" will be before or after that name. If it's after we then divide the last half of the phone book in half and repeat. If it's before then we divide the first half of the phone book in half and repeat. And so on.

This is called a binary search and is used every day in programming whether you realize it or not.

So if you want to find a name in a phone book of a million names you can actually find any name by doing this at most 20 times. In comparing search algorithms we decide that this comparison is our 'n'.
<ul>
<li>For a phone book of 3 names it takes 2 comparisons (at most).</li>
<li>For 7 it takes at most 3.</li>
<li>For 15 it takes 4.</li>
…
<li>For 1,000,000 it takes 20.</li>
</ul>
That is staggeringly good, isn't it?

In BigOh terms this is O(log n) or logarithmic complexity. Now the logarithm in question could be ln (base e), log10, log2 or some other base. It doesn't matter it's still O(log n) just like O(2n2) and O(100n2) are still both O(n2).

It's worthwhile at this point to explain that BigOh can be used to determine three cases with an algorithm:
<ul>
<li>Best Case: In the telephone book search, the best case is that we find the name in one comparison. This is O(1) or constant complexity</li>
<li>Expected Case: As discussed above this is O(log n)</li>
<li>Worst Case: This is also O(log n).</li>
</ul>
Normally we don't care about the best case. We're interested in the expected and worst case. Sometimes one or the other of these will be more important.

Back to the telephone book.

What if you have a phone number and want to find a name? The police have a reverse phone book but such look-ups are denied to the general public. Or are they? Technically you can reverse look-up a number in an ordinary phone book. How?

You start at the first name and compare the number. If it's a match, great, if not, you move on to the next. You have to do it this way because the phone book is unordered (by phone number anyway).

So to find a name given the phone number (reverse lookup):
<ul>
<li>Best Case: O(1)</li>
<li>Expected Case: O(n) (for 500,000)</li>
<li>Worst Case: O(n) (for 1,000,000)</li>
</ul>
Amortized analysis is a technique used in computer science to analyze the average-case time complexity of algorithms that perform a sequence of operations, where some operations may be more expensive than others. The idea is to spread the cost of these expensive operations over multiple operations, so that the average cost of each operation is constant or less.

Amortized Analysis is used for algorithms where an occasional operation is very slow, but most of the other operations are faster. In Amortized Analysis, we analyze a sequence of operations and guarantee a worst-case average time that is lower than the worst-case time of a particularly expensive operation.
The key idea behind amortized analysis is to spread the cost of an expensive operation over several operations.

The analogy for amortized analysis:

You drive a car. Occasionally, you need to spend 10 minutes going to the gas station and then spend 1 minute refilling the tank with gas. If you did this every time you went anywhere with your car (spend 10 minutes driving to the gas station, spend a few seconds filling up a fraction of a gallon), it would be very inefficient. But if you fill up the tank once every few days, the 11 minutes spent driving to the gas station is "amortized" over a sufficiently large number of trips, that you can ignore it and pretend all your trips were maybe 5% longer.

Consider a dynamic array that grows in size as more elements are added to it, such as ArrayList in Java or std::vector in C++. If we started out with a dynamic array of size 4, we could push 4 elements onto it, and each operation would take constant time. Yet pushing a fifth element onto that array would take longer as the array would have to create a new array of double the current size (8), copy the old elements onto the new array, and then add the new element. The next three push operations would similarly take constant time, and then the subsequent addition would require another slow doubling of the array size.