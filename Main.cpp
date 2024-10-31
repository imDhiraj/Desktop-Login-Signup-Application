//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Main.h"
#include "Login.h"
#include "Registration.h"
#include "Welcome.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::MainLoginButtonClick(TObject *Sender)
{
	LoginForm->Show();

}
//---------------------------------------------------------------------------
void __fastcall TMainForm::MainRegisterButtonClick(TObject *Sender)
{
	RegistrationForm->Show();

}
//---------------------------------------------------------------------------
