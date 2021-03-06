#pragma once
#include <math.h>
#include "../�� �. 11/�� �. 11/RK4.h"

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::Button^ button_Draw;

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^ label_x_max;
	private: System::Windows::Forms::TextBox^ textBox_x_max;

	private: System::Windows::Forms::Label^ label_h;
	private: System::Windows::Forms::TextBox^ textBox_h;


	private: System::Windows::Forms::TextBox^ textBox_u_0;

	private: System::Windows::Forms::Label^ label_u_0;
	private: System::Windows::Forms::TextBox^ textBox_N_max;

	private: System::Windows::Forms::Label^ label_N_max;
	private: System::Windows::Forms::TextBox^ textBox_x_0;

	private: System::Windows::Forms::Label^ label_x_0;

















	private: System::Windows::Forms::TextBox^ textBox_epsilon;
	private: System::Windows::Forms::Label^ label_epsilon;
	private: System::Windows::Forms::TextBox^ textBox_z_0;

	private: System::Windows::Forms::Label^ label1;












	private: ZedGraph::ZedGraphControl^ zedGraphControl2;
	private: ZedGraph::ZedGraphControl^ zedGraphControl3;
	private: System::Windows::Forms::TextBox^ textBox_m;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_c;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_k;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox_k_;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox_RBC;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button_Clear;












