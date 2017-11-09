Simplicity
----------
Simplicity is actually fairly simple. Don't over complicate your code. If one can do something in one line and it's a simple process then do it, but if you can't do it in an uncomplicated manner then don't. Simplicity is also language dependent. For example, don't use anonymous functions in c++ even though they are offered because the general practitioner of c++ won't understand what a lambda function is. But if you're writing in a function language where anonymous functions are used all the time, then use them. 

Good Example: Justifitcation
----------------------------
In this example, I'm just listing the values of a number, a, after dividing it by four. I don't do anything fancy, just divide by four and display that new number; 
```c++ 
while (a > 4) {
		a/=4;

	std::cout << "The value of a after being divided by four is: " << a << std::endl;
	} 
```

Bad Example: Justification
--------------------------
In this example, I'm still displaying the value of a number after having divided by "4", but it's more complicated. Infact, I actually divide by 2, then have a counter that increases after each division. If the value of the counter%2 is 1 then it's equivilent to dividing by 2, so I can then display the value of a.

```c++
while (a > 4) {	
 a/=2; 
 if ( ( count % 2 ) == 1 )
	 std::cout << "The value of a after being divided by 4 is: " << a << std::endl;	
 count+=1;
 } 
```

Picture: Justification
----------------------
This picture is the definition of simplicity. It has thing laid out in a sequential intuitive order that doesn't overly complicate things or add a bunch of extra fluff. This image was retrived from: [Octane Auto](https://ocataneauto.ca)
[Justificaiton](/Pictures/simplicity.jpeg)
