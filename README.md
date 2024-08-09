# CCP2P

![alt text](./online.jpg)
### Requirements:
 - minimal UI/terminal interface if possible
 - hopefully some security/encryption
 - multithreading?

### Things to think about:
 - tcp sockets for delivery of bytes
 - ip address handling \[what to do when firewall or NAT\]
 - multithreading probably necessary to concurrently send + receive messages
 - terminal interface with std::cout and std::cin is possible but bad, use minimal graphics library such as 'Dear ImGUI' or 'Win32 API'
 - data encryption necessary
 - authentication necessary
 - portability, compatibility?
 - minimal dependancies
 - error handling/connection issues \[make these good, they're bound to happen\]
 - packet loss?
 - static linking for portability
 - optimization flags '-02' or '-03'

_good luck_