COMMANDS:

Note: before you issued the command "python3 test.py" to run your Python code in test.py.
Now, you will issue the following three commands to run your C code:
rm -f ./a.out
gcc test.c
./a.out

Commentary:
* "gcc test.c" produces a file called "a.out" which is your runnable program
* * to run a.out, you issue "./a.out"
* * since you may have an existing "a.out" from a prior compilation you did, it is
*   wise to REMOVE any a.out first via "rm -f ./a.out"
*
*   If you don't understand this, ASK.
*
*   A quick way of doing all three is:
*   rm -f ./a.out && gcc test.c && ./a.out
*
*   The && is the "AND" linking operator in UNIX.
*   If I do: CMD1 && CMD2 && CMD3
*   UNIX will run CMD1; if no error occured, it will run CMD2, else it will stop;
*   if no error occured, it will run CMD3, else it will stop
*
*   If you don't like the "a.out" name for your executable program (there's nothing wrong with
*   a.out, but some people like to see their program having a different, unique name), then
*   use the "-o" flag to gcc. That is:
*   gcc -o test test.c
*   will COMPILE test.c into an executable called "test".
*
