main: main.o  menu.o employee.o employee.o helpers.o teacher.o
	g++  main.cpp -lsqlite3 student.cpp employee.cpp menu.cpp helpers.cpp teacher.cpp


main.o: main.cpp menu.cpp student.cpp employee.cpp menu.h student.h employee.h helpers.cpp helpers.h teacher.h
	g++ main.cpp -lsqlite3 student.cpp employee.cpp menu.cpp helpers.cpp teacher.cpp

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