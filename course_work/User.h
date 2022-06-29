#pragma once
/*
User.h - имеет класс пользователя с переменными всех данных, нужен для реализации SQL базы
*/
using namespace System;

public ref class User
{
public:
	int id;
	String^ name;
	String^ email;
	String^ phone;
	String^ address;
	String^ password;
};