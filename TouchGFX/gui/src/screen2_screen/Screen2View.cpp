#include <gui/screen2_screen/Screen2View.hpp>

Screen2View::Screen2View() :
GoBackButtonPressedCallback(this, &Screen2View::GoBackButtonPressedHandler)
{
    background.SetHeaderText(T_SCREEN2);
	background.EnableHomeButton();
	background.EnableGoBackButton();
	background.DisableSetupButton();

	background.setGoBackButtonPressedCallback(GoBackButtonPressedCallback);
}

void Screen2View::setupScreen()
{
    Screen2ViewBase::setupScreen();
    tickCounter = 0;
	background.Update(tickCounter);
}

void Screen2View::tearDownScreen()
{
    Screen2ViewBase::tearDownScreen();
}

void Screen2View::GoBackButtonPressedHandler(void)
{
   	application().gotoScreen1ScreenNoTransition();
}

void Screen2View::handleTickEvent()
{
	tickCounter++;

	background.Update(tickCounter);
}
