# cmake-live
Video lecture link: https://www.udemy.com/course/cmake-mastery-from-fundamentals-to-expert-practices/?referralCode=D5CB75F3FC8BEC84CAA9

## README FOR DEVELOPERS

### Creating Folder Structure Manually

```sh
➜  cmake-live git:(main) ✗ mkdir -p sources experimental project/src project/include project/test 
➜  cmake-live git:(main) ✗ cd sources 
➜  sources git:(main) ✗ mkdir -p mod1 mod2 mod3 mod4 mod5
➜  sources git:(main) ✗ mkdir -p {mod1,mod2,mod3,mod4,mod5}/{src,include,test}

```

### FOLDER STRUCTURE

```sh
.
├── LICENSE
├── README.md
├── experimental
├── project
│   ├── CMakeLists.txt
│   ├── include
│   ├── src
│   └── test
├── sources
    ├── Day-1
    │   └── FirstCMake
    │       └── CMakeLists.txt
    ├── mod1
    │   ├── CMakeLists.txt
    │   ├── include
    │   ├── src
    │   └── test
    ├── mod2
    │   ├── CMakeLists.txt
    │   ├── include
    │   ├── src
    │   └── test
    ├── mod3
    │   ├── CMakeLists.txt
    │   ├── include
    │   ├── src
    │   └── test
    ├── mod4
    │   ├── CMakeLists.txt
    │   ├── include
    │   ├── src
    │   └── test
    └── mod5
        ├── CMakeLists.txt
        ├── include
        ├── src
        └── test
```

### Details About Source Folder

**Mod1:** This is for creation of executables.

**Mod2:** This is for creation of static library.

**Mod3:** This is for creation of dynamic library.

**Mod4**: This is for creation of interface library.

**Mod5**: Use Mod2...4 and create executable. This module ensures, our understanding of using CMake to create and use diffrent types of libraries.

### Details About Project Folder

This folder is designed for our project. We'll be working on it to build more confidence in CMake.

### USING GIT TAG

```sh
    List All Tags: git tag

    * Checkout a Tag: git checkout tags/<tag-name>

    View Tag Information: git show <tag-name>
```

### IN WINDOWS, WSL(Ubuntu-24.04)

#### INSTALLING WSL

Ensure WSL is Installed:
If you haven’t installed WSL yet, you can do so by running this command in `PowerShell`: 

```sh
    Check for Previous Installation:
        Run `wsl —install`
    Follow the prompts to set up a Linux distribution like Ubuntu.
    Reference: https://learn.microsoft.com/en-us/windows/wsl/install
    Ex:
    wsl --install -d <DistroName>
```



#### INSTALLING BUILD TOOL-CHAIN (GCC, G++)

```sh
    sudo apt-get update
    sudo apt-get upgrade
    sudo apt install build-essential
    sudo apt-get install gcc
    sudo apt-get install g++
```

#### INSTALLING CMAKE

Download the installer from: https://cmake.org/download/
Install using following command.

```sh
    sudo ./cmake-3.30.5-linux-x86_64.sh --skip-license --prefix=/usr
```
