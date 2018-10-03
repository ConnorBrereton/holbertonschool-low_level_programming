How I cracked crackme2

**Step 1**
Since most passwords are exploited using the very insecure strcmp() function I started off running ltrace
> ltrace ./crackme2

**Step 2**
After running ltrace on the file I kept seeing the same string over and over again
> jennieandjayloveasm=

**Step 3**
I realized that this is an environment variable and it popping up all over ltrace made me believe that this was some sort of hint. Also, I saw this string next to some content that related to the user.

**Step 4**
I wanted to set the environment variable to the password so that I could rerun ltrace on the string and see if it exposed the strcmp() function
> export jennieandjayloveasm= (quote)pass(quote)

**Step 5**
Going off of my original hypothesis I reran ltrace on the file to see what had been exposed
> ltrace ./crackme2

**Step 6**
I saw that strmp was comparing two string..
> e99a18c428cb38d5f260853678922e03
and
> d3d4c842f6f30e02d32dcb47ad2d8844

**Step 7**
I knew that strcmp() compares against the first string char *s1 so that had to be the reference aka the password

**Step 8**
I figured out that the password is
> abc123
