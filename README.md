# Lab7AK
##  Basic_1 task
1. Will added `BUG_ON()` instead -EINVAL (how done in lab work 6).
2. Will added error `kmalloc() returned 0`
3. Modificate `Makefile` for example `appendix1`.
4. Search a crash for commands `objdump` and `gdb`.
## So let's start:
Use `ls` how see our files. And use insmod for `hello1.ko` and `hello2.ko`
![](https://github.com/Threadripper1/Lab7AK/blob/main/images/1.png)
![](https://github.com/Threadripper1/Lab7AK/blob/main/images/2.png)
Here we can see this is an unhandled fault in the function `print_hello` which in `hello1.ko`.

Next task, use `ls` how see our files and use insmod for `hello1\2.ko` with parameter howmany=20
![](https://github.com/Threadripper1/Lab7AK/blob/main/images/3.png)
![](https://github.com/Threadripper1/Lab7AK/blob/main/images/4.png)
Oops ! We can see internal error, which we defined by adding BUG_ON(1) to condition.

Next step, it is debagging with speciality utilities:

With `objdump`
![](https://github.com/Threadripper1/Lab7AK/blob/main/images/5.png)

With `gdb`
![](https://github.com/Threadripper1/Lab7AK/blob/main/images/6.png)
