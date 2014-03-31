#include "ofxOscReceiver.h"

class NIKontrolF1
{
	const string prefix = "/ni-kontrol-f1";
	
	ofxOscReceiver receiver;
	
public:
	
	NIKontrolF1(int port = 30000)
	{
		ofAddListener(ofEvents().update, this, &NIKontrolF1::update);
		
		receiver.setup(port);
	}
	
	void update(ofEventArgs &e)
	{
		static ofxOscMessage m;
		
		while (receiver.getNextMessage(&m))
		{
			// ---
			// KNOB
			if (m.getAddress() == prefix+"/knob1") { onKnob1(m.getArgAsInt32(0)); }
			if (m.getAddress() == prefix+"/knob2") { onKnob2(m.getArgAsInt32(0)); }
			if (m.getAddress() == prefix+"/knob3") { onKnob3(m.getArgAsInt32(0)); }
			if (m.getAddress() == prefix+"/knob4") { onKnob4(m.getArgAsInt32(0)); }
			
			
			// ---
			// SLIDER
			if (m.getAddress() == prefix+"/slider1") { onSlider1(m.getArgAsInt32(0)); }
			if (m.getAddress() == prefix+"/slider2") { onSlider2(m.getArgAsInt32(0)); }
			if (m.getAddress() == prefix+"/slider3") { onSlider3(m.getArgAsInt32(0)); }
			if (m.getAddress() == prefix+"/slider4") { onSlider4(m.getArgAsInt32(0)); }
			
			
			// ---
			// CHANNEL
			if (m.getAddress() == prefix+"/channel") { onJog(m.getArgAsInt32(0)); }
			
			
			// ---
			// PAD
			
			// any...
			if (m.getAddress() == prefix+"/pad") {
				onPadPressed(m.getArgAsInt32(0), (bool)m.getArgAsInt32(1));
			}
			
			// each...
			if (m.getAddress() == prefix+"/pad1") { onPad1((bool)m.getArgAsInt32(0)); }
			if (m.getAddress() == prefix+"/pad2") { onPad2((bool)m.getArgAsInt32(0)); }
			if (m.getAddress() == prefix+"/pad3") { onPad3((bool)m.getArgAsInt32(0)); }
			if (m.getAddress() == prefix+"/pad4") { onPad4((bool)m.getArgAsInt32(0)); }
			if (m.getAddress() == prefix+"/pad5") { onPad5((bool)m.getArgAsInt32(0)); }
			if (m.getAddress() == prefix+"/pad6") { onPad6((bool)m.getArgAsInt32(0)); }
			if (m.getAddress() == prefix+"/pad7") { onPad7((bool)m.getArgAsInt32(0)); }
			if (m.getAddress() == prefix+"/pad8") { onPad8((bool)m.getArgAsInt32(0)); }
			if (m.getAddress() == prefix+"/pad9") { onPad9((bool)m.getArgAsInt32(0)); }
			if (m.getAddress() == prefix+"/pad10") { onPad10((bool)m.getArgAsInt32(0)); }
			if (m.getAddress() == prefix+"/pad11") { onPad11((bool)m.getArgAsInt32(0)); }
			if (m.getAddress() == prefix+"/pad12") { onPad12((bool)m.getArgAsInt32(0)); }
			if (m.getAddress() == prefix+"/pad13") { onPad13((bool)m.getArgAsInt32(0)); }
			if (m.getAddress() == prefix+"/pad14") { onPad14((bool)m.getArgAsInt32(0)); }
			if (m.getAddress() == prefix+"/pad15") { onPad15((bool)m.getArgAsInt32(0)); }
			if (m.getAddress() == prefix+"/pad16") { onPad16((bool)m.getArgAsInt32(0)); }
		}
	}
	
protected:
	
	
	// ---
	// KNOB
	virtual void onKnob1(uint value) { ofLog(OF_LOG_NOTICE) << __PRETTY_FUNCTION__ << " " << value; }
	virtual void onKnob2(uint value) { ofLog(OF_LOG_NOTICE) << __PRETTY_FUNCTION__ << " " << value; }
	virtual void onKnob3(uint value) { ofLog(OF_LOG_NOTICE) << __PRETTY_FUNCTION__ << " " << value; }
	virtual void onKnob4(uint value) { ofLog(OF_LOG_NOTICE) << __PRETTY_FUNCTION__ << " " << value; }
	
	
	// ---
	// SLIDER
	virtual void onSlider1(uint value) { ofLog(OF_LOG_NOTICE) << __PRETTY_FUNCTION__ << " " << value; }
	virtual void onSlider2(uint value) { ofLog(OF_LOG_NOTICE) << __PRETTY_FUNCTION__ << " " << value; }
	virtual void onSlider3(uint value) { ofLog(OF_LOG_NOTICE) << __PRETTY_FUNCTION__ << " " << value; }
	virtual void onSlider4(uint value) { ofLog(OF_LOG_NOTICE) << __PRETTY_FUNCTION__ << " " << value; }
	
	
	// ---
	// JOG
	virtual void onJog(uint value) { ofLog(OF_LOG_NOTICE) << __PRETTY_FUNCTION__ << " " << value; }
	
	
	// ---
	// PAD
	
