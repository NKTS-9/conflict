#! /bin/bash
echo ====id
whoami
echo ===path
pwd
echo ===users
who > users
echo ===home
ls ~
echo ===line
cat new_ |head -n 3| tail -n 1 > test3
cat test3
echo ===hello
cd hello_world
cat hello_world.cpp
echo ===out_hello

./hello_world.out
./hello_world.out > hello
echo ===ikt$ 
cd
ls ..
echo ===cal
cd lab_t11c
cal 12 2001  > birth
