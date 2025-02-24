#include <gui/home_screen/HomeView.hpp>

HomeView::HomeView()
{
    background.SetHeaderText(T_HOME);
	background.DisableHomeButton();
	background.DisableGoBackButton();
	background.DisableSetupButton();
}

void HomeView::setupScreen()
{
    HomeViewBase::setupScreen();
	tickCounter = 0;
	background.Update(tickCounter);
}

void HomeView::tearDownScreen()
{
    HomeViewBase::tearDownScreen();
}

void HomeView::handleTickEvent()
{
	tickCounter++;

	background.Update(tickCounter);
}
