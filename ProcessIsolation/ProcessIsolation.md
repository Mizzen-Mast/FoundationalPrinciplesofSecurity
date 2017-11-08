Process Isolation
-----------------
Process Isolation is the seperation of processes so they don't interact with resources the other uses. This can have un-intended consequences and make the software more vulnerable to exploitation. 

Good Example: Justification
--------------------------- 
This example only has one process that operates on a file(read memory). Once it's done it closes the file, so other's can act on it but won't interfere. 
```c++ 
	if (file.is_open()) {
		file << "writing. \n";
		file << "writing. \n";
		file.close(); 
	}
```
Bad Example: Justification
-------------------------- 
This example has 2 processes to and they booth operate on the same file(read memory). THis is the opposite of process isolation, and can have un-intended consequences. 
```c++
	processOne();
	processTwo();
```
Picture: Justification
---------------------
This picture represents process isolation quite well. If you consider the area the house is being built in, the resources, the analogy can be made. You'll notice no two stages of building are being done at the time in the same area. IE the foundation isn't being pour will the framing is being placed. This mirrors process isolation perfectly, a process shouldn't be running on the same memory that another process is already using. 
![Process Isolation](/Pictures/processIsolation.gif)
