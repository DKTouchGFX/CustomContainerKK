#include <images/BitmapDatabase.hpp>
#include <gui/containers/Background.hpp>

int32_t gTimeInSec = 12 * 60 * 60;

Background::Background()
{

}

void Background::initialize()
{
    BackgroundBase::initialize();
}

void Background::HomePressed()
{
	if ((HomeButtonPressedCallback != NULL) && (HomeButtonPressedCallback->isValid()))
	{
		HomeButtonPressedCallback->execute();
	}
	else
	{
	    application().gotoHomeScreenNoTransition();
	}
}

void Background::EnableHomeButton()
{
	HomeButton.setVisible(true);
}

void Background::DisableHomeButton()
{
	HomeButton.setVisible(false);
}

void Background::setHomeButtonPressedCallback(GenericCallback<void>& callback)
{
	HomeButtonPressedCallback = &callback;
}

void Background::GoBackPressed()
{
	if ((GoBackButtonPressedCallback != NULL) && (GoBackButtonPressedCallback->isValid()))
	{
		GoBackButtonPressedCallback->execute();
	}
	else
	{
	    application().gotoHomeScreenNoTransition();
	}
}

void Background::EnableGoBackButton()
{
	GoBackButton.setVisible(true);
}

void Background::DisableGoBackButton()
{
	GoBackButton.setVisible(false);
}

void Background::setGoBackButtonPressedCallback(GenericCallback<void>& callback)
{
	GoBackButtonPressedCallback = &callback;
}

void Background::SetupPressed()
{
	if ((SetupButtonPressedCallback != NULL) && (SetupButtonPressedCallback->isValid()))
	{
		SetupButtonPressedCallback->execute();
	}
	else
	{
	    application().gotoHomeScreenNoTransition();
	}
}

void Background::EnableSetupButton()
{
	SetupButton.setVisible(true);
}

void Background::DisableSetupButton()
{
	SetupButton.setVisible(false);
}

void Background::setSetupButtonPressedCallback(GenericCallback<void>& callback)
{
	SetupButtonPressedCallback = &callback;
}

void Background::SetHeaderText(TEXTS textId)
{
    HeaderText.setTypedText(touchgfx::TypedText(textId));
}

void Background::Update(uint32_t tickCounter)
{
	if (tickCounter % 100 == 0)
	{
		uint32_t sec  = gTimeInSec % 60;
		uint32_t min  = (gTimeInSec % (60 * 60)) / 60;
		uint32_t hour = gTimeInSec / (60 * 60);

		Unicode::snprintf(TimeTextBuffer, TIMETEXT_SIZE, "%2d:%02d:%02d", hour, min, sec);
		TimeText.invalidate();

		gTimeInSec++;
	}
}
