

#define EASY 1
#define MEDIUM 2
#define HARD 3

#define UNASSIGNED 0
#define N 9


bool FindUnassignedLocation(int sudoku[N][N], int &row, int &col);
bool UsedInRow(int sudoku[N][N], int row, int num);
bool UsedInCol(int sudoku[N][N], int col, int num);
bool UsedInBox(int sudoku[N][N], int boxStartRow, int boxStartCol, int num);
bool isSafe(int sudoku[N][N], int row, int col, int num);
bool SolveSudoku(int sudoku[N][N]);
void initSudoku(int sudoku[N][N]);
void generateSudoku(int sudoku[N][N], int level);
bool isGenerated(int sudoku[N][N]);
bool checkSudoku(int grid[N][N]);

int levelType = EASY;
int sudoku[N][N];


#pragma once

namespace SUDOKU {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Sudoku : public System::Windows::Forms::Form
	{
	public:
		Sudoku(void)
		{
			InitializeComponent();
		}

	protected:
		~Sudoku()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  solveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  levelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  easyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  hardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  viewHelpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::TextBox^  textBox31;
	private: System::Windows::Forms::TextBox^  textBox32;
	private: System::Windows::Forms::TextBox^  textBox33;
	private: System::Windows::Forms::TextBox^  textBox34;
	private: System::Windows::Forms::TextBox^  textBox35;
	private: System::Windows::Forms::TextBox^  textBox36;
	private: System::Windows::Forms::TextBox^  textBox37;
	private: System::Windows::Forms::TextBox^  textBox38;
	private: System::Windows::Forms::TextBox^  textBox39;
	private: System::Windows::Forms::TextBox^  textBox40;
	private: System::Windows::Forms::TextBox^  textBox41;
	private: System::Windows::Forms::TextBox^  textBox42;
	private: System::Windows::Forms::TextBox^  textBox43;
	private: System::Windows::Forms::TextBox^  textBox44;
	private: System::Windows::Forms::TextBox^  textBox45;
	private: System::Windows::Forms::TextBox^  textBox46;
	private: System::Windows::Forms::TextBox^  textBox47;
	private: System::Windows::Forms::TextBox^  textBox48;
	private: System::Windows::Forms::TextBox^  textBox49;
	private: System::Windows::Forms::TextBox^  textBox50;
	private: System::Windows::Forms::TextBox^  textBox51;
	private: System::Windows::Forms::TextBox^  textBox52;
	private: System::Windows::Forms::TextBox^  textBox53;
	private: System::Windows::Forms::TextBox^  textBox54;
	private: System::Windows::Forms::TextBox^  textBox55;
	private: System::Windows::Forms::TextBox^  textBox56;
	private: System::Windows::Forms::TextBox^  textBox57;
	private: System::Windows::Forms::TextBox^  textBox58;
	private: System::Windows::Forms::TextBox^  textBox59;
	private: System::Windows::Forms::TextBox^  textBox60;
	private: System::Windows::Forms::TextBox^  textBox61;
	private: System::Windows::Forms::TextBox^  textBox62;
	private: System::Windows::Forms::TextBox^  textBox63;
	private: System::Windows::Forms::TextBox^  textBox64;
	private: System::Windows::Forms::TextBox^  textBox65;
	private: System::Windows::Forms::TextBox^  textBox66;
	private: System::Windows::Forms::TextBox^  textBox67;
	private: System::Windows::Forms::TextBox^  textBox68;
	private: System::Windows::Forms::TextBox^  textBox69;
	private: System::Windows::Forms::TextBox^  textBox70;
	private: System::Windows::Forms::TextBox^  textBox71;
	private: System::Windows::Forms::TextBox^  textBox72;
	private: System::Windows::Forms::TextBox^  textBox73;
	private: System::Windows::Forms::TextBox^  textBox74;
	private: System::Windows::Forms::TextBox^  textBox75;
	private: System::Windows::Forms::TextBox^  textBox76;
	private: System::Windows::Forms::TextBox^  textBox77;
	private: System::Windows::Forms::TextBox^  textBox78;
	private: System::Windows::Forms::TextBox^  textBox79;
	private: System::Windows::Forms::TextBox^  textBox80;
	private: System::Windows::Forms::TextBox^  textBox81;

	public: array<TextBox ^> ^ sudokuTextBox;
private: System::Windows::Forms::ToolStripMenuItem^  checkToolStripMenuItem;
public:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Sudoku::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->checkToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->solveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->levelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->easyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewHelpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->textBox48 = (gcnew System::Windows::Forms::TextBox());
			this->textBox49 = (gcnew System::Windows::Forms::TextBox());
			this->textBox50 = (gcnew System::Windows::Forms::TextBox());
			this->textBox51 = (gcnew System::Windows::Forms::TextBox());
			this->textBox52 = (gcnew System::Windows::Forms::TextBox());
			this->textBox53 = (gcnew System::Windows::Forms::TextBox());
			this->textBox54 = (gcnew System::Windows::Forms::TextBox());
			this->textBox55 = (gcnew System::Windows::Forms::TextBox());
			this->textBox56 = (gcnew System::Windows::Forms::TextBox());
			this->textBox57 = (gcnew System::Windows::Forms::TextBox());
			this->textBox58 = (gcnew System::Windows::Forms::TextBox());
			this->textBox59 = (gcnew System::Windows::Forms::TextBox());
			this->textBox60 = (gcnew System::Windows::Forms::TextBox());
			this->textBox61 = (gcnew System::Windows::Forms::TextBox());
			this->textBox62 = (gcnew System::Windows::Forms::TextBox());
			this->textBox63 = (gcnew System::Windows::Forms::TextBox());
			this->textBox64 = (gcnew System::Windows::Forms::TextBox());
			this->textBox65 = (gcnew System::Windows::Forms::TextBox());
			this->textBox66 = (gcnew System::Windows::Forms::TextBox());
			this->textBox67 = (gcnew System::Windows::Forms::TextBox());
			this->textBox68 = (gcnew System::Windows::Forms::TextBox());
			this->textBox69 = (gcnew System::Windows::Forms::TextBox());
			this->textBox70 = (gcnew System::Windows::Forms::TextBox());
			this->textBox71 = (gcnew System::Windows::Forms::TextBox());
			this->textBox72 = (gcnew System::Windows::Forms::TextBox());
			this->textBox73 = (gcnew System::Windows::Forms::TextBox());
			this->textBox74 = (gcnew System::Windows::Forms::TextBox());
			this->textBox75 = (gcnew System::Windows::Forms::TextBox());
			this->textBox76 = (gcnew System::Windows::Forms::TextBox());
			this->textBox77 = (gcnew System::Windows::Forms::TextBox());
			this->textBox78 = (gcnew System::Windows::Forms::TextBox());
			this->textBox79 = (gcnew System::Windows::Forms::TextBox());
			this->textBox80 = (gcnew System::Windows::Forms::TextBox());
			this->textBox81 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();

