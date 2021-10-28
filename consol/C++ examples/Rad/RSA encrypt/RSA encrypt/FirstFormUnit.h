//---------------------------------------------------------------------------

#ifndef FirstFormUnitH
#define FirstFormUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TFirstForm : public TForm
{
__published:	// IDE-managed Components
	TButton *EncryptDecrypt;
	TButton *Decrypt;
	TButton *Exit;
	void __fastcall ExitClick(TObject *Sender);
	void __fastcall EncryptDecryptClick(TObject *Sender);
	void __fastcall DecryptClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFirstForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFirstForm *FirstForm;
//---------------------------------------------------------------------------
#endif
