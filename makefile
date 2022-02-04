main: main.o  menu.o student.o teacher.o helpers.o
	g++  main.cpp -lsqlite3 student.cpp teacher.cpp menu.cpp helpers.cpp


main.o: main.cpp menu.cpp student.cpp teacher.cpp menu.h student.h teacher.h helpers.cpp helpers.h
	g++ main.cpp -lsqlite3

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