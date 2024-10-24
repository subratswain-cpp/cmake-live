# cmake-live 

### Creating Folder Structure Manually
```sh
➜  cmake-live git:(main) ✗ mkdir sources project/src project/include project/test 
➜  cmake-live git:(main) ✗ cd sources 
➜  sources git:(main) ✗ mkdir -p mod1 mod2 mod3 mod4 mod5
➜  sources git:(main) ✗ mkdir -p {mod1,mod2,mod3,mod4,mod5}/{src,include,test}

```
## Details About Source Folder
**Mod1:** This is for creation of executables.

**Mod2:** This is for creation of static library.

**Mod3:** This is for creation of dynamic library.

**Mod4**: This is for creation of interface library.

**Mod5**: Use Mod2...4 and create executable. This module ensures, our understanding of using CMake to create and use diffrent types of libraries.

## Details About Project Folder
This folder is designed for our project. We'll be working on it to build more confidence in CMake.

# Additiona command to use for pushing empty folders to git
```sh
cmake-live git:(main) ✗ find . -type d -empty -exec touch {}/.gitkeep \;
```
Purpose is to create the folder structure and push to git without add any content manually.

While our all folders will have some files, then we can remove .gitkeep file by using following command.
```sh
find . -name ".gitkeep" -type f -delete
```
