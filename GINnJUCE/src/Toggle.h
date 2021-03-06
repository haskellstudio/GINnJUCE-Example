/*
==============================================================================

  This file was auto-generated by the GINnJUCE Transpiler. You're welcome!

==============================================================================
*/

#ifndef TOGGLE_H_INCLUDED
#define TOGGLE_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

class Toggle :
public Component
{
public:
   Toggle();
   ~Toggle();

   void paint(Graphics&) override;
   void resized() override;

   void initializeText();
   void initializePaths();

private:
   TextEditor label;
   DrawablePath background;
   
   JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Toggle)
};

#endif // TOGGLE_H_INCLUDED
