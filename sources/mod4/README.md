# Interface Library

* It is a special kind of library that doesn't compile and build any source files or produce any library artifacts on the disk.

* It specifies usage requirements for it's dependents such as include directories, compile definition, link libraries etc...

* Useful for `header-only library`/`common settings`/`grouping common dependencies`.

```CMAKE
Ex:
add_library(myInterfaceLibrary INTERFACE)
```

## When to use Interface library?

1. Header only Libray.
2. Grouping common dependencies.
3. Imported targets.

** Refer Mod-4 for detail implementation.