			// 
			// menuStrip1
			// 

			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->levelToolStripMenuItem, this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(427, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";

			// 
			// fileToolStripMenuItem
			// 

			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->newToolStripMenuItem,
					this->checkToolStripMenuItem, this->solveToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->newToolStripMenuItem->Text = L"&New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &Sudoku::newToolStripMenuItem_Click);
			// 
			// checkToolStripMenuItem
			// 
			this->checkToolStripMenuItem->Name = L"checkToolStripMenuItem";
			this->checkToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->checkToolStripMenuItem->Text = L"&Check";
			this->checkToolStripMenuItem->Click += gcnew System::EventHandler(this, &Sudoku::checkToolStripMenuItem_Click);
			// 
			// solveToolStripMenuItem
			// 
			this->solveToolStripMenuItem->Name = L"solveToolStripMenuItem";
			this->solveToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->solveToolStripMenuItem->Text = L"&Solve";
			this->solveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Sudoku::solveToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->exitToolStripMenuItem->Text = L"E&xit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Sudoku::exitToolStripMenuItem_Click);
			// 
			// levelToolStripMenuItem
			// 
			this->levelToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->easyToolStripMenuItem,
					this->toolStripMenuItem2, this->hardToolStripMenuItem
			});
			this->levelToolStripMenuItem->Name = L"levelToolStripMenuItem";
			this->levelToolStripMenuItem->Size = System::Drawing::Size(46, 20);
			this->levelToolStripMenuItem->Text = L"&Level";
			// 
			// easyToolStripMenuItem
			// 
			this->easyToolStripMenuItem->Checked = true;
			this->easyToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->easyToolStripMenuItem->Name = L"easyToolStripMenuItem";
			this->easyToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->easyToolStripMenuItem->Text = L"&Easy";
			this->easyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Sudoku::easyToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(119, 22);
			this->toolStripMenuItem2->Text = L"&Medium";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &Sudoku::toolStripMenuItem2_Click);
			// 
			// hardToolStripMenuItem
			// 
			this->hardToolStripMenuItem->Name = L"hardToolStripMenuItem";
			this->hardToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->hardToolStripMenuItem->Text = L"&Hard";
			this->hardToolStripMenuItem->Click += gcnew System::EventHandler(this, &Sudoku::hardToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->viewHelpToolStripMenuItem,
					this->aboutToolStripMenuItem1
			});
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->aboutToolStripMenuItem->Text = L"&Help";
			// 
			// viewHelpToolStripMenuItem
			// 
			this->viewHelpToolStripMenuItem->Name = L"viewHelpToolStripMenuItem";
			this->viewHelpToolStripMenuItem->Size = System::Drawing::Size(127, 22);
			this->viewHelpToolStripMenuItem->Text = L"&View Help";
			this->viewHelpToolStripMenuItem->Click += gcnew System::EventHandler(this, &Sudoku::viewHelpToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem1
			// 
			this->aboutToolStripMenuItem1->Name = L"aboutToolStripMenuItem1";
			this->aboutToolStripMenuItem1->Size = System::Drawing::Size(127, 22);
			this->aboutToolStripMenuItem1->Text = L"&About";
			this->aboutToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Sudoku::aboutToolStripMenuItem1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Red;
			this->textBox1->Location = System::Drawing::Point(50, 68);
			this->textBox1->MaxLength = 1;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(31, 31);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Red;
			this->textBox2->Location = System::Drawing::Point(87, 68);
			this->textBox2->MaxLength = 1;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(31, 31);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::Red;
			this->textBox3->Location = System::Drawing::Point(124, 68);
			this->textBox3->MaxLength = 1;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(31, 31);
			this->textBox3->TabIndex = 3;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::Red;
			this->textBox4->Location = System::Drawing::Point(161, 68);
			this->textBox4->MaxLength = 1;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(31, 31);
			this->textBox4->TabIndex = 4;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::Red;
			this->textBox5->Location = System::Drawing::Point(198, 68);
			this->textBox5->MaxLength = 1;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(31, 31);
			this->textBox5->TabIndex = 5;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::Red;
			this->textBox6->Location = System::Drawing::Point(235, 68);
			this->textBox6->MaxLength = 1;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(31, 31);
			this->textBox6->TabIndex = 6;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::Red;
			this->textBox7->Location = System::Drawing::Point(272, 68);
			this->textBox7->MaxLength = 1;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(31, 31);
			this->textBox7->TabIndex = 7;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::Red;
			this->textBox8->Location = System::Drawing::Point(309, 68);
			this->textBox8->MaxLength = 1;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(31, 31);
			this->textBox8->TabIndex = 8;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::Color::Red;
			this->textBox9->Location = System::Drawing::Point(346, 68);
			this->textBox9->MaxLength = 1;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(31, 31);
			this->textBox9->TabIndex = 9;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->ForeColor = System::Drawing::Color::Red;
			this->textBox10->Location = System::Drawing::Point(50, 105);
			this->textBox10->MaxLength = 1;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(31, 31);
			this->textBox10->TabIndex = 10;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::Color::Red;
			this->textBox11->Location = System::Drawing::Point(87, 105);
			this->textBox11->MaxLength = 1;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(31, 31);
			this->textBox11->TabIndex = 11;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->ForeColor = System::Drawing::Color::Red;
			this->textBox12->Location = System::Drawing::Point(124, 105);
			this->textBox12->MaxLength = 1;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(31, 31);
			this->textBox12->TabIndex = 12;
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->ForeColor = System::Drawing::Color::Red;
			this->textBox13->Location = System::Drawing::Point(161, 105);
			this->textBox13->MaxLength = 1;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(31, 31);
			this->textBox13->TabIndex = 13;
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox13->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->ForeColor = System::Drawing::Color::Red;
			this->textBox14->Location = System::Drawing::Point(198, 105);
			this->textBox14->MaxLength = 1;
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(31, 31);
			this->textBox14->TabIndex = 14;
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox14->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->ForeColor = System::Drawing::Color::Red;
			this->textBox15->Location = System::Drawing::Point(235, 105);
			this->textBox15->MaxLength = 1;
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(31, 31);
			this->textBox15->TabIndex = 15;
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox15->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->ForeColor = System::Drawing::Color::Red;
			this->textBox16->Location = System::Drawing::Point(272, 105);
			this->textBox16->MaxLength = 1;
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(31, 31);
			this->textBox16->TabIndex = 16;
			this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox16->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox17->ForeColor = System::Drawing::Color::Red;
			this->textBox17->Location = System::Drawing::Point(309, 105);
			this->textBox17->MaxLength = 1;
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(31, 31);
			this->textBox17->TabIndex = 17;
			this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox17->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox18->ForeColor = System::Drawing::Color::Red;
			this->textBox18->Location = System::Drawing::Point(346, 105);
			this->textBox18->MaxLength = 1;
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(31, 31);
			this->textBox18->TabIndex = 18;
			this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox18->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox19
			// 
			this->textBox19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox19->ForeColor = System::Drawing::Color::Red;
			this->textBox19->Location = System::Drawing::Point(50, 142);
			this->textBox19->MaxLength = 1;
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(31, 31);
			this->textBox19->TabIndex = 19;
			this->textBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox19->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox20
			// 
			this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox20->ForeColor = System::Drawing::Color::Red;
			this->textBox20->Location = System::Drawing::Point(87, 142);
			this->textBox20->MaxLength = 1;
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(31, 31);
			this->textBox20->TabIndex = 20;
			this->textBox20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox20->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox21
			// 
			this->textBox21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox21->ForeColor = System::Drawing::Color::Red;
			this->textBox21->Location = System::Drawing::Point(124, 142);
			this->textBox21->MaxLength = 1;
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(31, 31);
			this->textBox21->TabIndex = 21;
			this->textBox21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox21->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox22
			// 
			this->textBox22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox22->ForeColor = System::Drawing::Color::Red;
			this->textBox22->Location = System::Drawing::Point(161, 142);
			this->textBox22->MaxLength = 1;
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(31, 31);
			this->textBox22->TabIndex = 22;
			this->textBox22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox22->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox23
			// 
			this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox23->ForeColor = System::Drawing::Color::Red;
			this->textBox23->Location = System::Drawing::Point(198, 142);
			this->textBox23->MaxLength = 1;
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(31, 31);
			this->textBox23->TabIndex = 23;
			this->textBox23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox23->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox24
			// 
			this->textBox24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox24->ForeColor = System::Drawing::Color::Red;
			this->textBox24->Location = System::Drawing::Point(235, 142);
			this->textBox24->MaxLength = 1;
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(31, 31);
			this->textBox24->TabIndex = 24;
			this->textBox24->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox24->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox25
			// 
			this->textBox25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox25->ForeColor = System::Drawing::Color::Red;
			this->textBox25->Location = System::Drawing::Point(272, 142);
			this->textBox25->MaxLength = 1;
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(31, 31);
			this->textBox25->TabIndex = 25;
			this->textBox25->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox25->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox26
			// 
			this->textBox26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox26->ForeColor = System::Drawing::Color::Red;
			this->textBox26->Location = System::Drawing::Point(309, 142);
			this->textBox26->MaxLength = 1;
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(31, 31);
			this->textBox26->TabIndex = 26;
			this->textBox26->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox26->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox27
			// 
			this->textBox27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox27->ForeColor = System::Drawing::Color::Red;
			this->textBox27->Location = System::Drawing::Point(346, 142);
			this->textBox27->MaxLength = 1;
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(31, 31);
			this->textBox27->TabIndex = 27;
			this->textBox27->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox27->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox28
			// 
			this->textBox28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox28->ForeColor = System::Drawing::Color::Red;
			this->textBox28->Location = System::Drawing::Point(50, 179);
			this->textBox28->MaxLength = 1;
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(31, 31);
			this->textBox28->TabIndex = 28;
			this->textBox28->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox28->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox29
			// 
			this->textBox29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox29->ForeColor = System::Drawing::Color::Red;
			this->textBox29->Location = System::Drawing::Point(87, 179);
			this->textBox29->MaxLength = 1;
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(31, 31);
			this->textBox29->TabIndex = 29;
			this->textBox29->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox29->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox30
			// 
			this->textBox30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox30->ForeColor = System::Drawing::Color::Red;
			this->textBox30->Location = System::Drawing::Point(124, 179);
			this->textBox30->MaxLength = 1;
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(31, 31);
			this->textBox30->TabIndex = 30;
			this->textBox30->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox30->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox31
			// 
			this->textBox31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox31->ForeColor = System::Drawing::Color::Red;
			this->textBox31->Location = System::Drawing::Point(161, 179);
			this->textBox31->MaxLength = 1;
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(31, 31);
			this->textBox31->TabIndex = 31;
			this->textBox31->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox31->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox32
			// 
			this->textBox32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox32->ForeColor = System::Drawing::Color::Red;
			this->textBox32->Location = System::Drawing::Point(198, 179);
			this->textBox32->MaxLength = 1;
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(31, 31);
			this->textBox32->TabIndex = 32;
			this->textBox32->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox32->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox33
			// 
			this->textBox33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox33->ForeColor = System::Drawing::Color::Red;
			this->textBox33->Location = System::Drawing::Point(235, 179);
			this->textBox33->MaxLength = 1;
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(31, 31);
			this->textBox33->TabIndex = 33;
			this->textBox33->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox33->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox34
			// 
			this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox34->ForeColor = System::Drawing::Color::Red;
			this->textBox34->Location = System::Drawing::Point(272, 179);
			this->textBox34->MaxLength = 1;
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(31, 31);
			this->textBox34->TabIndex = 34;
			this->textBox34->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox34->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox35
			// 
			this->textBox35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox35->ForeColor = System::Drawing::Color::Red;
			this->textBox35->Location = System::Drawing::Point(309, 179);
			this->textBox35->MaxLength = 1;
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(31, 31);
			this->textBox35->TabIndex = 35;
			this->textBox35->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox35->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox36
			// 
			this->textBox36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox36->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox36->ForeColor = System::Drawing::Color::Red;
			this->textBox36->Location = System::Drawing::Point(346, 179);
			this->textBox36->MaxLength = 1;
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(31, 31);
			this->textBox36->TabIndex = 36;
			this->textBox36->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox36->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox37
			// 
			this->textBox37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox37->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox37->ForeColor = System::Drawing::Color::Red;
			this->textBox37->Location = System::Drawing::Point(50, 216);
			this->textBox37->MaxLength = 1;
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(31, 31);
			this->textBox37->TabIndex = 37;
			this->textBox37->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox37->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox38
			// 
			this->textBox38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox38->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox38->ForeColor = System::Drawing::Color::Red;
			this->textBox38->Location = System::Drawing::Point(87, 216);
			this->textBox38->MaxLength = 1;
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(31, 31);
			this->textBox38->TabIndex = 38;
			this->textBox38->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox38->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox39
			// 
			this->textBox39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox39->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox39->ForeColor = System::Drawing::Color::Red;
			this->textBox39->Location = System::Drawing::Point(124, 216);
			this->textBox39->MaxLength = 1;
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(31, 31);
			this->textBox39->TabIndex = 39;
			this->textBox39->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox39->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox40
			// 
			this->textBox40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox40->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox40->ForeColor = System::Drawing::Color::Red;
			this->textBox40->Location = System::Drawing::Point(161, 216);
			this->textBox40->MaxLength = 1;
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(31, 31);
			this->textBox40->TabIndex = 40;
			this->textBox40->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox40->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox41
			// 
			this->textBox41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox41->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox41->ForeColor = System::Drawing::Color::Red;
			this->textBox41->Location = System::Drawing::Point(198, 216);
			this->textBox41->MaxLength = 1;
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(31, 31);
			this->textBox41->TabIndex = 41;
			this->textBox41->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox41->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox42
			// 
			this->textBox42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox42->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox42->ForeColor = System::Drawing::Color::Red;
			this->textBox42->Location = System::Drawing::Point(235, 216);
			this->textBox42->MaxLength = 1;
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(31, 31);
			this->textBox42->TabIndex = 42;
			this->textBox42->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox42->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox43
			// 
			this->textBox43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox43->ForeColor = System::Drawing::Color::Red;
			this->textBox43->Location = System::Drawing::Point(272, 216);
			this->textBox43->MaxLength = 1;
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(31, 31);
			this->textBox43->TabIndex = 43;
			this->textBox43->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox43->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox44
			// 
			this->textBox44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox44->ForeColor = System::Drawing::Color::Red;
			this->textBox44->Location = System::Drawing::Point(309, 216);
			this->textBox44->MaxLength = 1;
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(31, 31);
			this->textBox44->TabIndex = 44;
			this->textBox44->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox44->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox45
			// 
			this->textBox45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox45->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox45->ForeColor = System::Drawing::Color::Red;
			this->textBox45->Location = System::Drawing::Point(346, 216);
			this->textBox45->MaxLength = 1;
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(31, 31);
			this->textBox45->TabIndex = 45;
			this->textBox45->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox45->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox46
			// 
			this->textBox46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox46->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox46->ForeColor = System::Drawing::Color::Red;
			this->textBox46->Location = System::Drawing::Point(50, 253);
			this->textBox46->MaxLength = 1;
			this->textBox46->Name = L"textBox46";
			this->textBox46->Size = System::Drawing::Size(31, 31);
			this->textBox46->TabIndex = 46;
			this->textBox46->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox46->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox47
			// 
			this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox47->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox47->ForeColor = System::Drawing::Color::Red;
			this->textBox47->Location = System::Drawing::Point(87, 253);
			this->textBox47->MaxLength = 1;
			this->textBox47->Name = L"textBox47";
			this->textBox47->Size = System::Drawing::Size(31, 31);
			this->textBox47->TabIndex = 47;
			this->textBox47->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox47->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox48
			// 
			this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox48->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox48->ForeColor = System::Drawing::Color::Red;
			this->textBox48->Location = System::Drawing::Point(124, 253);
			this->textBox48->MaxLength = 1;
			this->textBox48->Name = L"textBox48";
			this->textBox48->Size = System::Drawing::Size(31, 31);
			this->textBox48->TabIndex = 48;
			this->textBox48->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox48->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox49
			// 
			this->textBox49->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox49->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox49->ForeColor = System::Drawing::Color::Red;
			this->textBox49->Location = System::Drawing::Point(161, 253);
			this->textBox49->MaxLength = 1;
			this->textBox49->Name = L"textBox49";
			this->textBox49->Size = System::Drawing::Size(31, 31);
			this->textBox49->TabIndex = 49;
			this->textBox49->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox49->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox50
			// 
			this->textBox50->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox50->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox50->ForeColor = System::Drawing::Color::Red;
			this->textBox50->Location = System::Drawing::Point(198, 253);
			this->textBox50->MaxLength = 1;
			this->textBox50->Name = L"textBox50";
			this->textBox50->Size = System::Drawing::Size(31, 31);
			this->textBox50->TabIndex = 50;
			this->textBox50->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox50->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox51
			// 
			this->textBox51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox51->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox51->ForeColor = System::Drawing::Color::Red;
			this->textBox51->Location = System::Drawing::Point(235, 253);
			this->textBox51->MaxLength = 1;
			this->textBox51->Name = L"textBox51";
			this->textBox51->Size = System::Drawing::Size(31, 31);
			this->textBox51->TabIndex = 51;
			this->textBox51->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox51->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox52
			// 
			this->textBox52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox52->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox52->ForeColor = System::Drawing::Color::Red;
			this->textBox52->Location = System::Drawing::Point(272, 253);
			this->textBox52->MaxLength = 1;
			this->textBox52->Name = L"textBox52";
			this->textBox52->Size = System::Drawing::Size(31, 31);
			this->textBox52->TabIndex = 52;
			this->textBox52->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox52->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox53
			// 
			this->textBox53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox53->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox53->ForeColor = System::Drawing::Color::Red;
			this->textBox53->Location = System::Drawing::Point(309, 253);
			this->textBox53->MaxLength = 1;
			this->textBox53->Name = L"textBox53";
			this->textBox53->Size = System::Drawing::Size(31, 31);
			this->textBox53->TabIndex = 53;
			this->textBox53->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox53->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox54
			// 
			this->textBox54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox54->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox54->ForeColor = System::Drawing::Color::Red;
			this->textBox54->Location = System::Drawing::Point(346, 253);
			this->textBox54->MaxLength = 1;
			this->textBox54->Name = L"textBox54";
			this->textBox54->Size = System::Drawing::Size(31, 31);
			this->textBox54->TabIndex = 54;
			this->textBox54->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox54->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox55
			// 
			this->textBox55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox55->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox55->ForeColor = System::Drawing::Color::Red;
			this->textBox55->Location = System::Drawing::Point(50, 290);
			this->textBox55->MaxLength = 1;
			this->textBox55->Name = L"textBox55";
			this->textBox55->Size = System::Drawing::Size(31, 31);
			this->textBox55->TabIndex = 55;
			this->textBox55->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox55->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox56
			// 
			this->textBox56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox56->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox56->ForeColor = System::Drawing::Color::Red;
			this->textBox56->Location = System::Drawing::Point(87, 290);
			this->textBox56->MaxLength = 1;
			this->textBox56->Name = L"textBox56";
			this->textBox56->Size = System::Drawing::Size(31, 31);
			this->textBox56->TabIndex = 56;
			this->textBox56->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox56->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox57
			// 
			this->textBox57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox57->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox57->ForeColor = System::Drawing::Color::Red;
			this->textBox57->Location = System::Drawing::Point(124, 290);
			this->textBox57->MaxLength = 1;
			this->textBox57->Name = L"textBox57";
			this->textBox57->Size = System::Drawing::Size(31, 31);
			this->textBox57->TabIndex = 57;
			this->textBox57->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox57->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox58
			// 
			this->textBox58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox58->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox58->ForeColor = System::Drawing::Color::Red;
			this->textBox58->Location = System::Drawing::Point(161, 290);
			this->textBox58->MaxLength = 1;
			this->textBox58->Name = L"textBox58";
			this->textBox58->Size = System::Drawing::Size(31, 31);
			this->textBox58->TabIndex = 58;
			this->textBox58->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox58->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox59
			// 
			this->textBox59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox59->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox59->ForeColor = System::Drawing::Color::Red;
			this->textBox59->Location = System::Drawing::Point(198, 290);
			this->textBox59->MaxLength = 1;
			this->textBox59->Name = L"textBox59";
			this->textBox59->Size = System::Drawing::Size(31, 31);
			this->textBox59->TabIndex = 59;
			this->textBox59->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox59->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox60
			// 
			this->textBox60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox60->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox60->ForeColor = System::Drawing::Color::Red;
			this->textBox60->Location = System::Drawing::Point(235, 290);
			this->textBox60->MaxLength = 1;
			this->textBox60->Name = L"textBox60";
			this->textBox60->Size = System::Drawing::Size(31, 31);
			this->textBox60->TabIndex = 60;
			this->textBox60->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox60->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox61
			// 
			this->textBox61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox61->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox61->ForeColor = System::Drawing::Color::Red;
			this->textBox61->Location = System::Drawing::Point(272, 290);
			this->textBox61->MaxLength = 1;
			this->textBox61->Name = L"textBox61";
			this->textBox61->Size = System::Drawing::Size(31, 31);
			this->textBox61->TabIndex = 61;
			this->textBox61->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox61->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox62
			// 
			this->textBox62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox62->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox62->ForeColor = System::Drawing::Color::Red;
			this->textBox62->Location = System::Drawing::Point(309, 290);
			this->textBox62->MaxLength = 1;
			this->textBox62->Name = L"textBox62";
			this->textBox62->Size = System::Drawing::Size(31, 31);
			this->textBox62->TabIndex = 62;
			this->textBox62->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox62->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox63
			// 
			this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox63->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox63->ForeColor = System::Drawing::Color::Red;
			this->textBox63->Location = System::Drawing::Point(346, 290);
			this->textBox63->MaxLength = 1;
			this->textBox63->Name = L"textBox63";
			this->textBox63->Size = System::Drawing::Size(31, 31);
			this->textBox63->TabIndex = 63;
			this->textBox63->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox63->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox64
			// 
			this->textBox64->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox64->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox64->ForeColor = System::Drawing::Color::Red;
			this->textBox64->Location = System::Drawing::Point(50, 327);
			this->textBox64->MaxLength = 1;
			this->textBox64->Name = L"textBox64";
			this->textBox64->Size = System::Drawing::Size(31, 31);
			this->textBox64->TabIndex = 64;
			this->textBox64->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox64->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox65
			// 
			this->textBox65->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox65->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox65->ForeColor = System::Drawing::Color::Red;
			this->textBox65->Location = System::Drawing::Point(87, 327);
			this->textBox65->MaxLength = 1;
			this->textBox65->Name = L"textBox65";
			this->textBox65->Size = System::Drawing::Size(31, 31);
			this->textBox65->TabIndex = 65;
			this->textBox65->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox65->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox66
			// 
			this->textBox66->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox66->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox66->ForeColor = System::Drawing::Color::Red;
			this->textBox66->Location = System::Drawing::Point(124, 327);
			this->textBox66->MaxLength = 1;
			this->textBox66->Name = L"textBox66";
			this->textBox66->Size = System::Drawing::Size(31, 31);
			this->textBox66->TabIndex = 66;
			this->textBox66->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox66->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox67
			// 
			this->textBox67->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox67->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox67->ForeColor = System::Drawing::Color::Red;
			this->textBox67->Location = System::Drawing::Point(161, 327);
			this->textBox67->MaxLength = 1;
			this->textBox67->Name = L"textBox67";
			this->textBox67->Size = System::Drawing::Size(31, 31);
			this->textBox67->TabIndex = 67;
			this->textBox67->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox67->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox68
			// 
			this->textBox68->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox68->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox68->ForeColor = System::Drawing::Color::Red;
			this->textBox68->Location = System::Drawing::Point(198, 327);
			this->textBox68->MaxLength = 1;
			this->textBox68->Name = L"textBox68";
			this->textBox68->Size = System::Drawing::Size(31, 31);
			this->textBox68->TabIndex = 68;
			this->textBox68->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox68->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox69
			// 
			this->textBox69->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox69->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox69->ForeColor = System::Drawing::Color::Red;
			this->textBox69->Location = System::Drawing::Point(235, 327);
			this->textBox69->MaxLength = 1;
			this->textBox69->Name = L"textBox69";
			this->textBox69->Size = System::Drawing::Size(31, 31);
			this->textBox69->TabIndex = 69;
			this->textBox69->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox69->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox70
			// 
			this->textBox70->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox70->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox70->ForeColor = System::Drawing::Color::Red;
			this->textBox70->Location = System::Drawing::Point(272, 327);
			this->textBox70->MaxLength = 1;
			this->textBox70->Name = L"textBox70";
			this->textBox70->Size = System::Drawing::Size(31, 31);
			this->textBox70->TabIndex = 70;
			this->textBox70->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox70->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox71
			// 
			this->textBox71->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox71->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox71->ForeColor = System::Drawing::Color::Red;
			this->textBox71->Location = System::Drawing::Point(309, 327);
			this->textBox71->MaxLength = 1;
			this->textBox71->Name = L"textBox71";
			this->textBox71->Size = System::Drawing::Size(31, 31);
			this->textBox71->TabIndex = 71;
			this->textBox71->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox71->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox72
			// 
			this->textBox72->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox72->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox72->ForeColor = System::Drawing::Color::Red;
			this->textBox72->Location = System::Drawing::Point(346, 327);
			this->textBox72->MaxLength = 1;
			this->textBox72->Name = L"textBox72";
			this->textBox72->Size = System::Drawing::Size(31, 31);
			this->textBox72->TabIndex = 72;
			this->textBox72->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox72->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox73
			// 
			this->textBox73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox73->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox73->ForeColor = System::Drawing::Color::Red;
			this->textBox73->Location = System::Drawing::Point(50, 364);
			this->textBox73->MaxLength = 1;
			this->textBox73->Name = L"textBox73";
			this->textBox73->Size = System::Drawing::Size(31, 31);
			this->textBox73->TabIndex = 73;
			this->textBox73->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox73->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox74
			// 
			this->textBox74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox74->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox74->ForeColor = System::Drawing::Color::Red;
			this->textBox74->Location = System::Drawing::Point(87, 364);
			this->textBox74->MaxLength = 1;
			this->textBox74->Name = L"textBox74";
			this->textBox74->Size = System::Drawing::Size(31, 31);
			this->textBox74->TabIndex = 74;
			this->textBox74->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox74->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox75
			// 
			this->textBox75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox75->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox75->ForeColor = System::Drawing::Color::Red;
			this->textBox75->Location = System::Drawing::Point(124, 364);
			this->textBox75->MaxLength = 1;
			this->textBox75->Name = L"textBox75";
			this->textBox75->Size = System::Drawing::Size(31, 31);
			this->textBox75->TabIndex = 75;
			this->textBox75->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox75->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox76
			// 
			this->textBox76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox76->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox76->ForeColor = System::Drawing::Color::Red;
			this->textBox76->Location = System::Drawing::Point(161, 364);
			this->textBox76->MaxLength = 1;
			this->textBox76->Name = L"textBox76";
			this->textBox76->Size = System::Drawing::Size(31, 31);
			this->textBox76->TabIndex = 76;
			this->textBox76->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox76->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox77
			// 
			this->textBox77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox77->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox77->ForeColor = System::Drawing::Color::Red;
			this->textBox77->Location = System::Drawing::Point(198, 364);
			this->textBox77->MaxLength = 1;
			this->textBox77->Name = L"textBox77";
			this->textBox77->Size = System::Drawing::Size(31, 31);
			this->textBox77->TabIndex = 77;
			this->textBox77->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox77->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox78
			// 
			this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox78->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox78->ForeColor = System::Drawing::Color::Red;
			this->textBox78->Location = System::Drawing::Point(235, 364);
			this->textBox78->MaxLength = 1;
			this->textBox78->Name = L"textBox78";
			this->textBox78->Size = System::Drawing::Size(31, 31);
			this->textBox78->TabIndex = 78;
			this->textBox78->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox78->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox79
			// 
			this->textBox79->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox79->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox79->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox79->ForeColor = System::Drawing::Color::Red;
			this->textBox79->Location = System::Drawing::Point(272, 364);
			this->textBox79->MaxLength = 1;
			this->textBox79->Name = L"textBox79";
			this->textBox79->Size = System::Drawing::Size(31, 31);
			this->textBox79->TabIndex = 79;
			this->textBox79->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox79->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox80
			// 
			this->textBox80->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox80->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox80->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox80->ForeColor = System::Drawing::Color::Red;
			this->textBox80->Location = System::Drawing::Point(309, 364);
			this->textBox80->MaxLength = 1;
			this->textBox80->Name = L"textBox80";
			this->textBox80->Size = System::Drawing::Size(31, 31);
			this->textBox80->TabIndex = 80;
			this->textBox80->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox80->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// textBox81
			// 
			this->textBox81->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->textBox81->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox81->ForeColor = System::Drawing::Color::Red;
			this->textBox81->Location = System::Drawing::Point(346, 364);
			this->textBox81->MaxLength = 1;
			this->textBox81->Name = L"textBox81";
			this->textBox81->Size = System::Drawing::Size(31, 31);
			this->textBox81->TabIndex = 81;
			this->textBox81->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox81->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::textBox81_KeyPress);
			// 
			// Sudoku
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(427, 436);
			this->Controls->Add(this->textBox81);
			this->Controls->Add(this->textBox80);
			this->Controls->Add(this->textBox79);
			this->Controls->Add(this->textBox78);
			this->Controls->Add(this->textBox77);
			this->Controls->Add(this->textBox76);
			this->Controls->Add(this->textBox75);
			this->Controls->Add(this->textBox74);
			this->Controls->Add(this->textBox73);
			this->Controls->Add(this->textBox72);
			this->Controls->Add(this->textBox71);
			this->Controls->Add(this->textBox70);
			this->Controls->Add(this->textBox69);
			this->Controls->Add(this->textBox68);
			this->Controls->Add(this->textBox67);
			this->Controls->Add(this->textBox66);
			this->Controls->Add(this->textBox65);
			this->Controls->Add(this->textBox64);
			this->Controls->Add(this->textBox63);
			this->Controls->Add(this->textBox62);
			this->Controls->Add(this->textBox61);
			this->Controls->Add(this->textBox60);
			this->Controls->Add(this->textBox59);
			this->Controls->Add(this->textBox58);
			this->Controls->Add(this->textBox57);
			this->Controls->Add(this->textBox56);
			this->Controls->Add(this->textBox55);
			this->Controls->Add(this->textBox54);
			this->Controls->Add(this->textBox53);
			this->Controls->Add(this->textBox52);
			this->Controls->Add(this->textBox51);
			this->Controls->Add(this->textBox50);
			this->Controls->Add(this->textBox49);
			this->Controls->Add(this->textBox48);
			this->Controls->Add(this->textBox47);
			this->Controls->Add(this->textBox46);
			this->Controls->Add(this->textBox45);
			this->Controls->Add(this->textBox44);
			this->Controls->Add(this->textBox43);
			this->Controls->Add(this->textBox42);
			this->Controls->Add(this->textBox41);
			this->Controls->Add(this->textBox40);
			this->Controls->Add(this->textBox39);
			this->Controls->Add(this->textBox38);
			this->Controls->Add(this->textBox37);
			this->Controls->Add(this->textBox36);
			this->Controls->Add(this->textBox35);
			this->Controls->Add(this->textBox34);
			this->Controls->Add(this->textBox33);
			this->Controls->Add(this->textBox32);
			this->Controls->Add(this->textBox31);
			this->Controls->Add(this->textBox30);
			this->Controls->Add(this->textBox29);
			this->Controls->Add(this->textBox28);
			this->Controls->Add(this->textBox27);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Sudoku";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sudoku";
			this->Load += gcnew System::EventHandler(this, &Sudoku::Sudoku_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

private: System::Void easyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 // Easy Level

			 this->easyToolStripMenuItem->Checked = true;
			 this->toolStripMenuItem2->Checked = false;
			 this->hardToolStripMenuItem->Checked = false;
			 levelType = EASY;
			 int start = 0;

			 for (int i = 0; i < 81; i++)
			 {
				 sudokuTextBox[i]->Text = "";
				 sudokuTextBox[i]->Enabled = true;
				 sudokuTextBox[i]->ReadOnly = false;
			 }

			 generateSudoku(sudoku, levelType);
			 for (int row = 0; row < N; row++)
			 for (int col = 0; col < N; col++)
			 {
				 if (sudoku[row][col]>0)
				 {
					 sudokuTextBox[start]->Text = System::Convert::ToString(sudoku[row][col]);
					 sudokuTextBox[start]->Enabled = false;
				 }

				 start++;
			 }
}
private: System::Void toolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {

			 // Medium Level

			 this->easyToolStripMenuItem->Checked = false;
			 this->toolStripMenuItem2->Checked = true;
			 this->hardToolStripMenuItem->Checked = false;
			 levelType = MEDIUM;
			 int start = 0;

			 for (int i = 0; i < 81; i++)
			 {
				 sudokuTextBox[i]->Text = "";
				 sudokuTextBox[i]->Enabled = true;
				 sudokuTextBox[i]->ReadOnly = false;
			 }

			 generateSudoku(sudoku, levelType);
			 for (int row = 0; row < N; row++)
			 for (int col = 0; col < N; col++)
			 {
				 if (sudoku[row][col]>0)
				 {
					 sudokuTextBox[start]->Text = System::Convert::ToString(sudoku[row][col]);
					 sudokuTextBox[start]->Enabled = false;
				 }

				 start++;
			 }
}
private: System::Void hardToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 // Hard Level

			 this->easyToolStripMenuItem->Checked = false;
			 this->toolStripMenuItem2->Checked = false;
			 this->hardToolStripMenuItem->Checked = true;
			 levelType = HARD;
			 int start = 0;

			 for (int i = 0; i < 81; i++)
			 {
				 sudokuTextBox[i]->Text = "";
				 sudokuTextBox[i]->Enabled = true;
				 sudokuTextBox[i]->ReadOnly = false;
			 }

			 generateSudoku(sudoku, levelType);
			 for (int row = 0; row < N; row++)
			 for (int col = 0; col < N; col++)
			 {
				 if (sudoku[row][col]>0)
				 {
					 sudokuTextBox[start]->Text = System::Convert::ToString(sudoku[row][col]);
					 sudokuTextBox[start]->Enabled = false;
				 }

				 start++;
			 }
}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 Application::Exit();
}
private: System::Void solveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 // solve sudoku

			 int start = -1;
			 SolveSudoku(sudoku);
			 for (int row = 0; row < N; row++)
			 for (int col = 0; col < N; col++)
			 {
				 sudokuTextBox[++start]->Text = System::Convert::ToString(sudoku[row][col]);
				 sudokuTextBox[start]->ReadOnly = true;
			 }

}
private: System::Void Sudoku_Load(System::Object^  sender, System::EventArgs^  e) {

			 int start = 0;

			     sudokuTextBox = gcnew array<TextBox ^>{
				 textBox1, textBox2, textBox3, textBox4, textBox5, textBox6, textBox7, textBox8, textBox9,
				 textBox10, textBox11, textBox12, textBox13, textBox14, textBox15, textBox16, textBox17, textBox18,
				 textBox19, textBox20, textBox21, textBox22, textBox23, textBox24, textBox25, textBox26, textBox27,
				 textBox28, textBox29, textBox30, textBox31, textBox32, textBox33, textBox34, textBox35, textBox36,
				 textBox37, textBox38, textBox39, textBox40, textBox41, textBox42, textBox43, textBox44, textBox45,
				 textBox46, textBox47, textBox48, textBox49, textBox50, textBox51, textBox52, textBox53, textBox54,
				 textBox55, textBox56, textBox57, textBox58, textBox59, textBox60, textBox61, textBox62, textBox63,
				 textBox64, textBox65, textBox66, textBox67, textBox68, textBox69, textBox70, textBox71, textBox72,
				 textBox73, textBox74, textBox75, textBox76, textBox77, textBox78, textBox79, textBox80, textBox81
			 };


				

				 for (int i = 0; i < 81; i++)
				 {
					 sudokuTextBox[i]->Text = "";
					 sudokuTextBox[i]->Enabled = true;
					 sudokuTextBox[i]->ReadOnly = false;
				 }

				 generateSudoku(sudoku, levelType);
				 for (int row = 0; row < N; row++)
				 for (int col = 0; col < N; col++)
				 {
					 if (sudoku[row][col]>0)
					 {
						 sudokuTextBox[start]->Text = System::Convert::ToString(sudoku[row][col]);
						 sudokuTextBox[start]->Enabled = false;
					 }

					 start++;
				 }

}
private: System::Void newToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 int start = 0;

			 for (int i = 0; i < 81; i++)
			 {
				 sudokuTextBox[i]->Text = "";
				 sudokuTextBox[i]->Enabled = true;
				 sudokuTextBox[i]->ReadOnly = false;
			 }

			 generateSudoku(sudoku,levelType);
			 for (int row = 0; row < N; row++)
			 for (int col = 0; col < N; col++)
			 {
				 if (sudoku[row][col]>0)
				 {
					 sudokuTextBox[start]->Text = System::Convert::ToString(sudoku[row][col]);
					 sudokuTextBox[start]->Enabled = false;
				 }

				 start++;
			 }
}
private: System::Void checkToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 int sArr[N][N];
			 int start = -1;


			 for (int i = 0; i < 81; i++)
			 {
				 if (sudokuTextBox[i]->Text == "")
				 {
					 MessageBox::Show("Please complete your sudoku.","Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					 return;
				 }
			 }

			 for (int j = 0; j < N;j++)
			 for (int k = 0; k < N; k++)
				 sArr[j][k] = System::Convert::ToInt32(sudokuTextBox[++start]->Text);

			 if (checkSudoku(sArr))
				 MessageBox::Show("Your sudoku is correct.", "Sudoku", MessageBoxButtons::OK);
			 else 
				 MessageBox::Show("Your sudoku is wrong, try again...", "Sudoku", MessageBoxButtons::OK);
}
private: System::Void viewHelpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 MessageBox::Show(" Sudoku  is  one  of  the  most  popular  puzzle  games  of  all  time.\n The  objective  is  to  fill  a  9x9  grid   so   that  each  column,  each\n row, and each  of the nine 3x3 boxes (also called blocks or regions)\n contains the digits from 1 to 9. At the beginning  of the  game, the\n 9×9 grid will have some of  the  squares filled in. Your job is to use\n logic to fill in the missing digits and complete the grid.", "Help", MessageBoxButtons::OK);
}
private: System::Void aboutToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {

			 MessageBox::Show("Author : Manish Kumar\nIDE : Visual Studio Express 2013\nLanguage : Visual C++ (CLR)\nWebsite : www.justdocodings.blogspot.com", "About", MessageBoxButtons::OK);
}
private: System::Void textBox81_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {


			 if (e->KeyChar == '1' ||
				 e->KeyChar == '2' ||
				 e->KeyChar == '3' ||
				 e->KeyChar == '4' ||
				 e->KeyChar == '5' ||
				 e->KeyChar == '6' ||
				 e->KeyChar == '7' ||
				 e->KeyChar == '8' ||
				 e->KeyChar == '9' ||
				 e->KeyChar == (char)8)
				 e->Handled = false;
			 else
				 e->Handled = true;

}
};
}


