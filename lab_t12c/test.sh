#! /bin/bash
read user
read -t 4 pass
tpass=4
if [ $pass = $tpass ]
then
	./hello_world.out
	./hello_world.out > hello
else
	cat ./new
fi
