COMPILER=g++
FLAGS=-std=c++11 -Wpedantic -Wall -Werror -Wextra -Weffc++ -Wzero-as-null-pointer-constant
OPTIMIZE=-O3
FILES=Chess.h Chess.cpp main.cpp
OUTPUT=chess

all: main
main: ${FILES}
	${COMPILER} ${FLAGS} ${OPTIMIZE} ${FILES} -o ${OUTPUT}

run: main
	valgrind ./${OUTPUT}

clean:
	/bin/rm -f ${OUTPUT}
