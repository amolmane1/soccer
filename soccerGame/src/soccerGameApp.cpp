#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class soccerGameApp : public AppNative {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void soccerGameApp::setup()
{
}

void soccerGameApp::mouseDown( MouseEvent event )
{
}

void soccerGameApp::update()
{
}

void soccerGameApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_NATIVE( soccerGameApp, RendererGl )