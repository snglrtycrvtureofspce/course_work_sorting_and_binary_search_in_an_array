#include <Windows.h>
#include "LoginForm.h"
#include "MainForm.h"
#include "RegisterForm.h"
/*
main.cpp содержит обработчики событий основного окна
программы и другие вспомогательные функции
*/
using namespace coursework; // использование пространства имён coursework

[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	try
	{
		Application::EnableVisualStyles(); // визуальные стили для приложения
		Application::SetCompatibleTextRenderingDefault(false); // обеспечения визуальной совместимости между элементами управления Windows Forms
		User^ user = nullptr; // зануляем указатель
		while (true) // пока истина
		{
			coursework::LoginForm loginForm; // создаём переменную для обращения к форме
			loginForm.ShowDialog(); // показать форму логина
			if (loginForm.switchToRegister)
			{
				coursework::RegisterForm registerForm; // создаём переменную для обращения к форме
				registerForm.ShowDialog(); // показать форму регистрации
				if (registerForm.switchToLogin)
				{
					continue; // продолжаем
				}
				else
				{
					user = registerForm.user;
					break; // прерываем
				}
			}
			else
			{
				user = loginForm.user;
				break; // прерываем
			}
		}
		if (user != nullptr) // пока не равен нулевому указателю
		{
			coursework::MainForm mainForm(user); // создаём перменную с параметром формы для дальнейшего обращения к ней
			Application::Run(% mainForm); // запускаем форму
		}
		else
		{
			Application::Exit(); // закрытие окна и выброс приложения из памяти
		}
		return 0; // возвращаем
	}
	catch (System::Exception^ exception)
	{
		MessageBox::Show("exception->Message"); // вывод сообщения ошибки на экран
	}
}