#ifndef BACKGROUND_HPP
#define BACKGROUND_HPP

#include <texts/TextKeysAndLanguages.hpp>
#include <gui_generated/containers/BackgroundBase.hpp>

class Background : public BackgroundBase
{
public:
    Background();
    virtual ~Background() {}

    virtual void initialize();

    void SetHeaderText(TEXTS textId);

    void EnableHomeButton();
    void DisableHomeButton();
	void setHomeButtonPressedCallback(GenericCallback<void>& callback);
    void HomePressed();

    void EnableGoBackButton();
    void DisableGoBackButton();
	void setGoBackButtonPressedCallback(GenericCallback<void>& callback);
    void GoBackPressed();

    void EnableSetupButton();
    void DisableSetupButton();
	void setSetupButtonPressedCallback(GenericCallback<void>& callback);
    void SetupPressed();

    void Update(uint32_t tickCounter);

protected:
	GenericCallback<void>* HomeButtonPressedCallback = NULL;
	GenericCallback<void>* GoBackButtonPressedCallback = NULL;
	GenericCallback<void>* SetupButtonPressedCallback = NULL;

};

#endif // BACKGROUND_HPP
