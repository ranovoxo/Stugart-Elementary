main: main.o  control.o employee.o employee.o teacher.o student.o manage.o
	g++  main.cpp -lsqlite3 students/student.cpp employees/employee.cpp controls/control.cpp teachers/teacher.cpp dbManage/manage.cpp

employee.o: employees/employee.h
	g++ -c employees/employee.cpp

student.o: students/student.h
	g++ -c students/student.cpp

teacher.o: teachers/teacher.h students/student.h
	g++ -c teachers/teacher.cpp

control.o: controls/control.h
	g++ -c controls/control.cpp

manage.o: dbManage/manage.h
	g++ -c dbManage/manage.cpp

run:
	@./a.out

clean:
	rm a.out *.o