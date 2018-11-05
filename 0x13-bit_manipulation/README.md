# Bitwise Operators
Various functions that you would see in an embedded systems course or project that required extremely precise calculation at the bit level. Functions include converting binary to various other forms such as unsigned int, or its representation of a number, bit precision, mapping problems, and password cracking.

# Time/Space Analysis
| Program       | Time          | Space          |
| ------------- | ------------- | -------------- |
| bin2uint      | O(n)          | O(1)           |
| int2bin       | O(n)          | O(1)           |
| idx2val       | O(n)          | O(1)           |
| idx2one       | O(1)          | O(1)           |
| idxtozero     | O(1)          | O(1)           |
| xor2num       | O(n)          | O(1)           |
| endian        | O(1)          | O(1)           |

# Password Cracking Explanation

### File to crack 
`crackme3`

### objdump observations
- callq - implies that clang compiler was used (Macintosh)

- there's an entire function dedicated to checking the password and it's called `check_password`

- output is a bit hard to follow.. restorting to ltrace to get a higher level of abstraction

### ltrace observations
- ok so due to the `check_password` call being called repeatedly im going to assume that there is a strcmp() function being called to check the password since the function was built with DRY principles in mind. again im making some somewhat hefty assumptions here but lets roll with it and see if anything more stands out from our ltrace call

- lets check for stupid passwords first 

<code>ltrace ./crackme3 password</code>

- awesome, this tells us something important.. the length of the password is 3 characters. that actually tells us a lot! lets try a 3 mixed character string and ensure that that holds for the password length.

<code>ltrace ./crackme3 123</code>

- ok so the result is the same ... we know that the length of the password is 3 characters


- at this point we could go in one of two directions. 1) brute force 2) use `gdb disass <CHECK_PASSWORD>`

### Brute Force
- lets use some combinatorics to figure out if brute force is a wise call in this case. here we go..

- 3 characters (length). 26 lowercase letters + 26 uppercase letters + 10 digits + 32 symbols (US Keyboard) = 94 possible combinations for each spot

- 94^3 = 830,584 possible solutions

- ok so that's not that many solutions. the number seems big most computers can crack this many solutions in a reasonable time.

- but, lets use gdb

### gdb
- i entered `disass check_password` to inspect the function that actually handles the password checking for obvious reasons

- i found something interersting. the code chunch below

`0x00000000004005f6 <+0>:     push   %rbp
 0x00000000004005f7 <+1>:     mov    %rsp,%rbp
 0x0000000000400614 <+30>:    mov    $0x0,%eax
 0x0000000000400619 <+35>:    jmp    0x400673 <check_password+12
 0x000000000040061b <+37>:    movl   $0x46c6f48,-0x4(%rbp)`

%rbp is a register used for local variables and we see that the contents of register $rsp are being moved to $rbp. we also see that the %rbp register is 4 bytes in size and the hex next to it can be broked down into three characters

48, 6f, 6c, 46

48: H
6f: o
6c: l
46: F

but we know that we only want 3 of those. So, the password is `Hol`
