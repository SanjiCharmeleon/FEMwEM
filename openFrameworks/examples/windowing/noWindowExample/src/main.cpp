#include "ofMain.h"
#include "ofApp.h"
#include "ofAppNoWindow.h"

int main() {

	auto window = std::make_shared<ofAppNoWindow>();

	//to have a normal windowed app comment the line above and uncomment the lines below
	//ofGLWindowSettings settings;
	//auto window = ofCreateWindow(settings);
	
	ofRunApp(window, std::make_shared<ofApp>());
	ofRunMainLoop();
}
