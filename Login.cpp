//---------------------------------------------------------------------------

#include <fmx.h>
#include <fstream >
#include <string>
#include <vector >
#include <sstream>
#include "Welcome.h"
#pragma hdrstop

#include "Login.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TLoginForm *LoginForm;
//---------------------------------------------------------------------------
__fastcall TLoginForm::TLoginForm(TComponent* Owner)
	: TForm(Owner)
{
	 messageLabel ->Text ="";
}
//---------------------------------------------------------------------------

std::vector <std::string> parsecommalimitedstring(std::string line){
	std::vector <std::string> result;
	std::stringstream s_stream(line);

	while(s_stream.good()){
		std::string substr;
		getline(s_stream,substr,',');
		result.push_back(substr);
	}
	return result;

}

const char* Chartostring(AnsiString ansistring){
	return ansistring.c_str();
}
void __fastcall TLoginForm::LoginButtonClick(TObject *Sender)
{

		fstream myFlie;
		myFlie.open("RegistrateredUser.txt",ios::in);
		 if(myFlie.is_open()){
			std:: string line;
				 while(getline(myFlie,line)) {
					std::vector <std::string> parsedline =parsecommalimitedstring(line);
					const char* username =parsedline.at(2).c_str();

				   //	AnsiString editUsername =LoginUsernameEdit->Text ;
				   //	const char* usernameString = editUsername.c_str();

					if (std::strcmp(username,Chartostring(LoginUsernameEdit->Text)) == 0 ) {
						const char* password =parsedline.at(3).c_str();

						//  AnsiString editPassword =LoginPasswordEdit->Text ;
						//	const char* usernamepassword =editPassword.c_str();

						if(std::strcmp(password,Chartostring(LoginPasswordEdit->Text)) ==0	) {
							messageLabel ->Text ="Success!";

							WelcomeForm->Show();
							myFlie.close();   // Close file before closing form
							Close();


						}

						else{
						   messageLabel   ->Text ="Wrong Password!";

						}
						break;
					}
			  }
	   }


	 // myFlie.close();  // Close the file after reading

}
//---------------------------------------------------------------------------

