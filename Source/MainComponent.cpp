/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"
//#include "./cpl/gui/DesignBase.h"
//#include "./cpl/rendering/CSubpixelSoftwareGraphics.h"
//==============================================================================



//
//
//class CustomLookAndFeel : public LookAndFeel_V4
//{
//
//
//	virtual juce::LowLevelGraphicsContext * createGraphicsContext(
//		const Image &imageToRenderOn,
//		const Point< int > &origin,
//		const RectangleList< int > &initialClip) override
//	{
//		//if (tryToRenderSubpixel/* && imageToRenderOn.getFormat() == imageToRenderOn.RGB*/)
//		//{
//		//	return new rendering::CSubpixelSoftwareGraphics(imageToRenderOn, origin, initialClip);
//		//}
//		//return __nullptr;
//		//auto o = origin;
//		//o.addXY(20, 20);
//		//	return new juce::LowLevelGraphicsSoftwareRenderer(imageToRenderOn, origin, initialClip);
//
//		//return new cpl::rendering::CSubpixelSoftwareGraphics(imageToRenderOn, origin, initialClip);
//		return new cpl::rendering::CSubpixelSoftwareGraphics(imageToRenderOn, origin, initialClip);
//
//	}
//
//
//};
//
//
//
//
//
//
//
//
//
//CustomLookAndFeel cf;
//


MainComponent::MainComponent()
{

	
	
	//LookAndFeel::setDefaultLookAndFeel(&cf);
	LookAndFeel::getDefaultLookAndFeel().setDefaultSansSerifTypefaceName(L"Consolas");
	
	addAndMakeVisible(se = new sampleEditor());

    setSize (600, 400);

	
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setFont (Font (16.0f));
    g.setColour (Colours::white);
    g.drawText ("Hello World!", getLocalBounds(), Justification::centred, true);
}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
	se->setBounds(getLocalBounds());
}
