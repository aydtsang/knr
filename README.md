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

p.16
> The problem is distinguishing the end of the input from valid data. The
solution is that getchar returns a distinctive value when there is no more
input, a value that cannot be confused with any real character. This value is
called EOF, for "end of file." We must declare c to be a type big enough to hold
any value that getchar returns. We can't use char since c must be big enough to
hold EOF in addition to any possible char. Therefore we use int.  EOF is an
integer defined in ‹stdio.h>, but the specific numeric value doesn't matter as
long as it is not the same as any char value. By using the symbolic constant, we
are assured that nothing in the program depends on the specific numeric value.

p.65
> there are a few situations where gotos may find a place. The most common is to
abandon processing in some deeply nested structure, such as breaking out of two
or more loops at once. The b r e a k statement cannot be used directly since it
only exits from the innermost loop.