# Simple_shell

## Description

A Unix shell is a command-line interpreter or shell that provides a command line user interface for Unix-like operating systems. The shell is both an interactive command language and a scripting language, and is used by the operating system to control the execution of the system using shell scripts.

## Concept

The most generic sense of the term shell means any program that users employ to type commands. A shell hides the details of the underlying operating system and manages the technical details of the operating system's application programming interface, which is the level of the operating system that programs running on that operating system use.

## Output example

A script that changes the working directory to the user’s home directory.

```python
User@ubuntu:/tmp$ pwd
/tmp
User@ubuntu:/tmp$ echo $HOME
/home/julien
User@ubuntu:/tmp$ source ./2-bring_me_home
User@ubuntu:~$ pwd
/home/julien
User@ubuntu:~$
```
## Authors

Ali Dehissy & Aymen Jebeniani

