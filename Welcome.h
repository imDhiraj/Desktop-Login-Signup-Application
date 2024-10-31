//---------------------------------------------------------------------------

#ifndef WelcomeH
#define WelcomeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TWelcomeForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *WelcomeLabel;
private:	// User declarations
public:		// User declarations
	__fastcall TWelcomeForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TWelcomeForm *WelcomeForm;
//---------------------------------------------------------------------------
#endif
