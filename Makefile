LINUXCOMPILER=g++
WINCOMPILER=x86_64-w64-mingw32-g++
FLAGS=-std=c++11 -Wpedantic -Wall -Werror -Wextra -Weffc++ -Wzero-as-null-pointer-constant
LIBS=-static-libgcc -static-libstdc++
OPTIMIZE=-O2
FILES=Chess.h Chess.cpp main.cpp
OUTPUT=chess

all: chess
chess: ${FILES}
	${LINUXCOMPILER} ${FLAGS} ${OPTIMIZE} ${FILES} -o ${OUTPUT}

windows: ${FILES}
	${WINCOMPILER} ${FLAGS} ${LIBS} ${OPTIMIZE} ${FILES} -o ${OUTPUT}.exe

run: ${OUTPUT}
	valgrind ./${OUTPUT}

clean:
	/bin/rm -f ${OUTPUT}
	/bin/rm -f ${OUTPUT}.exe
