CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11
MATH = ./functions/s21_*.c 
OBJECTS = *.o
TEST= ./tests/*.c

.PHONY: all clean test rebuild

all: s21_math.a test gcov_report

s21_math.a: 
	$(CC) $(CFLAGS) -c  $(MATH)
	ar rcs s21_math.a $(OBJECTS)

test: s21_math.a
	$(CC) $(CFLAGS) $(MATH) $(TEST) s21_math.a -lcheck -o test
	./test
 
rebuild:
	make clean
	make all

clean: 
	rm -rf *.o *.a *.out test *.gch *.gcno *.gcda *.info report 

# brew:
#  curl -fsSL https://rawgit.com/kube/42homebrew/master/install.sh | zsh
#  brew install lcov

gcov_report: s21_math.a
	$(CC) $(CFLAGS) --coverage $(MATH) $(TEST) -lcheck  -lm -o test 
	./test
	lcov -t "test" -o test_report.info -c -d .
	genhtml -o report test_report.info
	rm -rf *.o *.a  *.gch *.gcno test

clang-format:
	clang-format -style=Google -i *.[ch] 
	clang-format -style=Google -i ./functions/*.[ch]
	clang-format -style=Google -i ./tests/*.[ch]