	// any...
	virtual void onPadPressed(int pad_id, bool pressed) {
		ofLog(OF_LOG_NOTICE) << __PRETTY_FUNCTION__ << " " << pad_id << " " << pressed;
	}
	
	// each...
	virtual void onPad1(bool pressed) { ofLog(OF_LOG_NOTICE) << __PRETTY_FUNCTION__ << " " << pressed; }
	virtual void onPad2(bool pressed) { ofLog(OF_LOG_NOTICE) << __PRETTY_FUNCTION__ << " " << pressed; }
	virtual void onPad3(bool pressed) { ofLog(OF_LOG_NOTICE) << __PRETTY_FUNCTION__ << " " << pressed; }
	virtual void onPad4(bool pressed) { ofLog(OF_LOG_NOTICE) << __PRETTY_FUNCTION__ << " " << pressed; }
	virtual void onPad5(bool pressed) { ofLog(OF_LOG_NOTICE) << __PRETTY_FUNCTION__ << " " << pressed; }
	virtual void onPad6(bool pressed) { ofLog(OF_LOG_NOTICE) << __PRETTY_FUNCTION__ << " " << pressed; }
	virtual void onPad7(bool pressed) { ofLog(OF_LOG_NOTICE) << __PRETTY_FUNCTION__ << " " << pressed; }
	virtual void onPad8(bool pressed) { ofLog(OF_LOG_NOTICE) << __PRETTY_FUNCTION__ << " " << pressed; }
	virtual void onPad9(bool pressed) { ofLog(OF_LOG_NOTICE) << __PRETTY_FUNCTION__ << " " << pressed; }
	virtual void onPad10(bool pressed) { ofLog(OF_LOG_NOTICE) << __PRETTY_FUNCTION__ << " " << pressed; }
	virtual void onPad11(bool pressed) { ofLog(OF_LOG_NOTICE) << __PRETTY_FUNCTION__ << " " << pressed; }
	virtual void onPad12(bool pressed) { ofLog(OF_LOG_NOTICE) << __PRETTY_FUNCTION__ << " " << pressed; }
	virtual void onPad13(bool pressed) { ofLog(OF_LOG_NOTICE) << __PRETTY_FUNCTION__ << " " << pressed; }
	virtual void onPad14(bool pressed) { ofLog(OF_LOG_NOTICE) << __PRETTY_FUNCTION__ << " " << pressed; }
	virtual void onPad15(bool pressed) { ofLog(OF_LOG_NOTICE) << __PRETTY_FUNCTION__ << " " << pressed; }
	virtual void onPad16(bool pressed) { ofLog(OF_LOG_NOTICE) << __PRETTY_FUNCTION__ << " " << pressed; }
};
