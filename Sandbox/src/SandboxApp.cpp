#include <Hazel.h>

class Sandbox : public Hazel::Application {
public:
	Sandbox() {


	}

	~Sandbox() {


	}
};

Hazel::Application* Hazel::CreateApplication() { //the defined client application

	//can put code here if we want to do anything else on CreateApplication

	return new Sandbox();
}