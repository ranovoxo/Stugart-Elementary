main: main.o  menu.o student.o teacher.o helpers.o
	g++ student.cpp teacher.cpp main.cpp menu.cpp helpers.cpp


main.o: main.cpp menu.cpp student.cpp teacher.cpp menu.h student.h teacher.h helpers.cpp helpers.h
	g++ -c main.cpp

menu.o: menu.h
	g++ -c menu.cpp

student.o: student.h
	g++ -c student.cpp

teacher.o: teacher.h student.h
	g++ -c teacher.cpp

helpers.o: helpers.h
	g++ -c helpers.cpp

run:
	@./a.out

clean:
	rm a.out *.o