#pragma once

#include <string>

namespace com::example::myapplication
{

	using AppCompatActivity = androidx::appcompat::app::AppCompatActivity;

	using Bundle = android::os::Bundle;

	using ActivityMainBinding = com::example::myapplication::databinding::ActivityMainBinding;

	class MainActivity : public AppCompatActivity
	{

		// Used to load the 'native-lib' library on application startup.
		private:
			class StaticConstructor
			{
			public:
				StaticConstructor();
			};

		private:
			static MainActivity::StaticConstructor staticConstructor;


		ActivityMainBinding *binding;

	public:
		virtual ~MainActivity()
		{
			delete binding;
		}

	protected:
		void onCreate(Bundle *savedInstanceState) override;

		/**
		 * A native method that is implemented by the 'native-lib' native library,
		 * which is packaged with this application.
		 */
//JAVA TO C++ CONVERTER NOTE: The following Java 'native' declaration was converted using the Microsoft-specific __declspec(dllimport):
//		public native String stringFromJNI();
	public:
		__declspec(dllimport) std::wstring stringFromJNI();
	};
}
