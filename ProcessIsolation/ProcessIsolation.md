**#Process Isolation**
Process Isolation is the seperation of processes so they don't interact with resources the other uses. This can have un-intended consequences and make the software more vulnerable to exploitation. 

**#Good Example: Justification** 
This example only has on process that operates on a file(read memory). Once it's done it closes the file, so other's can act on it but it won't interfere. 

**#Bad Example: Justification** 
This example has 2 processes to and they booth operate on the same file(read memory). THis is the opposite of process isolation, and can have un-intended consequences. 

**Picture Justification**
