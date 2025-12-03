#pragma once
using namespace System;

public ref class UserAccount
{
public:
	String^ userID;
	String^ username;
	String^ passwordHash;
	String^ role;
	String^ linkedID;
	UserAccount(String^ userID, String^ username, String^ passwordHash, String^ role, String^ linkedID)
	{
		this->userID = userID;
		this->username = username;
		this->passwordHash = passwordHash;
		this->role = role;
		this->linkedID = linkedID;
	}
};