void initSudoku(int sudoku[N][N])
{
	for (int row = 0; row < N; row++)
	for (int col = 0; col < N; col++)
		sudoku[row][col] = UNASSIGNED;
	
}

// This function finds an entry in sudoku that is still unassigned

bool FindUnassignedLocation(int sudoku[N][N], int &row, int &col)
{
	for (row = 0; row < N; row++)
	for (col = 0; col < N; col++)
	if (sudoku[row][col] == UNASSIGNED)
		return true;
	return false;
}

/* Returns a boolean which indicates whether any assigned entry
in the specified row matches the given number. */
bool UsedInRow(int sudoku[N][N], int row, int num)
{
	for (int col = 0; col < N; col++)
	if (sudoku[row][col] == num)
		return true;
	return false;
}

/* Returns a boolean which indicates whether any assigned entry
in the specified column matches the given number. */
bool UsedInCol(int sudoku[N][N], int col, int num)
{
	for (int row = 0; row < N; row++)
	if (sudoku[row][col] == num)
		return true;
	return false;
}

/* Returns a boolean which indicates whether any assigned entry
within the specified 3x3 box matches the given number. */
bool UsedInBox(int sudoku[N][N], int boxStartRow, int boxStartCol, int num)
{
	for (int row = 0; row < 3; row++)
	for (int col = 0; col < 3; col++)
	if (sudoku[row + boxStartRow][col + boxStartCol] == num)
		return true;
	return false;
}

