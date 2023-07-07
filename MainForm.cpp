#include "startform.h"
#include "MainForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	pidregulator::MainForm main_form;
	Application::Run(% main_form);
}

void pidregulator::MainForm::get_k() 
{
	k_P = Convert::ToDouble(numericUpDown1->Value) / 4;
	k_I = Convert::ToDouble(numericUpDown2->Value) / 100;
	k_D = Convert::ToDouble(numericUpDown3->Value) / 1000;
}

System::Void pidregulator::MainForm::buttonstart_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (flag == false)
	{
		buttonstart->Text = L"STOP";
		flag = true;
		x = 0;
		sdx = 0;
		simulation->restart();
		chart1->Series[0]->Points->Clear();
		chart1->ChartAreas[0]->AxisX->ScaleView->Position = 0;
		chart1->ChartAreas[0]->AxisX->Minimum = 0;
		chart1->ChartAreas[0]->AxisX->Maximum = 10;
		get_k();
		controller->set_components(k_P, k_I, k_D);
		timer1->Start();
		pictureBox1->Top = simulation->get_height(IN_PIXELS);
	}
	else
	{
		buttonstart->Text = L"START";
		flag = false;
		timer1->Stop();
	}
}

System::Void pidregulator::MainForm::timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	x += dx;
	(*simulation)(0, !WITH_CORRECTION);	//следующее состояние системы без учета воздействия импеллера
	if (on) rotation_speed = controller->get_result(simulation->convert_height(setpoint), simulation->get_height(IN_PIXELS)); //расчет управляющего значения
	(*simulation)(rotation_speed, WITH_CORRECTION); //состояние системы с учетом воздействия импеллера
	label6->Text = Convert::ToString(rotation_speed);
	trackBar1->Value = rotation_speed;
	//сдвиг графика
	if ((sdx += dx) > (chart1->ChartAreas[0]->AxisX->ScaleView->Size - 1))
	{
		sdx = chart1->ChartAreas[0]->AxisX->ScaleView->Size - 2;
		chart1->ChartAreas[0]->AxisX->Minimum += 1;
		chart1->ChartAreas[0]->AxisX->Maximum += 1;
		chart1->ChartAreas[0]->AxisX->Interval = 2;
		chart1->ChartAreas[0]->AxisX->ScaleView->Position += 1;
		for (int i = 0; i < 49; i++)
			chart1->Series[0]->Points->RemoveAt(0);
	}
	//рисуем график
	chart1->Series[0]->Points->AddXY(x, simulation->get_height(!IN_PIXELS));
	//draw image
	if (simulation->get_height(IN_PIXELS) > (341 - 0.0 * 175))
	{
		pictureBox1->Top = PXLS_START_H;
		timer1->Enabled = false;
		MessageBox::Show("столкновение с поверхностью.", "Внимание!",  MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else
		pictureBox1->Top = simulation->get_height(IN_PIXELS);
}

System::Void pidregulator::MainForm::trackBar1_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	rotation_speed = Convert::ToInt32(trackBar1->Value);
	label6->Text = Convert::ToString(trackBar1->Value);
}

System::Void pidregulator::MainForm::numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	get_k();
	controller->set_components(k_P, k_I, k_D);
}


System::Void pidregulator::MainForm::trackBar2_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	float value = Math::Round(trackBar2->Value / 100.0f, 2);
	label8->Text = Convert::ToString(value);
	setpoint = value;
}


System::Void pidregulator::MainForm::pictureBox3_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (on)
	{
		pictureBox3->Image = Image::FromFile("off.png");
		on = false;
		chart1->Series[0]->Color = Color::FromArgb(192, 0, 0);
	}
	else
	{
		pictureBox3->Image = Image::FromFile("on.png");
		on = true;
		chart1->Series[0]->Color = Color::FromArgb(0, 192, 0);

	}
}

System::Void pidregulator::MainForm::trackBar3_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	float value = trackBar3->Value;
	simulation->set_start_height(value);
	label10->Text = Convert::ToString(value);
}

System::Void pidregulator::MainForm::MainForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
	Application::Exit();
}

System::Void pidregulator::MainForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	panel1->Visible = false;
	panel4->Visible = true;
}

System::Void pidregulator::MainForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	panel1->Location = panel4->Location;
	panel4->Visible = false;
	panel1->Visible = true;
}

System::Void pidregulator::MainForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	panel5->Location = panel4->Location;
	panel4->Visible = false;
	panel5->Visible = true;
}

System::Void pidregulator::MainForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void pidregulator::MainForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ text = gcnew String("Данное приложение создано для симуляции работы и настройки пид-регулятора на основе реальной, но идеализированной системы, и также предоставляет визуализацию влияния различных настроек на объект управления.\n\nБольше информации можно получить здесь: https://ru.wikipedia.org/wiki/ПИД-регулятор");
	MessageBox::Show(text, "INFO", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

System::Void pidregulator::MainForm::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
	panel5->Visible = false;
	panel4->Visible = true;
}