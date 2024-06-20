#include <AdeptCode.h>

class Sandbox : public AdeptCode::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

AdeptCode::Application* AdeptCode::CreateApplication()
{
	return new Sandbox();
}