private: System::Windows::Forms::TextBox^ textBox_max_LE;
private: System::Windows::Forms::TextBox^ textBox_max_h;
private: System::Windows::Forms::TextBox^ textBox_C1;
private: System::Windows::Forms::TextBox^ textBox_C2;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ i;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ x_i;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ u_i;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ z_i;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ u2_i;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ z2_i;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ LEE;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_h_i;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ SDC;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ SIC;

























	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button_Draw = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label_x_max = (gcnew System::Windows::Forms::Label());
			this->textBox_x_max = (gcnew System::Windows::Forms::TextBox());
			this->label_h = (gcnew System::Windows::Forms::Label());
			this->textBox_h = (gcnew System::Windows::Forms::TextBox());
			this->textBox_u_0 = (gcnew System::Windows::Forms::TextBox());
			this->label_u_0 = (gcnew System::Windows::Forms::Label());
			this->textBox_N_max = (gcnew System::Windows::Forms::TextBox());
			this->label_N_max = (gcnew System::Windows::Forms::Label());
			this->textBox_x_0 = (gcnew System::Windows::Forms::TextBox());
			this->label_x_0 = (gcnew System::Windows::Forms::Label());
			this->textBox_epsilon = (gcnew System::Windows::Forms::TextBox());
			this->label_epsilon = (gcnew System::Windows::Forms::Label());
			this->textBox_z_0 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl3 = (gcnew ZedGraph::ZedGraphControl());
			this->textBox_m = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_c = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_k = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_k_ = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox_RBC = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button_Clear = (gcnew System::Windows::Forms::Button());
			this->textBox_max_LE = (gcnew System::Windows::Forms::TextBox());
			this->textBox_max_h = (gcnew System::Windows::Forms::TextBox());
			this->textBox_C1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_C2 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->u_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->z_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->u2_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->z2_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LEE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_h_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SDC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SIC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(38, 30);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(501, 327);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// button_Draw
			// 
			this->button_Draw->Location = System::Drawing::Point(1561, 415);
			this->button_Draw->Name = L"button_Draw";
			this->button_Draw->Size = System::Drawing::Size(142, 29);
			this->button_Draw->TabIndex = 1;
			this->button_Draw->Text = L"���������";
			this->button_Draw->UseVisualStyleBackColor = true;
			this->button_Draw->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(12) {
				this->i, this->x_i,
					this->u_i, this->z_i, this->u2_i, this->z2_i, this->Column3, this->Column1, this->LEE, this->Column_h_i, this->SDC, this->SIC
			});
			this->dataGridView1->Location = System::Drawing::Point(549, 30);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(876, 327);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// label_x_max
			// 
			this->label_x_max->AutoSize = true;
			this->label_x_max->Location = System::Drawing::Point(1211, 623);
			this->label_x_max->Name = L"label_x_max";
			this->label_x_max->Size = System::Drawing::Size(37, 13);
			this->label_x_max->TabIndex = 5;
			this->label_x_max->Text = L"x_max";
			// 
			// textBox_x_max
			// 
			this->textBox_x_max->Location = System::Drawing::Point(1254, 620);
			this->textBox_x_max->Name = L"textBox_x_max";
			this->textBox_x_max->Size = System::Drawing::Size(61, 20);
			this->textBox_x_max->TabIndex = 6;
			this->textBox_x_max->Text = L"2";
			// 
			// label_h
			// 
			this->label_h->AutoSize = true;
			this->label_h->Location = System::Drawing::Point(1551, 678);
			this->label_h->Name = L"label_h";
			this->label_h->Size = System::Drawing::Size(86, 13);
			this->label_h->TabIndex = 7;
			this->label_h->Text = L"��������� ���";
			// 
			// textBox_h
			// 
			this->textBox_h->Location = System::Drawing::Point(1642, 675);
			this->textBox_h->Name = L"textBox_h";
			this->textBox_h->Size = System::Drawing::Size(61, 20);
			this->textBox_h->TabIndex = 8;
			this->textBox_h->Text = L"0,01";
			// 
			// textBox_u_0
			// 
			this->textBox_u_0->Location = System::Drawing::Point(1124, 646);
			this->textBox_u_0->Name = L"textBox_u_0";
			this->textBox_u_0->Size = System::Drawing::Size(61, 20);
			this->textBox_u_0->TabIndex = 14;
			this->textBox_u_0->Text = L"10";
			// 
			// label_u_0
			// 
			this->label_u_0->AutoSize = true;
			this->label_u_0->Location = System::Drawing::Point(1093, 649);
			this->label_u_0->Name = L"label_u_0";
			this->label_u_0->Size = System::Drawing::Size(25, 13);
			this->label_u_0->TabIndex = 15;
			this->label_u_0->Text = L"u_0";
			// 
			// textBox_N_max
			// 
			this->textBox_N_max->Location = System::Drawing::Point(1642, 623);
			this->textBox_N_max->Name = L"textBox_N_max";
			this->textBox_N_max->Size = System::Drawing::Size(61, 20);
			this->textBox_N_max->TabIndex = 16;
			this->textBox_N_max->Text = L"1000";
			// 
			// label_N_max
			// 
			this->label_N_max->AutoSize = true;
			this->label_N_max->Location = System::Drawing::Point(1486, 626);
			this->label_N_max->Name = L"label_N_max";
			this->label_N_max->Size = System::Drawing::Size(150, 13);
			this->label_N_max->TabIndex = 17;
			this->label_N_max->Text = L"������������ ����� �����";
			// 
			// textBox_x_0
			// 
			this->textBox_x_0->Location = System::Drawing::Point(1124, 620);
			this->textBox_x_0->Name = L"textBox_x_0";
			this->textBox_x_0->Size = System::Drawing::Size(61, 20);
			this->textBox_x_0->TabIndex = 18;
			this->textBox_x_0->Text = L"0";
			// 
			// label_x_0
			// 
			this->label_x_0->AutoSize = true;
			this->label_x_0->Location = System::Drawing::Point(1094, 623);
			this->label_x_0->Name = L"label_x_0";
			this->label_x_0->Size = System::Drawing::Size(24, 13);
			this->label_x_0->TabIndex = 19;
			this->label_x_0->Text = L"x_0";
			// 
			// textBox_epsilon
			// 
			this->textBox_epsilon->Location = System::Drawing::Point(1642, 649);
			this->textBox_epsilon->Name = L"textBox_epsilon";
			this->textBox_epsilon->Size = System::Drawing::Size(61, 20);
			this->textBox_epsilon->TabIndex = 24;
			this->textBox_epsilon->Text = L"0,0001";
			// 
			// label_epsilon
			// 
			this->label_epsilon->AutoSize = true;
			this->label_epsilon->Location = System::Drawing::Point(1402, 652);
			this->label_epsilon->Name = L"label_epsilon";
			this->label_epsilon->Size = System::Drawing::Size(234, 13);
			this->label_epsilon->TabIndex = 25;
			this->label_epsilon->Text = L"�������� �������� ��������� �����������";
			// 
			// textBox_z_0
			// 
			this->textBox_z_0->Location = System::Drawing::Point(1124, 672);
			this->textBox_z_0->Name = L"textBox_z_0";
			this->textBox_z_0->Size = System::Drawing::Size(61, 20);
			this->textBox_z_0->TabIndex = 26;
			this->textBox_z_0->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1091, 675);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 13);
			this->label1->TabIndex = 27;
			this->label1->Text = L"u\'_0";
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(38, 365);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(501, 327);
			this->zedGraphControl2->TabIndex = 28;
			// 
			// zedGraphControl3
			// 
			this->zedGraphControl3->Location = System::Drawing::Point(549, 365);
			this->zedGraphControl3->Name = L"zedGraphControl3";
			this->zedGraphControl3->ScrollGrace = 0;
			this->zedGraphControl3->ScrollMaxX = 0;
			this->zedGraphControl3->ScrollMaxY = 0;
			this->zedGraphControl3->ScrollMaxY2 = 0;
			this->zedGraphControl3->ScrollMinX = 0;
			this->zedGraphControl3->ScrollMinY = 0;
			this->zedGraphControl3->ScrollMinY2 = 0;
			this->zedGraphControl3->Size = System::Drawing::Size(501, 327);
			this->zedGraphControl3->TabIndex = 29;
			// 
			// textBox_m
			// 
			this->textBox_m->Location = System::Drawing::Point(1124, 412);
			this->textBox_m->Name = L"textBox_m";
			this->textBox_m->Size = System::Drawing::Size(61, 20);
			this->textBox_m->TabIndex = 30;
			this->textBox_m->Text = L"1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1103, 415);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 13);
			this->label2->TabIndex = 31;
			this->label2->Text = L"m";
			// 
			// textBox_c
			// 
			this->textBox_c->Location = System::Drawing::Point(1124, 438);
			this->textBox_c->Name = L"textBox_c";
			this->textBox_c->Size = System::Drawing::Size(61, 20);
			this->textBox_c->TabIndex = 32;
			this->textBox_c->Text = L"0,15";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1105, 441);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 33;
			this->label3->Text = L"c";
			// 
			// textBox_k
			// 
			this->textBox_k->Location = System::Drawing::Point(1124, 464);
			this->textBox_k->Name = L"textBox_k";
			this->textBox_k->Size = System::Drawing::Size(61, 20);
			this->textBox_k->TabIndex = 34;
			this->textBox_k->Text = L"2,0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1105, 467);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 35;
			this->label4->Text = L"k";
			// 
			// textBox_k_
			// 
			this->textBox_k_->Location = System::Drawing::Point(1124, 490);
			this->textBox_k_->Name = L"textBox_k_";
			this->textBox_k_->Size = System::Drawing::Size(61, 20);
			this->textBox_k_->TabIndex = 36;
			this->textBox_k_->Text = L"2,0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1103, 493);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(17, 13);
			this->label5->TabIndex = 37;
			this->label5->Text = L"k*";
			// 
			// textBox_RBC
			// 
			this->textBox_RBC->Location = System::Drawing::Point(1642, 597);
			this->textBox_RBC->Name = L"textBox_RBC";
			this->textBox_RBC->Size = System::Drawing::Size(61, 20);
			this->textBox_RBC->TabIndex = 38;
			this->textBox_RBC->Text = L"0,05";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1440, 604);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(196, 13);
			this->label6->TabIndex = 39;
			this->label6->Text = L"�������� ������ �� ������ �������";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1191, 415);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 13);
			this->label7->TabIndex = 40;
			this->label7->Text = L"�����";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1191, 438);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(162, 13);
			this->label8->TabIndex = 41;
			this->label8->Text = L"����������� �������������";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(1191, 467);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(64, 13);
			this->label9->TabIndex = 42;
			this->label9->Text = L"Ƹ�������";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(1191, 493);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(156, 13);
			this->label10->TabIndex = 43;
			this->label10->Text = L" ���������� ��������������";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(35, 727);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(1465, 144);
			this->label11->TabIndex = 44;
			this->label11->Text = resources->GetString(L"label11.Text");
			// 
			// button_Clear
			// 
			this->button_Clear->Location = System::Drawing::Point(1561, 450);
			this->button_Clear->Name = L"button_Clear";
			this->button_Clear->Size = System::Drawing::Size(142, 29);
			this->button_Clear->TabIndex = 45;
			this->button_Clear->Text = L"�������";
			this->button_Clear->UseVisualStyleBackColor = true;
			this->button_Clear->Click += gcnew System::EventHandler(this, &MyForm::button_Clear_Click);
			// 
			// textBox_max_LE
			// 
			this->textBox_max_LE->Location = System::Drawing::Point(1561, 57);
			this->textBox_max_LE->Name = L"textBox_max_LE";
			this->textBox_max_LE->Size = System::Drawing::Size(142, 20);
			this->textBox_max_LE->TabIndex = 46;
			// 
			// textBox_max_h
			// 
			this->textBox_max_h->Location = System::Drawing::Point(1561, 83);
			this->textBox_max_h->Name = L"textBox_max_h";
			this->textBox_max_h->Size = System::Drawing::Size(142, 20);
			this->textBox_max_h->TabIndex = 47;
			// 
			// textBox_C1
			// 
			this->textBox_C1->Location = System::Drawing::Point(1561, 109);
			this->textBox_C1->Name = L"textBox_C1";
			this->textBox_C1->Size = System::Drawing::Size(142, 20);
			this->textBox_C1->TabIndex = 48;
			// 
			// textBox_C2
			// 
			this->textBox_C2->Location = System::Drawing::Point(1561, 135);
			this->textBox_C2->Name = L"textBox_C2";
			this->textBox_C2->Size = System::Drawing::Size(142, 20);
			this->textBox_C2->TabIndex = 49;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(1459, 60);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(96, 13);
			this->label12->TabIndex = 50;
			this->label12->Text = L"�������� ||���||";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(1447, 86);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(108, 13);
			this->label13->TabIndex = 51;
			this->label13->Text = L"������������ ���";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(1456, 138);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(99, 13);
			this->label14->TabIndex = 52;
			this->label14->Text = L"���������� ���� ";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(1454, 112);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(101, 13);
			this->label15->TabIndex = 53;
			this->label15->Text = L"���������� ����";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(1511, 30);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(116, 24);
			this->label16->TabIndex = 54;
			this->label16->Text = L"����������";
			// 
			// i
			// 
			this->i->HeaderText = L"i";
			this->i->Name = L"i";
			this->i->Width = 30;
			// 
			// x_i
			// 
			this->x_i->HeaderText = L"x_i";
			this->x_i->Name = L"x_i";
			this->x_i->ReadOnly = true;
			this->x_i->Width = 50;
			// 
			// u_i
			// 
			this->u_i->HeaderText = L"u_i";
			this->u_i->Name = L"u_i";
			this->u_i->ReadOnly = true;
			this->u_i->Width = 50;
			// 
			// z_i
			// 
			this->z_i->HeaderText = L"z_i";
			this->z_i->Name = L"z_i";
			this->z_i->Width = 50;
			// 
			// u2_i
			// 
			this->u2_i->HeaderText = L"u2_i";
			this->u2_i->Name = L"u2_i";
			this->u2_i->ReadOnly = true;
			this->u2_i->Width = 50;
			// 
			// z2_i
			// 
			this->z2_i->HeaderText = L"z2_i";
			this->z2_i->Name = L"z2_i";
			this->z2_i->Width = 50;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"u_i - u2_i";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 75;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"z_i - z2_i";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 75;
			// 
			// LEE
			// 
			this->LEE->HeaderText = L"|| ��� ||";
			this->LEE->Name = L"LEE";
			this->LEE->Width = 150;
			// 
			// Column_h_i
			// 
			this->Column_h_i->HeaderText = L"h_i";
			this->Column_h_i->Name = L"Column_h_i";
			// 
			// SDC
			// 
			this->SDC->HeaderText = L"C1";
			this->SDC->Name = L"SDC";
			this->SDC->Width = 50;
			// 
			// SIC
			// 
			this->SIC->HeaderText = L"C2";
			this->SIC->Name = L"SIC";
			this->SIC->Width = 50;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1715, 907);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox_C2);
			this->Controls->Add(this->textBox_C1);
			this->Controls->Add(this->textBox_max_h);
			this->Controls->Add(this->textBox_max_LE);
			this->Controls->Add(this->button_Clear);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox_RBC);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox_k_);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox_k);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox_c);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox_m);
			this->Controls->Add(this->zedGraphControl3);
			this->Controls->Add(this->zedGraphControl2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_z_0);
			this->Controls->Add(this->label_epsilon);
			this->Controls->Add(this->textBox_epsilon);
			this->Controls->Add(this->label_x_0);
			this->Controls->Add(this->textBox_x_0);
			this->Controls->Add(this->label_N_max);
			this->Controls->Add(this->textBox_N_max);
			this->Controls->Add(this->label_u_0);
			this->Controls->Add(this->textBox_u_0);
			this->Controls->Add(this->textBox_h);
			this->Controls->Add(this->label_h);
			this->Controls->Add(this->textBox_x_max);
			this->Controls->Add(this->label_x_max);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button_Draw);
			this->Controls->Add(this->zedGraphControl1);
			this->Name = L"MyForm";
			this->Text = L"������� 11 ������ ���������";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		double f1(double x){
			return sin(x);
		}

		double f2(double x) {
			return sin(2 * x);
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		GraphPane^ panel2 = zedGraphControl2->GraphPane;
		GraphPane^ panel3 = zedGraphControl3->GraphPane;
		//panel->CurveList->Clear();
		//panel2->CurveList->Clear();
		//panel3->CurveList->Clear();
		panel->XAxis->Title->Text = "��� u, ��������";
		panel->YAxis->Title->Text = "��� u', ��������";
		panel->Title->Text = "������� �������";
		panel2->XAxis->Title->Text = "��� x, �����";
		panel2->YAxis->Title->Text = "��� u, ��������";
		panel3->XAxis->Title->Text = "��� x, �����";
		panel3->YAxis->Title->Text = "��� u', ��������";
		panel2->Title->Text = "������ ����������� �������� �� �������";
		panel3->Title->Text = "������ ����������� �������� �� �������";
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f3_list = gcnew ZedGraph::PointPairList();

		// ��������, ��� ���� ������
		double x_0 = Convert::ToDouble(textBox_x_0->Text);
		double xmax = Convert::ToDouble(textBox_x_max->Text);

		double h = Convert::ToDouble(textBox_h->Text);


		double xmin_limit = x_0 - 0.1;
		double xmax_limit = xmax + 0.1;
/*
		double ymin_limit = -1.0;
		double ymax_limit = 100.0;
*/
		int n = Convert::ToInt32(textBox_N_max->Text);
		double u_0 = Convert::ToDouble(textBox_u_0->Text);
		double z_0 = Convert::ToDouble(textBox_z_0->Text);
		double epsilon = Convert::ToDouble(textBox_epsilon->Text);

		double m = Convert::ToDouble(textBox_m->Text);
		double c = Convert::ToDouble(textBox_c->Text);
		double k = Convert::ToDouble(textBox_k->Text);
		double k_ = Convert::ToDouble(textBox_k_->Text);

		double RBC = Convert::ToDouble(textBox_RBC->Text);

		//std::list<std::vector<double>> num_func = numerical_function_task11(x_0, u_0, z_0, h, xmax, n);
		std::list<std::vector<double>> num_func = numerical_function_control_task11(x_0, u_0, z_0, h, xmax, n, epsilon, m, c, k, k_, RBC);
		// ������ �����
		dataGridView1->Rows->Clear(); 
		std::list<std::vector<double>> ::iterator it;
		int i = 0;
		double x = x_0;
		/*
		double global_error = 0;
		double global_error_max = 0;
		double global_error_max_x = x_0;
		*/
		double max_local_error = 0;
		double max_h = 0;
		int C1_count = 0, C2_count = 0;

		for (it = num_func.begin(); it != num_func.end(); it++)
		{
			x = it->at(0);
			//���������� �� ������
			f1_list->Add(it->at(1), it->at(2));
			f2_list->Add(x, it->at(1));
			f3_list->Add(x, it->at(2));
			//����� ������������ ���������� ������
			/*
			global_error = abs(analytical_test_function(x, x_0, u_0) - it->at(1));
			if (global_error > global_error_max) {
				global_error_max = global_error;
				global_error_max_x = x;
			}
			*/
			
			//������ � �������
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = x;
			dataGridView1->Rows[i]->Cells[2]->Value = it->at(1);
			dataGridView1->Rows[i]->Cells[3]->Value = it->at(2);
			dataGridView1->Rows[i]->Cells[4]->Value = it->at(3);
			dataGridView1->Rows[i]->Cells[5]->Value = it->at(4);
			dataGridView1->Rows[i]->Cells[6]->Value = it->at(5);
			dataGridView1->Rows[i]->Cells[7]->Value = it->at(6);
			dataGridView1->Rows[i]->Cells[8]->Value = it->at(7);
			dataGridView1->Rows[i]->Cells[9]->Value = it->at(8);
			dataGridView1->Rows[i]->Cells[10]->Value = it->at(9);
			dataGridView1->Rows[i]->Cells[11]->Value = it->at(10);
			//����� ������������ ��������� ������
			if (it->at(7) > max_local_error)
			{
				max_local_error = it->at(7);
			}
			//����� ������������� ����
			if (it->at(8) > max_h)
			{
				max_h = it->at(8);
			}
			C1_count = it->at(9);
			C2_count = it->at(10);
			
			i++;
		}
		
		//textBox_max_GE->Text = Convert::ToString(global_error_max);
		//textBox_max_GE_x->Text = Convert::ToString(global_error_max_x);

		LineItem Curve1 = panel->AddCurve("", f1_list, Color::Blue,SymbolType::None);
		LineItem Curve2 = panel2->AddCurve("", f2_list, Color::Red, SymbolType::None);
		LineItem Curve3 = panel3->AddCurve("", f3_list, Color::Black, SymbolType::None);

		textBox_max_LE->Text = Convert::ToString(max_local_error);
		textBox_max_h->Text = Convert::ToString(max_h);
		textBox_C1->Text = Convert::ToString(C1_count);
		textBox_C2->Text = Convert::ToString(C2_count);

		//textBox_max_LE->Text = Convert::ToString(max_local_error);

		// ������������� ������������ ��� �������� �� ��� X
		//panel->XAxis->Scale->Min = xmin_limit;
		//panel->XAxis->Scale->Max = xmax_limit;
/*
		// ������������� ������������ ��� �������� �� ��� Y
		panel->YAxis->Scale->Min = ymin_limit;
		panel->YAxis->Scale->Max = ymax_limit;
*/
		// �������� ����� AxisChange (), ����� �������� ������ �� ����. 
		// � ��������� ������ �� ������� ����� �������� ������ ����� �������, 
		// ������� ��������� � ��������� �� ����, ������������� �� ���������
		zedGraphControl1->AxisChange();
		// ��������� ������
		zedGraphControl1->Invalidate();
		// ������� ��������� � ��������� �� ����, ������������� �� ���������
		zedGraphControl2->AxisChange();
		// ��������� ������
		zedGraphControl2->Invalidate();
		// ������� ��������� � ��������� �� ����, ������������� �� ���������
		zedGraphControl3->AxisChange();
		// ��������� ������
		zedGraphControl3->Invalidate();

	}
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	GraphPane^ panel = zedGraphControl1->GraphPane;
	double xmin = Convert::ToDouble(textBox_x_0->Text);
	double xmax = Convert::ToDouble(textBox_x_max->Text);
	// ������������� ������������ ��� �������� �� ��� X
	panel->XAxis->Scale->Min = xmin;
	panel->XAxis->Scale->Max = xmax;
	panel->YAxis->Scale->Min = xmin;
	panel->YAxis->Scale->Max = xmax;

	// �������� ����� AxisChange (), ����� �������� ������ �� ����. 
	// � ��������� ������ �� ������� ����� �������� ������ ����� �������, 
	// ������� ��������� � ��������� �� ����, ������������� �� ���������
	zedGraphControl1->AxisChange();
	// ��������� ������
	zedGraphControl1->Invalidate();

}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_Clear_Click(System::Object^ sender, System::EventArgs^ e) {
	GraphPane^ panel = zedGraphControl1->GraphPane;
	GraphPane^ panel2 = zedGraphControl2->GraphPane;
	GraphPane^ panel3 = zedGraphControl3->GraphPane;
	panel->CurveList->Clear();
	panel2->CurveList->Clear();
	panel3->CurveList->Clear();
	// ������� ��������� � ��������� �� ����, ������������� �� ���������
	zedGraphControl1->AxisChange();
	// ��������� ������
	zedGraphControl1->Invalidate();
	// ������� ��������� � ��������� �� ����, ������������� �� ���������
	zedGraphControl2->AxisChange();
	// ��������� ������
	zedGraphControl2->Invalidate();
	// ������� ��������� � ��������� �� ����, ������������� �� ���������
	zedGraphControl3->AxisChange();
	// ��������� ������
	zedGraphControl3->Invalidate();
}
};
}