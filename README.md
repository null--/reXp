# reXp
A collection of my codes and files I use in my reverse engineering workshops and classes.

## TODO
Automake script for ARM 32/64, Linux 32/64, Win 32/64, OSX 32/64 with and without optimization

Update x86/gcc cheats

Upload C++::Class source codes

Upload Sharif-UT Workshop source codes

Upload Tehran-UT CTF source code


# What a reverse engineer expected to know "IN-DEPTH".
## General Info
Executable files formats

From C to assembly to disassembly!

Endian

## Dissassembly (of your targeted COMPILER/OS/CPU)
### Variables
Stack (and its growth)

Variables (Local vs Global)

Single variable (ECX)

Pointers

Arrays (Stack vs Heap) and Indexes and Sizeof

Strings

strcpy, memcpy (rep movs), memset (rep stos)

###Logical Statements

Simple Math

If-Else

Loop

Switch-Case

###Functions
Types (local, system or api, .so and .dll)

Calling conventions

Callbacks (and function pointer)

###Classes and Structs
Structs

Classes

vtable

_this call

Inherited Members

Inherited Methods

###Anti-Reverse
####Obfuscation
Packing

Unpacking (dump and rebuild sections)

Polymorphism
####Anti-Debugging
API Calls

Flags

Timing

Checksums

SelfDebug
####Anti-VM-and-Emu
Time Based

Artifact Based (registery, vmware I/O)

###Additional
Encryption from a binary poit of view

Advanced Unpacking techniques

Keygening

Using AI algorithms and AI libs (like Z3) to break an encryption
####Explitation 101
#####Fuzzing
Local Apps

File Format

Network Protocol
#####Overflow
Stack Overflow

Heap Overflow
#####Shellcoding
Shellcoding and null-byte

Encoding

ARM
#####Protection
Stack Cookie

DEP

ASLR

Sandboxing
#####Bypass
SEH Overwrite

ROP

More Advanced Techniques
#####Kernel Explitation
[...]
