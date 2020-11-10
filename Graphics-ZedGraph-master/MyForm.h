#pragma once
#include <math.h>
#include "../ЧМ з. 11/ЧМ з. 11/RK4.h"

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

	private: System::Windows::Forms::TextBox^ textBox_max_GE;
	private: System::Windows::Forms::TextBox^ textBox_max_GE_x;
	private: System::Windows::Forms::Label^ label_max_GE;
	private: System::Windows::Forms::Label^ label_max_GE_x;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ x_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ v_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ v2_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LEE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_h_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SDC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SIC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ u_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Error;
	private: System::Windows::Forms::TextBox^ textBox_epsilon;
	private: System::Windows::Forms::Label^ label_epsilon;
	private: System::Windows::Forms::TextBox^ textBox_z_0;

	private: System::Windows::Forms::Label^ label1;

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
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button_Draw = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->v_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->v2_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LEE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_h_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SDC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SIC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->u_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Error = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->textBox_max_GE = (gcnew System::Windows::Forms::TextBox());
			this->textBox_max_GE_x = (gcnew System::Windows::Forms::TextBox());
			this->label_max_GE = (gcnew System::Windows::Forms::Label());
			this->label_max_GE_x = (gcnew System::Windows::Forms::Label());
			this->textBox_epsilon = (gcnew System::Windows::Forms::TextBox());
			this->label_epsilon = (gcnew System::Windows::Forms::Label());
			this->textBox_z_0 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->button_Draw->Location = System::Drawing::Point(583, 386);
			this->button_Draw->Name = L"button_Draw";
			this->button_Draw->Size = System::Drawing::Size(142, 29);
			this->button_Draw->TabIndex = 1;
			this->button_Draw->Text = L"Draw";
			this->button_Draw->UseVisualStyleBackColor = true;
			this->button_Draw->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->i, this->x_i,
					this->v_i, this->v2_i, this->Column3, this->LEE, this->Column_h_i, this->SDC, this->SIC, this->u_i, this->Error
			});
			this->dataGridView1->Location = System::Drawing::Point(559, 30);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(702, 327);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
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
			// v_i
			// 
			this->v_i->HeaderText = L"v_i";
			this->v_i->Name = L"v_i";
			this->v_i->ReadOnly = true;
			this->v_i->Width = 50;
			// 
			// v2_i
			// 
			this->v2_i->HeaderText = L"v2_i";
			this->v2_i->Name = L"v2_i";
			this->v2_i->ReadOnly = true;
			this->v2_i->Width = 50;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"v_i - v2_i";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 75;
			// 
			// LEE
			// 
			this->LEE->HeaderText = L"ОЛП";
			this->LEE->Name = L"LEE";
			this->LEE->Width = 50;
			// 
			// Column_h_i
			// 
			this->Column_h_i->HeaderText = L"h_i";
			this->Column_h_i->Name = L"Column_h_i";
			this->Column_h_i->Width = 50;
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
			// u_i
			// 
			this->u_i->HeaderText = L"u_i";
			this->u_i->Name = L"u_i";
			this->u_i->Width = 50;
			// 
			// Error
			// 
			this->Error->HeaderText = L"|u_i-v_i|";
			this->Error->Name = L"Error";
			this->Error->Width = 50;
			// 
			// label_x_max
			// 
			this->label_x_max->AutoSize = true;
			this->label_x_max->Location = System::Drawing::Point(152, 394);
			this->label_x_max->Name = L"label_x_max";
			this->label_x_max->Size = System::Drawing::Size(37, 13);
			this->label_x_max->TabIndex = 5;
			this->label_x_max->Text = L"x_max";
			// 
			// textBox_x_max
			// 
			this->textBox_x_max->Location = System::Drawing::Point(195, 391);
			this->textBox_x_max->Name = L"textBox_x_max";
			this->textBox_x_max->Size = System::Drawing::Size(61, 20);
			this->textBox_x_max->TabIndex = 6;
			this->textBox_x_max->Text = L"20";
			// 
			// label_h
			// 
			this->label_h->AutoSize = true;
			this->label_h->Location = System::Drawing::Point(176, 420);
			this->label_h->Name = L"label_h";
			this->label_h->Size = System::Drawing::Size(13, 13);
			this->label_h->TabIndex = 7;
			this->label_h->Text = L"h";
			// 
			// textBox_h
			// 
			this->textBox_h->Location = System::Drawing::Point(195, 417);
			this->textBox_h->Name = L"textBox_h";
			this->textBox_h->Size = System::Drawing::Size(61, 20);
			this->textBox_h->TabIndex = 8;
			this->textBox_h->Text = L"0,01";
			// 
			// textBox_u_0
			// 
			this->textBox_u_0->Location = System::Drawing::Point(65, 417);
			this->textBox_u_0->Name = L"textBox_u_0";
			this->textBox_u_0->Size = System::Drawing::Size(61, 20);
			this->textBox_u_0->TabIndex = 14;
			this->textBox_u_0->Text = L"10";
			// 
			// label_u_0
			// 
			this->label_u_0->AutoSize = true;
			this->label_u_0->Location = System::Drawing::Point(34, 420);
			this->label_u_0->Name = L"label_u_0";
			this->label_u_0->Size = System::Drawing::Size(25, 13);
			this->label_u_0->TabIndex = 15;
			this->label_u_0->Text = L"u_0";
			// 
			// textBox_N_max
			// 
			this->textBox_N_max->Location = System::Drawing::Point(353, 391);
			this->textBox_N_max->Name = L"textBox_N_max";
			this->textBox_N_max->Size = System::Drawing::Size(61, 20);
			this->textBox_N_max->TabIndex = 16;
			this->textBox_N_max->Text = L"1000";
			// 
			// label_N_max
			// 
			this->label_N_max->AutoSize = true;
			this->label_N_max->Location = System::Drawing::Point(307, 394);
			this->label_N_max->Name = L"label_N_max";
			this->label_N_max->Size = System::Drawing::Size(40, 13);
			this->label_N_max->TabIndex = 17;
			this->label_N_max->Text = L"N_max";
			// 
			// textBox_x_0
			// 
			this->textBox_x_0->Location = System::Drawing::Point(65, 391);
			this->textBox_x_0->Name = L"textBox_x_0";
			this->textBox_x_0->Size = System::Drawing::Size(61, 20);
			this->textBox_x_0->TabIndex = 18;
			this->textBox_x_0->Text = L"0";
			// 
			// label_x_0
			// 
			this->label_x_0->AutoSize = true;
			this->label_x_0->Location = System::Drawing::Point(35, 394);
			this->label_x_0->Name = L"label_x_0";
			this->label_x_0->Size = System::Drawing::Size(24, 13);
			this->label_x_0->TabIndex = 19;
			this->label_x_0->Text = L"x_0";
			// 
			// textBox_max_GE
			// 
			this->textBox_max_GE->Location = System::Drawing::Point(1120, 391);
			this->textBox_max_GE->Name = L"textBox_max_GE";
			this->textBox_max_GE->Size = System::Drawing::Size(131, 20);
			this->textBox_max_GE->TabIndex = 20;
			// 
			// textBox_max_GE_x
			// 
			this->textBox_max_GE_x->Location = System::Drawing::Point(1120, 426);
			this->textBox_max_GE_x->Name = L"textBox_max_GE_x";
			this->textBox_max_GE_x->Size = System::Drawing::Size(131, 20);
			this->textBox_max_GE_x->TabIndex = 21;
			// 
			// label_max_GE
			// 
			this->label_max_GE->AutoSize = true;
			this->label_max_GE->Location = System::Drawing::Point(1005, 394);
			this->label_max_GE->Name = L"label_max_GE";
			this->label_max_GE->Size = System::Drawing::Size(109, 13);
			this->label_max_GE->TabIndex = 22;
			this->label_max_GE->Text = L"Maximum Global Error";
			// 
			// label_max_GE_x
			// 
			this->label_max_GE_x->AutoSize = true;
			this->label_max_GE_x->Location = System::Drawing::Point(1098, 429);
			this->label_max_GE_x->Name = L"label_max_GE_x";
			this->label_max_GE_x->Size = System::Drawing::Size(16, 13);
			this->label_max_GE_x->TabIndex = 23;
			this->label_max_GE_x->Text = L"at";
			// 
			// textBox_epsilon
			// 
			this->textBox_epsilon->Location = System::Drawing::Point(353, 417);
			this->textBox_epsilon->Name = L"textBox_epsilon";
			this->textBox_epsilon->Size = System::Drawing::Size(61, 20);
			this->textBox_epsilon->TabIndex = 24;
			this->textBox_epsilon->Text = L"0,001";
			// 
			// label_epsilon
			// 
			this->label_epsilon->AutoSize = true;
			this->label_epsilon->Location = System::Drawing::Point(307, 420);
			this->label_epsilon->Name = L"label_epsilon";
			this->label_epsilon->Size = System::Drawing::Size(40, 13);
			this->label_epsilon->TabIndex = 25;
			this->label_epsilon->Text = L"epsilon";
			// 
			// textBox_z_0
			// 
			this->textBox_z_0->Location = System::Drawing::Point(65, 443);
			this->textBox_z_0->Name = L"textBox_z_0";
			this->textBox_z_0->Size = System::Drawing::Size(61, 20);
			this->textBox_z_0->TabIndex = 26;
			this->textBox_z_0->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 446);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 13);
			this->label1->TabIndex = 27;
			this->label1->Text = L"u\'_0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1280, 497);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_z_0);
			this->Controls->Add(this->label_epsilon);
			this->Controls->Add(this->textBox_epsilon);
			this->Controls->Add(this->label_max_GE_x);
			this->Controls->Add(this->label_max_GE);
			this->Controls->Add(this->textBox_max_GE_x);
			this->Controls->Add(this->textBox_max_GE);
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
			this->Text = L"MyForm";
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
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f3_list = gcnew ZedGraph::PointPairList();

		// Интервал, где есть данные
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
		std::list<std::vector<double>> num_func = numerical_function_task11(x_0, u_0, z_0, h, xmax, n);
		// Список точек
		dataGridView1->Rows->Clear(); 
		std::list<std::vector<double>> ::iterator it;
		int i = 0;
		double x = x_0;
		double global_error = 0;
		double global_error_max = 0;
		double global_error_max_x = x_0;
		for (it = num_func.begin(); it != num_func.end(); it++)
		{
			x = it->at(0);
			//Добавление на график
			f1_list->Add(it->at(1), it->at(2));
			f2_list->Add(x, it->at(1));
			f3_list->Add(x, it->at(2));
			//Поиск максимальной глобальной ошибки
			/*
			global_error = abs(analytical_test_function(x, x_0, u_0) - it->at(1));
			if (global_error > global_error_max) {
				global_error_max = global_error;
				global_error_max_x = x;
			}
			*/
			//Печать в таблицу
			/*
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i; 			
			dataGridView1->Rows[i]->Cells[1]->Value = x;
			dataGridView1->Rows[i]->Cells[2]->Value = it->at(1);
			dataGridView1->Rows[i]->Cells[3]->Value = it->at(2);
			dataGridView1->Rows[i]->Cells[4]->Value = it->at(3);
			dataGridView1->Rows[i]->Cells[5]->Value = it->at(3);
			dataGridView1->Rows[i]->Cells[6]->Value = it->at(4);
			dataGridView1->Rows[i]->Cells[7]->Value = it->at(5);
			dataGridView1->Rows[i]->Cells[8]->Value = it->at(6);
			dataGridView1->Rows[i]->Cells[9]->Value = analytical_test_function(x, x_0, u_0);
			dataGridView1->Rows[i]->Cells[10]->Value = global_error;
			*/
			i++;
		}
		textBox_max_GE->Text = Convert::ToString(global_error_max);
		textBox_max_GE_x->Text = Convert::ToString(global_error_max_x);

		LineItem Curve1 = panel->AddCurve("u' - u", f1_list, Color::Blue,SymbolType::None);
		LineItem Curve2 = panel->AddCurve("u - x", f2_list, Color::Red, SymbolType::None);
		LineItem Curve3 = panel->AddCurve("u' - x", f3_list, Color::Black, SymbolType::None);

		// Устанавливаем интересующий нас интервал по оси X
		//panel->XAxis->Scale->Min = xmin_limit;
		//panel->XAxis->Scale->Max = xmax_limit;
/*
		// Устанавливаем интересующий нас интервал по оси Y
		panel->YAxis->Scale->Min = ymin_limit;
		panel->YAxis->Scale->Max = ymax_limit;
*/
		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();

	}
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	GraphPane^ panel = zedGraphControl1->GraphPane;
	double xmin = Convert::ToDouble(textBox_x_0->Text);
	double xmax = Convert::ToDouble(textBox_x_max->Text);
	// Устанавливаем интересующий нас интервал по оси X
	panel->XAxis->Scale->Min = xmin;
	panel->XAxis->Scale->Max = xmax;
	panel->YAxis->Scale->Min = xmin;
	panel->YAxis->Scale->Max = xmax;

	// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
	// В противном случае на рисунке будет показана только часть графика, 
	// которая умещается в интервалы по осям, установленные по умолчанию
	zedGraphControl1->AxisChange();
	// Обновляем график
	zedGraphControl1->Invalidate();

}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}