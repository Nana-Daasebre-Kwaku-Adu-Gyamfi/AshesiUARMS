#pragma once
using namespace System;
public ref class Student
{
	public:
	String^ studentID;
	String^ firstName;
	String^ lastName;
	String^ gender;
	String^ dateOfBirth;
	String^ email;
	String^ Program;
	int YearOfStudy;
	Student(String^ studentID, String^ firstName, String^ lastName, String^ dateOfBirth, String^ program, int yearOfStudy)
	{
		studentID = studentID;
		firstName = firstName;
		lastName = lastName;
		gender = gender;
		dateOfBirth = dateOfBirth;
		email = email;
		Program = program;
		YearOfStudy = yearOfStudy;
	}
}