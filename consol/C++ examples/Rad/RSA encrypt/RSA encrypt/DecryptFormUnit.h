//---------------------------------------------------------------------------

#ifndef DecryptFormUnitH
#define DecryptFormUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TDecryptForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Header;
	TLabel *EnterMainKeys;
	TEdit *Key1;
	TLabel *And;
	TEdit *Key2;
	TButton *Generation;
	TTrackBar *TrackBar1;
	TLabel *Label1;
private:	// User declarations
public:		// User declarations
	__fastcall TDecryptForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDecryptForm *DecryptForm;
//---------------------------------------------------------------------------
#endif