/* Returns a boolean which indicates whether it will be legal to assign
num to the given row,col location. */
bool isSafe(int sudoku[N][N], int row, int col, int num)
{
	/* Check if 'num' is not already placed in current row,
	current column and current 3x3 box */
	return !UsedInRow(sudoku, row, num) &&
		!UsedInCol(sudoku, col, num) &&
		!UsedInBox(sudoku, row - row % 3, col - col % 3, num);
}


bool SolveSudoku(int sudoku[N][N])
{
	int row, col;

	// If there is no unassigned location, we are done
	if (!FindUnassignedLocation(sudoku, row, col))
		return true; // success!

	// consider digits 1 to 9
	for (int num = 1; num <= 9; num++)
	{
		// if looks promising
		if (isSafe(sudoku, row, col, num))
		{
			// make tentative assignment
			sudoku[row][col] = num;

			// return, if success
			if (SolveSudoku(sudoku))
				return true;

			// failure, unmake & try again
			sudoku[row][col] = UNASSIGNED;
		}
	}
	return false;
}

bool isGenerated(int sudoku[N][N])
{
	for (int row = 0; row < N; row++)
	for (int col = 0; col < N; col++)
	{
		if (sudoku[row][col] == UNASSIGNED)
			return true;
	}
	return false;
}

