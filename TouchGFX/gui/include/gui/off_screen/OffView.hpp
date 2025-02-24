#ifndef OFFVIEW_HPP
#define OFFVIEW_HPP

#include <gui_generated/off_screen/OffViewBase.hpp>
#include <gui/off_screen/OffPresenter.hpp>

class OffView : public OffViewBase
{
public:
    OffView();
    virtual ~OffView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // OFFVIEW_HPP
