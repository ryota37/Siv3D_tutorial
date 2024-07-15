# include <Siv3D.hpp>

void Main()
{
	Scene::SetBackground(Palette::Mediumseagreen);
	Circle circle {100,100,30};\
	double theta = 0.33 * Math::Pi ;

	while (System::Update())
	{
		const double t = Scene::Time();
		circle.x += (10*cos(0.5)*t);
		circle.y += (10*sin(0.5)*t);
		circle.draw();

	}
}