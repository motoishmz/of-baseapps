#include "ofMain.h"

#include "NIKontrolF1.h"

class ofApp : public ofBaseApp, NIKontrolF1
{
	
public:
	
	void setup()
	{
		ofSetFrameRate(60);
		ofSetVerticalSync(true);
	}
	
	void update()
	{
		
	}
	
	void draw()
	{
		
	}
	
	void keyPressed(int key)
	{
		
	}
	void mouseMoved(int x, int y)
	{
		
	}
	void mouseDragged( int x, int y, int button)
	{
		
	}
	void mousePressed( int x, int y, int button)
	{
		
	}
	void mouseReleased(int x, int y, int button)
	{
		
	}
};



#pragma mark -
#pragma mark main
int main(){
	ofSetupOpenGL(1024, 768, OF_WINDOW);
	ofRunApp(new ofApp());
}
