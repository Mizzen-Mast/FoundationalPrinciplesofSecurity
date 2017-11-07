**#Minimization**
Minimization is the concept where one reduces the attack surface of your program. THis means not opening ports you don't actually need, closing them when you don't need them, only run the code you need to run for the given operations, and various other things that aren't needed are kept out or closed. 

**#Good Example: Justification**
IN this example only on port is needed so it is the only port that is opened. Ther is also no extra code running that isn't necessary, only the message and socket/port opening code is is all that is run. 
```c++ 
serv_addr.sin_family = AF_INET;
serv_addr.sin_addr.s_addr = INADDR_ANY;
serv_addr.sin_port = htons(portno);
if (bind(sockfd, (struct sockaddr *) &serv_addr,
         sizeof(serv_addr)) < 0) 
         error("ERROR on binding");
```

**#Bad Example: Justification**
In this example an extra unnecessary socket is reserved for future use. It's not used throughout the rest of the program. This is extra bloat that isn't required. 
```c++ 
     serv_addr.sin_family = AF_INET;
     serv_addr.sin_addr.s_addr = INADDR_ANY;
     serv_addr.sin_port = htons(portno);
     if (bind(sockfd, (struct sockaddr *) &serv_addr,
              sizeof(serv_addr)) < 0) 
              error("ERROR on binding");
     
     serv_addr2.sin_family = AF_INET;
     serv_addr2.sin_addr.s_addr = INADDR_ANY;
     serv_addr2.sin_port = htons(portno);
     if (bind(sockfd, (struct sockaddr *) &serv_addr2,
              sizeof(serv_addr2)) < 0) 
              error("ERROR on binding");
 
``` 
