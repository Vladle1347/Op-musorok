#include "ExampleInstrumentedTest.h"

namespace com::example::myapplication
{
	using Context = android::content::Context;
	using InstrumentationRegistry = androidx::test::platform::app::InstrumentationRegistry;
	using AndroidJUnit4 = androidx::test::ext::junit::runners::AndroidJUnit4;
	using Test = org::junit::Test;
	using RunWith = org::junit::runner::RunWith;
//	import static org.junit.Assert.*;

//JAVA TO C++ CONVERTER TODO TASK: Most Java annotations will not have direct C++ equivalents:
//ORIGINAL LINE: @Test public void useAppContext()
	void ExampleInstrumentedTest::useAppContext()
	{
		// Context of the app under test.
		Context *appContext = InstrumentationRegistry::getInstrumentation().getTargetContext();
		assertEquals(L"com.example.myapplication", appContext->getPackageName());
	}
}
