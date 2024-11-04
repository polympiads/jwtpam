
files=`find jwtpam -name *.c` 

gcc -Wall -fprofile-arcs -ftest-coverage -o out tests/runner.c $files -I./ -I./include

./out

for _gcov in `find . -name "*.gcno"`; do
    gcov $_gcov | python3 verifygcov.py
done