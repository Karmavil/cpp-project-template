# About this project

This is just a template.

I frequently find myself westing valuable time checking the initial set up for a project using a particular language with particular dependencies. However I know that most of the time I will find this project template suitable for most of my needs.

In example:

* I usually use CMake.
* I like this particular clang-format style.
* I like to use a VSCode tasks mixed with Makefile because CMake Tools extension for VSCode uses a [more agnostic approach](https://vector-of-bool.github.io/docs/vscode-cmake-tools/kits.html) and I don't feel comfortable with the ouput. Call me lazy but I don't like  `ninja` and I don't know how to tell vscode that I don't want to use it ("CMake Tools will prefer Ninja if it is present unless configured otherwise.").

> I have `F4` bound to run tasks.

## Dependencies

* GNU Make >= 4.3
* CMake >= 3.13
* GCC >= 11.2.0
* clang-format >= 13.0.1-3+b2

## Notes

Notice that the `run` task will not accept additional arguments. If you want to run some tests or you just need a command line program you better call the binary from the command line:

```bash
./build/CppTemplate hello world
```

## Commands that I usually forget

Add submodules in the `dependencies` directory:

```bash
# example: adding GoogleTest as a submodule
git submodule add --name googletest https://github.com/google/googletest.git dependencies/googletest
```

results in a .gitmodules like this:

```code
[submodule "googletest"]
    path = dependencies/googletest
    url = https://github.com/google/googletest.git
```

> This is not needed given that the submodule is already there. But I usually forget how to correctly name it, resulting in a submodule named with the path. Really dumb isn't it?
