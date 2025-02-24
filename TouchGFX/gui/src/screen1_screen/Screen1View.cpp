#include <gui/screen1_screen/Screen1View.hpp>

Screen1View::Screen1View() :
SetupButtonPressedCallback(this, &Screen1View::SetupButtonPressedHandler)
{
    background.SetHeaderText(T_SCREEN1);
	background.EnableHomeButton();
	background.DisableGoBackButton();
	background.EnableSetupButton();

	background.setSetupButtonPressedCallback(SetupButtonPressedCallback);
}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
    tickCounter = 0;
	background.Update(tickCounter);
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::SetupButtonPressedHandler(void)
{
   	application().gotoScreen2ScreenNoTransition();
}

void Screen1View::handleTickEvent()
{
	tickCounter++;

	background.Update(tickCounter);
}
