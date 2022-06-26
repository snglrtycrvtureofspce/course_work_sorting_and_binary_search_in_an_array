#include <Windows.h>
#include "LoginForm.h"
#include "MainForm.h"
#include "RegisterForm.h"

using namespace coursework;

[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	try
	{
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		User^ user = nullptr;
		while (true)
		{
			coursework::LoginForm loginForm;
			loginForm.ShowDialog();
			if (loginForm.switchToRegister)
			{
				// show the register form
				coursework::RegisterForm registerForm;
				registerForm.ShowDialog();
				if (registerForm.switchToLogin)
				{
					continue;
				}
				else
				{
					user = registerForm.user;
					break;
				}
			}
			else
			{
				user = loginForm.user;
				break;
			}
		}
		if (user != nullptr)
		{
			coursework::MainForm mainForm(user);
			Application::Run(% mainForm);
		}
		else
		{
			Application::Exit();
			//	MessageBox::Show("Authentication Cancelled", "Cancelled", MessageBoxButtons::OK);
		}
		return 0;
	}
	catch (System::Exception^ exception)
	{
		MessageBox::Show("exception->Message"); // вывод сообщения ошибки на экран
	}
}