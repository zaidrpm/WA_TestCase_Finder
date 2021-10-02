#!/bin/bash
while((1))
do
python3 inputgen.py > /dev/shm/testcase
a=$(diff <(./my < /dev/shm/testcase) <(./chef < /dev/shm/testcase) | wc -l)
if(($a!=0))
then
	cat /dev/shm/testcase
	cp /dev/shm/testcase ./input
	read p
fi
done
