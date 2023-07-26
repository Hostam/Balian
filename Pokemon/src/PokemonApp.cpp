#include <Balian.hpp>

class Pokemon : public Balian::Application
{
public:
	Pokemon() {

	}
	~Pokemon() {

	}
};

Balian::Application* Balian::CreateApplication() {
	return new Pokemon();
}