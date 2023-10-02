#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
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
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_manufacturer;
	private: System::Windows::Forms::Button^ btn_category;
	private: System::Windows::Forms::Button^ btn_product;
	private: System::Windows::Forms::Button^ btn_prod_detail;
	private: System::Windows::Forms::Label^ lbl_prod_formula;
	private: System::Windows::Forms::TextBox^ tb_prod_spec;


	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::TextBox^ tb_prod_formula;
	private: System::Windows::Forms::Label^ lb_prod_weight;
	private: System::Windows::Forms::Label^ lb_prod_unit;
	private: System::Windows::Forms::Label^ lb_prod_spec;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_manufacturer = (gcnew System::Windows::Forms::Button());
			this->btn_category = (gcnew System::Windows::Forms::Button());
			this->btn_product = (gcnew System::Windows::Forms::Button());
			this->btn_prod_detail = (gcnew System::Windows::Forms::Button());
			this->lbl_prod_formula = (gcnew System::Windows::Forms::Label());
			this->tb_prod_spec = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->tb_prod_formula = (gcnew System::Windows::Forms::TextBox());
			this->lb_prod_weight = (gcnew System::Windows::Forms::Label());
			this->lb_prod_unit = (gcnew System::Windows::Forms::Label());
			this->lb_prod_spec = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_manufacturer
			// 
			this->btn_manufacturer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_manufacturer->Location = System::Drawing::Point(40, 34);
			this->btn_manufacturer->Name = L"btn_manufacturer";
			this->btn_manufacturer->Size = System::Drawing::Size(173, 29);
			this->btn_manufacturer->TabIndex = 4;
			this->btn_manufacturer->Text = L"MANUFACTURER";
			this->btn_manufacturer->UseVisualStyleBackColor = true;
			// 
			// btn_category
			// 
			this->btn_category->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_category->Location = System::Drawing::Point(40, 100);
			this->btn_category->Name = L"btn_category";
			this->btn_category->Size = System::Drawing::Size(173, 26);
			this->btn_category->TabIndex = 5;
			this->btn_category->Text = L"CATEGORY";
			this->btn_category->UseVisualStyleBackColor = true;
			// 
			// btn_product
			// 
			this->btn_product->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_product->Location = System::Drawing::Point(40, 166);
			this->btn_product->Name = L"btn_product";
			this->btn_product->Size = System::Drawing::Size(173, 26);
			this->btn_product->TabIndex = 6;
			this->btn_product->Text = L"PRODUCT";
			this->btn_product->UseVisualStyleBackColor = true;
			// 
			// btn_prod_detail
			// 
			this->btn_prod_detail->BackColor = System::Drawing::Color::Silver;
			this->btn_prod_detail->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_prod_detail->Location = System::Drawing::Point(40, 234);
			this->btn_prod_detail->Name = L"btn_prod_detail";
			this->btn_prod_detail->Size = System::Drawing::Size(173, 30);
			this->btn_prod_detail->TabIndex = 7;
			this->btn_prod_detail->Text = L"PRODUCT DETAILS";
			this->btn_prod_detail->UseVisualStyleBackColor = false;
			// 
			// lbl_prod_formula
			// 
			this->lbl_prod_formula->AutoSize = true;
			this->lbl_prod_formula->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_prod_formula->Location = System::Drawing::Point(346, 24);
			this->lbl_prod_formula->Name = L"lbl_prod_formula";
			this->lbl_prod_formula->Size = System::Drawing::Size(199, 17);
			this->lbl_prod_formula->TabIndex = 8;
			this->lbl_prod_formula->Text = L"Enter The Product\'s Formula";
			// 
			// tb_prod_spec
			// 
			this->tb_prod_spec->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_prod_spec->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_prod_spec->Location = System::Drawing::Point(349, 277);
			this->tb_prod_spec->Name = L"tb_prod_spec";
			this->tb_prod_spec->Size = System::Drawing::Size(242, 25);
			this->tb_prod_spec->TabIndex = 9;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(349, 132);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(242, 25);
			this->textBox1->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(349, 205);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(242, 25);
			this->textBox3->TabIndex = 12;
			// 
			// tb_prod_formula
			// 
			this->tb_prod_formula->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_prod_formula->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_prod_formula->Location = System::Drawing::Point(349, 56);
			this->tb_prod_formula->Name = L"tb_prod_formula";
			this->tb_prod_formula->Size = System::Drawing::Size(242, 25);
			this->tb_prod_formula->TabIndex = 14;
			// 
			// lb_prod_weight
			// 
			this->lb_prod_weight->AutoSize = true;
			this->lb_prod_weight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_prod_weight->Location = System::Drawing::Point(346, 100);
			this->lb_prod_weight->Name = L"lb_prod_weight";
			this->lb_prod_weight->Size = System::Drawing::Size(191, 17);
			this->lb_prod_weight->TabIndex = 15;
			this->lb_prod_weight->Text = L"Enter The Product\'s Weight";
			// 
			// lb_prod_unit
			// 
			this->lb_prod_unit->AutoSize = true;
			this->lb_prod_unit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_prod_unit->Location = System::Drawing::Point(346, 175);
			this->lb_prod_unit->Name = L"lb_prod_unit";
			this->lb_prod_unit->Size = System::Drawing::Size(107, 17);
			this->lb_prod_unit->TabIndex = 16;
			this->lb_prod_unit->Text = L"Enter The Unit";
			// 
			// lb_prod_spec
			// 
			this->lb_prod_spec->AutoSize = true;
			this->lb_prod_spec->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_prod_spec->Location = System::Drawing::Point(346, 247);
			this->lb_prod_spec->Name = L"lb_prod_spec";
			this->lb_prod_spec->Size = System::Drawing::Size(167, 17);
			this->lb_prod_spec->TabIndex = 17;
			this->lb_prod_spec->Text = L"Enter Any Specifications";
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(767, 354);
			this->Controls->Add(this->lb_prod_spec);
			this->Controls->Add(this->lb_prod_unit);
			this->Controls->Add(this->lb_prod_weight);
			this->Controls->Add(this->tb_prod_formula);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->tb_prod_spec);
			this->Controls->Add(this->lbl_prod_formula);
			this->Controls->Add(this->btn_prod_detail);
			this->Controls->Add(this->btn_product);
			this->Controls->Add(this->btn_category);
			this->Controls->Add(this->btn_manufacturer);
			this->Name = L"MyForm5";
			this->Text = L"MyForm5";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
