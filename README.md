# Object ToolKit

## Purpose
Experimental implementation of alternate smart-pointers for 
owning and referencing with thread-safety.

## Rationale
The current design of smart-pointers in C++ standard-libraries have a 
flair of ad-hook design. While some problems can in fact be solved with
unique, shared and weak pointers, they are unnecessarily complicated
and not reliably thread-safe. 

Assuming that some objects are:
 * Deliberately shared between multiple threads
 * Properly owned for life-time control
 * Referenced by active objects

 We can design a solution based on a distinct usage-pattern

 _TBC_

