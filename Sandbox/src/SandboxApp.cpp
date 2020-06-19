#include <Aspen.h>

class Sandbox : public Aspen::Application {

public:

	Sandbox() {}
	~Sandbox() {}

};

Aspen::Application* Aspen::CreateApplication() {

	return new Sandbox();

}