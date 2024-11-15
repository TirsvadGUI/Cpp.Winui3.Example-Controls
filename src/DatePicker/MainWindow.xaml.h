#pragma once

#include "MainWindow.g.h"

namespace winrt::DatePicker::implementation
{
	struct MainWindow : MainWindowT<MainWindow>
	{
		MainWindow()
		{
			// Xaml objects should not call InitializeComponent during construction.
			// See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
		}

		int32_t MyProperty();
		void MyProperty(int32_t value);

		void saveBtn_Click(IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args); // The event handler for the Save button
		void loadBtn_Click(IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args); // The event handler for the Load button

	private:
		int64_t m_myDate = 0; // The selected date
	};
}

namespace winrt::DatePicker::factory_implementation
{
	struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
	{
	};
}