void generateSudoku(int sudoku[N][N], int level)
{
	System::Random^ rnd = gcnew System::Random();

	initSudoku(sudoku);
	sudoku[0][0] = rnd->Next(1, 9);
	sudoku[4][4] = rnd->Next(1, 9);
	sudoku[8][8] = rnd->Next(1, 9);
	SolveSudoku(sudoku);

	for (int row = 0; row < N; row++)
	for (int col = 0; col < N; col++)
	{
		if (levelType == EASY)
		{
			if (rnd->Next(0,4) == 0)
				sudoku[row][col] = UNASSIGNED;
		}
		else if (levelType == MEDIUM)
		{
			if (rnd->Next(0, 3) == 0)
				sudoku[row][col] = UNASSIGNED;
		}

		else
		{
			if (rnd->Next(0, 2) == 0)
				sudoku[row][col] = UNASSIGNED;
		}
	}

	if (!isGenerated(sudoku))
		generateSudoku(sudoku,levelType);

	return;

}

bool checkSudoku(int grid[N][N])
{
	
	
	// check in col

	for (int i = 0; i < N; i++)
	for (int j = 0; j < N - 1;j++)
	for (int k = j + 1; k < N;k++)
	if (grid[i][j] == grid[i][k])
		return false;

	// check in rwo

	for (int _i = 0; _i < N; _i++)
	for (int _j = 0; _j < N - 1; _j++)
	for (int _k = _j + 1; _k < N; _k++)
	if (grid[_j][_i] == grid[_k][_i])
		return false;

	return true;

}

