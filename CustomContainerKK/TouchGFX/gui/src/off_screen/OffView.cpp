#include <gui/off_screen/OffView.hpp>

OffView::OffView()
{
	OnButton.setPosition(0, 0, 480, 800);
	OnButton.setAlpha(0);
}

void OffView::setupScreen()
{
    OffViewBase::setupScreen();
}

void OffView::tearDownScreen()
{
    OffViewBase::tearDownScreen();
}
