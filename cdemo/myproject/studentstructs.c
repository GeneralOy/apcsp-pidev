#include <stdio.h>
#include <string.h>



typedef struct {
	char firstName[256];
	char lastName[256];
	int age;
	int studentID;
}Student;

void printStudent(Student student1) {
	printf("Student first name : %s\n", student1.firstName);
	printf("Student last name : %s\n", student1.lastName);
	printf("Student age : %d\n", student1.age);
	printf("Student ID: %d\n", student1.studentID);


}

void createNewStudent() {
	char input[256];
	char temp[256]
	Student newStudent;
/*	for(int i = 0; i < 1000000; i++) {
	printf("Would you like to create a new student? [y/n]");
	fgets(input, 256, stdin);
	sscanf(input, "%s", temp);
	if(temp[0] == "y") {
	printf("Ok. Enter the first name below");
	fgets(input, 256, stdin);
	sscanf(input, "%s", newStudent.firstName);
	
	printf("Enter the last name below");
	fgets(input, 256, stdin);
	sscanf(input, "%s", newStudent.firstName);
	
	printf("Enter the student's age below");
	fgets(input, 256, stdin);
	sscanf(input, "%d", newStudent.firstName);
	
	printf("Last one! Enter the student's ID number below");
	fgets(input, 256, stdin);
	sscanf(input, "%d", newStudent.firstName);
	studentList.append(newStudent);
	
	}else if(temp[0] == "n") {
	printf("Ok. Here are the students on the list currently;");
	i = 1111111;
	for(studentList.length) {
	
	}
	}else {
	printf("Input not recognized; Program turned off");
	i = 1111111;
	}
	}
*/


}

int main()
{
	Student studentList[256];
	Student student1;
	strcpy(student1.firstName, "Alan");
	strcpy(student1.lastName, "Turing");
	student1.age = 20;
	student1.studentID = 12345678;
	printStudent(student1);
	//createNewStudent();
}
