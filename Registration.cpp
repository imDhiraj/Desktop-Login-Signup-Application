//---------------------------------------------------------------------------

#include <fmx.h>
#include <fstream>
#include <string>
#pragma hdrstop

#include "Registration.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TRegistrationForm *RegistrationForm;
//---------------------------------------------------------------------------
__fastcall TRegistrationForm::TRegistrationForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TRegistrationForm::ConfirmButtonClick(TObject *Sender)
{
	fstream myFlie;
	myFlie.open("RegistrateredUser.txt",ios::app);

	if(myFlie.is_open()	){

		 AnsiString  name     = NameEdit ->Text  ;
		 AnsiString  age      = AgeEdit   ->Text  ;
		 AnsiString  username = UsernameEdit  ->Text ;
		 AnsiString  password = PasswordEdit ->Text  ;

		 myFlie<< name <<"," << age <<","<< username <<","<< password<< "\n";
		 myFlie.close();
		 this->Close();

	}

}
//---------------------------------------------------------------------------

