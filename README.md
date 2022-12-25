# Basics of C

1. Write the program
```
#include <stdio.h>

main() 
{
  printf("Hello World");
}
```

2. Compile it
```zsh
$ gcc hello.c
```

3. Find out where the file went
```zsh
$ ls -la
```

4. Run it
```zsh
$ ./a.out
```

# Notable Snippets

p.5

> The only way to learn a new programming language is by writing programs in it.
[...] you have to be able to create the program text somewhere, compile it
successfully, load it, run it, and find out where your output went. With these
mechanical details mastered, everything else is comparatively easy.

p.15

> The model of input and output supported by the standard library is very
simple. Text input or output, regardless of where it originates or where it goes
to, is dealt with as streams of characters. A text stream is a sequence of
characters divided into lines; each line consists of zero or more characters
followed by a newline character. It is the responsibility of the library to make
each input or output stream conform to this model, the C programmer using the
library need not worry about how lines are represented outside the program.