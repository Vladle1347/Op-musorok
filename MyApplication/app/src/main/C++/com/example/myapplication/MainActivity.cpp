#include "MainActivity.h"

namespace com::example::myapplication
{
	using AppCompatActivity = androidx::appcompat::app::AppCompatActivity;
	using Bundle = android::os::Bundle;
	using TextView = android::widget::TextView;
	using ActivityMainBinding = com::example::myapplication::databinding::ActivityMainBinding;

	MainActivity::StaticConstructor::StaticConstructor()
	{
	System::loadLibrary(L"native-lib");
	}

MainActivity::StaticConstructor MainActivity::staticConstructor;

	void MainActivity::onCreate(Bundle *savedInstanceState)
	{
		androidx::appcompat::app::AppCompatActivity::onCreate(savedInstanceState);

		binding = ActivityMainBinding::inflate(getLayoutInflater());
		setContentView(binding->getRoot());

		// Example of a call to a native method
		TextView *tv = binding->sampleText;
		tv->setText(stringFromJNI());
	}
}
